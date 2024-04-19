---

# Arduino Timer Switch with LCD Display

This Arduino project implements a timer switch with a liquid crystal display (LCD) for user interaction. It allows users to set a duration for power control, after which the system automatically turns off. The system includes two push buttons for setting the duration and displaying system status using the LCD display.

## Overview

The system consists of the following components:

1. **Arduino Board**: Controls the operation of the system and interfaces with other components.
2. **LCD Display (16x2)**: Provides a user interface for setting the duration and displaying system status.
3. **Push Buttons**: Used for setting the duration of power control.
4. **LED Indicators**: Indicate the status of the system (on/off).
5. **Relay Module**: Controls the power supply to the external device.
6. **Resistors and Wiring**: Connect the components together as per the circuit diagram.

## Features

- User-friendly interface with LCD display for easy interaction.
- Adjustable duration for power control (in minutes).
- Automatic turn-off functionality after the set duration.
- LED indicators for visual feedback on system status.

## Installation

To install the project on your Arduino board, follow these steps:

1. Download the Arduino sketch file (`timer_switch.ino`).
2. Open the Arduino IDE and load the sketch file.
3. Connect your Arduino board to your computer using a USB cable.
4. Select the appropriate board and port from the Arduino IDE.
5. Click the "Upload" button to upload the sketch to your Arduino board.

## Usage

1. Connect the components according to the circuit diagram provided.
2. Power on the Arduino board.
3. Use the push buttons to set the desired duration for power control.
4. The LCD display will show the set duration.
5. Press the button to activate the timer switch.
6. The LED indicators will show the status of the system (on/off).
7. After the set duration, the system will automatically turn off.


---
