# Kicker devices

The kicker is made of a large (off-the-shelf) solenoid, with few a 3d-printed parts and some guides from aluminium.

## Initial design

It begins with the initial design, which is rather straightforward, consisting mainly of a solenoid and a MOSFET transistor. The MOSFET serves as a switch to control the flow of electricity to the solenoid, with three crucial points: gate, drain, and source. A small voltage at the gate controls the larger voltage flowing between the source and drain.

A key caution is to ensure that the MOSFET can handle the current without exceeding its voltage rating, as during the development process, the MOSFETs often burned out from overvoltage.

Selecting the right MOSFET is essential, especially the gate-source voltage (Gvs), which determines the voltage range needed to activate the gate. If the Gvs is too high, the gate won't open. A diode is used to prevent current from flowing back into the solenoid.

![image](https://github.com/WSU-TurtleRabbit/mechanics/assets/166775/88760dc5-31b2-495b-b0b9-3e67c87fd5c3)

This design is similar to that found in Matt Inglot's YouTube tutorials. However, to increase the force of the solenoid, a capacitor and a voltage booster were added to charge the capacitor with around 200 volts, which is then discharged into the solenoid for a stronger kick. This setup allows for control over the voltage and thus the power of the kicker. Despite its simplicity, this design is limited by the need to manually adjust the voltage booster for different kick strengths and the physical space required by the Arduino and voltage booster.

Communication between the kicker and the raspberry as main computer is currently achieved via a USB cable, using a simple serial protocol.

For construction, voltage measurement is necessary to ensure the booster does not exceed the capacitor's rating. The MOSFET chosen must be capable of handling the desired voltage through the solenoid. Initially built on a breadboard, future versions will be on a perf board.

## Improvements

Future improvements include exploring the relationship between a capacitor's voltage and capacitance to potentially eliminate the need for a voltage booster, thereby saving space. Additionally, a reusable fuse will be added for safety, and an H-bridge might be considered for the kicker's design.
![image](https://github.com/WSU-TurtleRabbit/mechanics/assets/166775/b82a2741-42f4-400c-8b0e-a84a5ce154e9)
