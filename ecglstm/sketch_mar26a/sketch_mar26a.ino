import numpy as np

with open('ecg_model.tflite', 'rb') as f:
    tflite_model = f.read()

model_array = np.frombuffer(tflite_model, dtype=np.uint8)

with open('ecg_model.h', 'w') as f:
    f.write(f"const unsigned char model_tflite[] = {{\n")
    f.write(', '.join(map(str, model_array.tolist())))
    f.write("\n};")


