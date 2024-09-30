Project Overview In this project, a Teensy 4.0 microcontroller is used with an HC-05 Bluetooth module to establish wireless communication with an Android-based phone. The phone communicates with the Teensy via the "Bluetooth Terminal" app, which can send and receive messages through Bluetooth. The goal is to enable bidirectional communication between the phone and Teensy, displaying messages received from the phone and sending responses back.

Hardware Setup Teensy 4.0: The Teensy 4.0 is a powerful microcontroller with multiple UART interfaces, allowing easy communication with peripherals like the HC-05 Bluetooth module. In this project, we are using Serial1, one of the Teensy’s hardware serial ports, to communicate with the HC-05.

HC-05 Bluetooth Module: The HC-05 is a Bluetooth SPP (Serial Port Protocol) module, typically used for wireless communication with microcontrollers. It operates in a master/slave configuration and is highly suitable for serial communication with devices like smartphones.

The HC-05 module has six pins: RX (Receiver): This pin receives data from the Teensy (connected to Teensy TX). TX (Transmitter): This pin transmits data to the Teensy (connected to Teensy RX). GND (Ground): This pin connects to the ground of the system. VCC: This pin powers the HC-05 module (connect to a 5V or 3.3V supply depending on the Teensy's voltage). EN (Enable): This pin enables the Bluetooth module (not needed for basic communication). STATE: Used to indicate the connection status (optional).

Pin Connections To set up communication between the Teensy 4.0 and the HC-05 Bluetooth module, connect the following pins:

HC-05 RX → Teensy TX1 (Pin 1):

The RX pin of the HC-05 receives data, so it needs to connect to the TX (transmit) pin of the Teensy. HC-05 TX → Teensy RX1 (Pin 0):

The TX pin of the HC-05 transmits data, so it needs to connect to the RX (receive) pin of the Teensy. HC-05 GND → Teensy GND:

Connect the ground pin of the HC-05 to the Teensy’s ground. HC-05 VCC → Teensy 5V:

![Screenshot 2024-09-23 111147](https://github.com/user-attachments/assets/bd63b72b-c723-4ba7-bd31-5c294e1be245)

Power the HC-05 by connecting its VCC to the 5V pin on the Teensy 4.0. Serial Communication with Teensy 4.0 Teensy 4.0 comes with several serial ports, including Serial1, which is used to communicate with the HC-05. Here’s how the serial communication works:

Serial1: This port is a hardware serial interface on the Teensy 4.0 that connects to the HC-05 module. The Serial1 object in the Teensy code is used to send and receive data from the Bluetooth module.

Baud Rate: The HC-05 typically operates at a baud rate of 9600 bps. This is the default baud rate when the module is in communication mode, and it should match the Teensy’s Serial1 baud rate for proper communication.

HC-05 Pins and Their Functionality RX: This pin is used to receive serial data from the Teensy (or any other microcontroller). It is crucial to connect this to the microcontroller’s TX pin to ensure proper data transmission. TX: This pin transmits serial data from the HC-05 to the Teensy. This must be connected to the microcontroller’s RX pin to receive data properly. VCC: Supplies power to the module, which should typically be connected to 5V (or 3.3V if using the correct voltage regulator). GND: Common ground connection with the Teensy. EN: This pin is used to put the module into command mode if needed (optional for basic data transmission). STATE: Indicates the module’s connection status. When connected to another device, this pin goes high.
