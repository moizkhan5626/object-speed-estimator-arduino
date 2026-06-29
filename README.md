# 🚗 Real-Time Object Speed Estimator

A real-time embedded systems project that measures the speed of a moving object using an Arduino Uno, an HC-SR04 ultrasonic sensor, and a Flying Fish IR obstacle sensor.

---

## 📖 Overview

This project estimates the speed of a moving object by measuring the time it takes to travel between two sensors positioned **28 cm apart**.

The ultrasonic sensor starts the timer when an object enters a **15 cm detection zone**, while the IR sensor stops the timer when the object reaches the finish point. The Arduino then calculates the object's speed and displays the results in the Serial Monitor.

This project was developed through multiple iterations involving testing, debugging, sensor calibration, and user interface refinement.

---

## ✨ Features

* Real-time object speed estimation
* HC-SR04 ultrasonic sensor integration
* Flying Fish IR sensor integration
* Stopwatch-style lap timing
* Automatic lap detection
* Automatic system reset
* Clean Serial Monitor interface
* Event-driven timing using `millis()`

---

## 🛠 Hardware Used

| Component                 | Quantity |
| ------------------------- | -------- |
| Arduino Uno               | 1        |
| HC-SR04 Ultrasonic Sensor | 1        |
| Flying Fish IR Sensor     | 1        |
| Breadboard                | 1        |
| Jumper Wires              | Several  |
| USB Cable                 | 1        |

---

## ⚙️ How It Works

1. The Arduino waits for an object to enter the ultrasonic sensor's detection range.
2. Once detected (within **15 cm**), the stopwatch starts.
3. The object travels **28 cm** toward the IR sensor.
4. When the IR sensor detects the object, the stopwatch stops.
5. The Arduino calculates the speed using:

```
Speed = Distance / Time
```

6. The final lap time and speed are displayed in the Serial Monitor.

---

## 📂 Project Structure

```text
Real-Time-Object-Speed-Estimator/
│
├── Arduino_Code/
│   └── Object_Speed_Estimator/
│       └── Object_Speed_Estimator.ino
│
├── Docs/
│   └── Project_Report.pdf
│
├── Images/
│
├── Videos/
│
├── README.md
└── LICENSE
```

---

## 💻 Development Process

The initial version of the program was generated with AI assistance.

The final implementation was achieved through continuous testing and refinement. Rather than using the generated code unchanged, the project evolved through multiple iterations involving debugging, calibration, logic improvements, and interface redesign until the system performed reliably.

---

## 🧩 Challenges Faced

During development, several practical issues had to be solved:

* Continuous triggering caused repeated measurements.
* Trigger distance required calibration for reliable detection.
* Synchronizing the ultrasonic and IR sensors.
* Preventing duplicate lap recordings.
* Creating a clean, minimal Serial Monitor interface.
* Testing and refining the timing logic using multiple real-world trials.

---

## 📚 Lessons Learned

This project helped me gain practical experience with:

* Arduino programming
* Sensor integration
* Real-time timing using `millis()`
* State-based programming
* Hardware debugging
* Sensor calibration
* Iterative engineering and problem solving
* Human-AI collaborative software development

---

## 🚀 Future Improvements

* OLED display
* Bluetooth connectivity
* Wi-Fi dashboard (ESP32)
* SD card data logging
* Interrupt-based IR detection
* Average, minimum, and maximum speed statistics

---

## 🎥 Demo

*A demonstration video will be added soon.*

---

## 📄 Documentation

A detailed project report is available in the `Docs` folder.

---

## 👨‍💻 Author

**Mohammed Moiz Khan**

If you found this project interesting, feel free to ⭐ star the repository.
