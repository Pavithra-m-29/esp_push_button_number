# NodeMCU ESP8266 7-Segment Display Counter with Push Button

## Project Overview
This project demonstrates a physical 1-digit digital counter system implemented using an **ESP8266 (NodeMCU ESP-12E)** development board on a breadboard setup. The system interfaces a 1-digit 7-segment display (Red) with a tactile push button. Each time the button is manually pressed, the controller registers the input and sequentially increments the displayed digit from 0 to 9.

---

## Components Used
* **NodeMCU ESP8266 (ESP-12E Module)** (Microcontroller)
* **7-Segment Display** (1-Digit, Red)
* **Push Button** (Tactile Switch)
* **Breadboard & Jumper Wires**

---

## Circuit Configuration
The individual segments of the 7-segment display (pins a, b, c, d, e, f, g) and the tactile push button are mapped directly to the digital GPIO pins of the NodeMCU board. 

*Note: When programming the NodeMCU in the Arduino IDE, ensure you map the code variables to the correct physical NodeMCU pin aliases (e.g., D1, D2, D3, etc.) corresponding to your physical wiring setup.*

---

## Features
* **Hardware Prototyping:** A real-world hardware demonstration of input/output interfacing using an ESP8266 microcontroller platform.
* **Dynamic Counter Interfacing:** Seamlessly counts upward on every distinct tactile switch press event.
* **Debounce Stabilization:** Features input-handling code logic to prevent mechanical switch bounce from registering as false duplicate triggers.

---

## Software Requirements
* **Arduino IDE** (With the ESP8266 Core/Board Manager installed)
* **Micro-USB Cable** (For firmware uploading and power supply)

---

## How to Set Up and Run
1. Set up the physical hardware connections on your breadboard as showcased in the project setup.
2. Open your control code (`.ino`) file in the **Arduino IDE**.
3. Navigate to **Tools -> Board** and select **NodeMCU 1.0 (ESP-12E Module)**.
4. Select the correct serial COM Port assigned to your plugged-in NodeMCU board.
5. Click **Upload** to compile and flash the firmware binary onto the controller.
6. Test the system by pressing the tactile button to increment the counter display interface in real time.

---

## Author
Pavithra M
