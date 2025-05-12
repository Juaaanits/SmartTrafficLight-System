# Smart Traffic Light System with Emergency and Pedestrian Switch

This Arduino-based project simulates a smart traffic light control system using slide switches for emergency and pedestrian requests. The system is tested in Tinkercad.

## 🔧 Features
- North-South (Road A) and East-West (Road B) traffic lights
- Emergency override switch (stops traffic and prioritizes Road A)
- Pedestrian switch (temporarily halts all traffic for safe crossing)
- Red, yellow, and green LEDs for both roads
- Fully compatible with Tinkercad simulation

## 🚦 Components Used
- 6 LEDs (2 red, 2 yellow, 2 green)
- 2 Slide switches (for emergency and pedestrian modes)
- Arduino UNO
- Jumper wires
- (Optional) Breadboard

## 📷 Tinkercad Setup
![Tinkercad Screenshot](screenshot.png)

## 🧠 Code Logic
- If **emergency switch** is ON, override all signals and allow Road A to pass.
- If **pedestrian switch** is ON, turn all lights red for 2 seconds.
- Otherwise, loop the normal traffic signal cycle (Green → Yellow → Red) for each road.

## ✅ How to Use
1. Open `traffic_light.ino` in Arduino IDE or Tinkercad.
2. Set up the components based on the schematic or screenshot.
3. Use slide switches to simulate events.
4. Upload or simulate to test.

## 💻 Author
Juanito M. Ramos II

