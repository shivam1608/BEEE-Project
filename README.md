# BEEE PROJECT

Made my beee project (yea ik its childish) and it has proper documentation for my team to understand the flow.
 

## Smoke Detector System

This Arduino project is a simple smoke detector system using a gas sensor, LEDs, and a buzzer. It monitors air quality and alerts if smoke levels exceed a certain threshold, with visual and audio signals.

## Components

- **Gas Sensor (A0)**: Detects smoke or gas levels.
- **Red LED (Pin 13)**: Indicates high smoke/gas levels.
- **Green LED (Pin 12)**: Indicates safe smoke/gas levels.
- **Buzzer (Pin 8)**: Sounds an alarm when smoke level exceeds a threshold.

## Circuit Diagram

1. Connect the gas sensor output to **A0** (analog input).
2. Connect the **Red LED** to **Pin 13**.
3. Connect the **Green LED** to **Pin 12**.
4. Connect the **Buzzer** to **Pin 8**.

## Code Explanation

- **BREAK (125)**: Threshold value for smoke level.
- **setup()**: Configures pin modes and initializes serial communication.
- **loop()**: Continuously reads gas sensor values and controls LEDs and buzzer based on the smoke level.

## How It Works

- If the gas sensor reading is above the `BREAK` value:
  - The **Red LED** turns on, indicating danger.
  - The **Green LED** turns off.
  - The **Buzzer** sounds at 220 Hz for 200ms.
- If the gas sensor reading is below the `BREAK` value:
  - The **Green LED** turns on, indicating safe levels.
  - The **Red LED** turns off.
  - The **Buzzer** is off.

## Credits

- Arduino IDE


---