#include "tensorflow/lite/micro/all_ops_resolver.h"
#include "tensorflow/lite/micro/micro_error_reporter.h"
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/micro/micro_mutable_op_resolver.h"
#include "tensorflow/lite/micro/micro_allocator.h"
#include "tensorflow/lite/micro/system_setup.h"
#include "tensorflow/lite/schema/schema_generated.h"
#include "tensorflow/lite/version.h"

#include "ecg_model.h"

constexpr int kTensorArenaSize = 40 * 1024; 
uint8_t tensor_arena[kTensorArenaSize];

void setup() {
    Serial.begin(115200);
    
    tflite::MicroErrorReporter error_reporter;
    tflite::AllOpsResolver resolver;

    // Load the model
    const tflite::Model* model = tflite::GetModel(ecg_model);
    if (model->version() != TFLITE_SCHEMA_VERSION) {
        Serial.println("Model schema version mismatch!");
        return;
    }

    // Set up interpreter
    tflite::MicroInterpreter interpreter(model, resolver, tensor_arena, kTensorArenaSize, &error_reporter);
    if (interpreter.AllocateTensors() != kTfLiteOk) {
        Serial.println("AllocateTensors() failed");
        return;
    }

    Serial.println("Model successfully loaded on ESP32!");
}

void loop() {

}
