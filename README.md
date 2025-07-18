# BeetBeep: A Non-Invasive Heart Blockage Detection Device using ConvLSTM and ECG Sensors.

BeetBeep is a deep learning-based diagnostic tool for non-invasive heart blockage detection using ECG time-series data. The model utilizes a ConvLSTM architecture to analyze patterns in ECG signals and achieve clinical-grade accuracy.

**Finalist at Anveshana’25 – National Level Prototyping Competition**

---

## Features

- ConvLSTM architecture for temporal-spatial ECG signal analysis
- Achieved **98.9% accuracy** with only 7 false positives and 4 false negatives
- Evaluated using confusion matrix, MSE (0.0055), and MAE (0.0386)
- Time-series preprocessing, normalization, and visualization
- Designed for real-time, non-invasive diagnostic deployment

---

## Tech Stack

- **Languages:** Python
- **Libraries:** TensorFlow, NumPy, Matplotlib, Pandas, Scikit-learn
- **Concepts:** Deep Learning, ConvLSTM, ECG Signal Processing, Time-Series Analysis, Classification

---

## Project Structure
ecglstm/
│
├── ecg.csv # ECG dataset (~7.6 MB)
├── ecg.ipynb # Primary training and evaluation notebook
├── ecg1.ipynb # Updated notebook with higher accuracy
│
├── ecg_model.h5 # Trained Keras model
├── ecg_model.tflite # TFLite model for embedded devices
├── ecg_model.h # C header file for microcontroller deployment
├── requirements.txt # Python dependencies
├── README.md # This file
├── .gitignore # Excludes unwanted files from version control

---

## Model Performance 
| Metric          | Value  |
| --------------- | ------ |
| Accuracy        | 98.9%  |
| MSE             | 0.0055 |
| MAE             | 0.0386 |
| False Positives | 7      |
| False Negatives | 4      |

---

# Dataset
- The ECG dataset is included as a .csv file (ecg.csv).
- If using a different dataset, adjust the data loading section in ecg.ipynb.

---

# Deployment Artifacts
- ecg_model.h5 – Full model for further training or evaluation
- ecg_model.tflite – Optimized for mobile/embedded devices
- ecg_model.h – C header file for direct use in microcontroller environments

---

# About Me
- Meghana Kiranchand
- BMS Institute of Technology and Management

