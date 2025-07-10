# 🚦 Traffic-Light-Simulation


![Platform](https://img.shields.io/badge/Platform-Arduino-blue?logo=arduino)
![Status](https://img.shields.io/badge/Project-Completed-brightgreen)
![Level](https://img.shields.io/badge/Level-Beginner-yellow)
![Built With](https://img.shields.io/badge/Built%20With-C%2B%2B%20%7C%20ArduinoIDE-orange)

## 📄 Project Description

**Traffic-Light-Simulation** is a hands-on Arduino project that replicates the functioning of a real-world traffic signal using LEDs. Built for self-practice and skill enhancement, the project reinforces core concepts of embedded systems, sequential logic, and microcontroller-based hardware control.

This simulation features a fully timed light cycle—red, yellow, and green phases—along with a blinking green warning to closely mimic actual traffic flow patterns. It's an ideal beginner project that bridges theory with real-time hardware implementation.



### ✨ Key Highlights

- Developed independently for learning embedded systems  
- Uses basic components (LEDs, resistors, jumper wires, Arduino Uno)  
- Demonstrates real-world sequencing and logic control  
- Includes a green light blinking phase for added realism



## 🔄 Traffic Signal Sequence

The traffic light follows a specific timed sequence, designed to mimic a real-world intersection:

1. 🔴 **Red ON** – 3 seconds  
2. 🟡 **Yellow ON** – 1 second  
3. 🔴🟡 **Red and Yellow OFF**  
4. 🟢 **Green ON** – 3 seconds  
5. 🟢 **Green Blinks** – 3 times (0.5 sec ON, 0.5 sec OFF)  
6. ⚫ **All OFF** – 1 second  
7. 🔁 Repeat the cycle



## 📽️ Demo Video

▶️ [Watch the Project Demo](https://drive.google.com/file/d/1gsn7msTK_bay_aMktc-B3htmRpdgCpuA/view?usp=drive_link)

This video shows the breadboard-based Arduino traffic light simulation, demonstrating the red, yellow, green, and blinking green sequence in action.




## 🧰 Components Used

- 🔌 **Arduino Uno** – 1 unit  
- 🔴 **Red LED** – 1  
- 🟡 **Yellow LED** – 1  
- 🟢 **Green LED** – 1  
-  **220 Ω Resistors** – 3  
- 🧵 **Male-to-Male Jumper Wires** – ~7  
- 🔲 **Breadboard** – 1  
- 🔌 **USB Cable** – for uploading code to Arduino



## ⚙️ Setup Instructions

1. **Connect the LEDs**:
   - Red LED → Pin 2 (with 220Ω resistor)
   - Yellow LED → Pin 3 (with 220Ω resistor)
   - Green LED → Pin 4 (with 220Ω resistor)

2. **Complete Ground Connections**:
   - Connect the cathode (short leg) of all LEDs to GND using jumper wires.

3. **Power the Arduino**:
   - Use a USB cable to connect the Arduino Uno to your computer.

4. **Upload the Code**:
   - Open the `.ino` file in the Arduino IDE.
   - Select the correct board and port.
   - Click **Upload**.

5. ✅ Once uploaded, the traffic signal sequence will begin automatically.

---

## 🖼️ Circuit Diagram

Below is the circuit diagram created using Tinkercad to visualize the connections for the traffic light simulation:


![traffic_light_ckt](https://github.com/user-attachments/assets/5c84ae58-bd9e-419f-b5a3-44b840162b70)

---

## 🚀 Future Scope

- Add pedestrian signal functionality with push-button control.
- Integrate a countdown timer using an LCD or 7-segment display.
- Build a PCB version for a more permanent prototype. 

This project was created as part of self-learning and practical exploration of embedded systems and Arduino programming.


