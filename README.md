							 Servo Motor Control with Arduino and Tinkercad

 Project Overview
This project demonstrates how to control a servo motor using an Arduino Uno. The servo motor moves between 0 and 180 degrees at different speeds based on button inputs. The project uses Tinkercad for circuit simulation and the code is written in Arduino's IDE (C++). The system uses four buttons to select different speeds for the servo motor.

 Components Used
- Arduino Uno
- Servo Motor
- 4 Push Buttons
- Breadboard
- Connecting Wires

 Circuit Design
The circuit was designed and simulated in **Tinkercad**. Four buttons are used to control the speed at which the servo motor moves. The buttons are connected to pins 4, 5, 6, and 7 on the Arduino, with internal pull-up resistors enabled. An interrupt is triggered by a separate button on pin 2, which reads the state of the four speed buttons.

 Code Explanation
The code reads inputs from four buttons and adjusts the speed of the servo motor based on which button is pressed. The servo motor moves from 0 to 180 degrees and then back to 0, with the speed determined by the button press.

Speed Control
Button 1: Slow speed (100 ms delay)
Button 2: Medium speed (50 ms delay)
Button 3: Fast speed (25 ms delay)
Button 4: Very fast speed (5 ms delay)
Interrupt Handling
The code uses an interrupt service routine (ISR) to detect when a button is pressed and update the speed accordingly. This ensures quick response to user input without blocking the main loop.

How to Run
Open the Arduino IDE.
Copy and paste the provided code into a new Arduino .ino file.
Set up the circuit as shown in the Tinkercad simulation.
Upload the code to your Arduino board.
Press the buttons to control the speed of the servo motor.
Simulation
This project was designed and tested in Tinkercad. You can simulate the project or implement it with physical components.

TinkerCad:![portfolio-5](https://github.com/user-attachments/assets/147c76c0-4df4-44c7-bcc0-b12b5242fc34)
