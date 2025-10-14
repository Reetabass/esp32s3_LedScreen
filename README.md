# ESP32-S3 OLED Display Test

Test project for an **ESP32-S3** board driving a **128×64 OLED screen** using **ESP-IDF** with **Arduino components**.

---

##  Overview

This repository demonstrates how to integrate the **Adafruit SSD1306** display driver with an **ESP32-S3** using the **Arduino core inside ESP-IDF**.  
It runs the classic Adafruit graphics test sequence on a 128×64 OLED display over I²C.

The screen size and demo behaviour can easily be changed using the official Adafruit SSD1306 example files.

---

##  Hardware Used

- **Board:** Adafruit QT Py ESP32-S3  
- **Display:** 0.96″ 128×64 I²C OLED (SSD1306 driver)  
- **Connections:**

  | OLED Pin | ESP32-S3 Pin | Notes |
  |-----------|--------------|-------|
  | VCC | 3.3 V | Power |
  | GND | GND | Ground |
  | SDA | GPIO 7 | I²C data |
  | SCL | GPIO 6 | I²C clock |

---

##  Software Stack

| Component | Description |
|------------|-------------|
| **ESP-IDF** | Base framework providing FreeRTOS, drivers, and build system |
| **Arduino Core** | Added as a managed component (`arduino-esp32`) to use familiar Arduino APIs |
| **Adafruit SSD1306** | Display driver |
| **Adafruit GFX** | Graphics primitives library |
| **Adafruit BusIO** | I²C/SPI helper layer used by SSD1306 |

---

##  Libraries and Repositories Used

This project includes or references code from:

- [Adafruit SSD1306 Library](https://github.com/adafruit/Adafruit_SSD1306)
- [Adafruit GFX Library](https://github.com/adafruit/Adafruit-GFX-Library)
- [Adafruit BusIO Library](https://github.com/adafruit/Adafruit_BusIO)
- [Arduino-ESP32 Core](https://github.com/espressif/arduino-esp32)

---

## Building the Project

1. **Clone this repository**
```bash
  git clone https://github.com/<your-username>/<your-repo>.git
  cd <your-repo>
```
2️. Add Arduino as a Managed Component
```bash
  idf.py add-dependency "espressif/arduino-esp32:*"
```

This will automatically download and integrate the Arduino core into your ESP-IDF project.

3️. Set the Target
```bash
  idf.py set-target esp32s3
```
4️. Build the Project
```bash
  idf.py build
```
5️. Flash and Monitor
```bash
  idf.py flash monitor
```
