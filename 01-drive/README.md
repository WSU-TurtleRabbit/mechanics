# The rabbit drive

The rabbit drive consists of an omniwheel with a brushless motor and and BLDC controller, along with the motor mount.

![Render of the rabbit drive with omniwheel and moteus BLDC controller](/01-drive/Render/rabbitwheel_230920-small.png)

## Main parts

- Tarot martin 4008 brushless drone motor
- MJbots moteus controller (we have r4.5)
- the omniwheel has 2x 15 subwheels
- the motor mount (aluminium, but can also be printed)
- the wheel chassis (3d printed)
- the wheel covers (aluminium)

### Tarot Martin 4008 BLDC
The tarot martin is a small efficient BLDC drone motor, 85g weight, 44.5mm diameter, 22mm height, 497W power (18N/24 Pole 330KV, 30A max continuous current).

### MJBots moteus 4.5
The moteus board turns the motor into a servo that can be controlled via CAN bus. It comes with an absolute magnetic encoder and its own microcontroller.

### The omniwheel
The wheel chassis can be printed (PETG), the wheel covers can be machined from aluminium. They are designed so that the motor sits inside the wheel chassis.

### The subwheels
Each subwheel sits on a 2x10 mm steel dowel. Each subwheel consist of 2 2x5x2.5 flanged bearings (52-2Z), with an X-profile O-Ring as "tyre", and a washer on each side.

![Render of one subwheel](/01-drive/Render/subwheel-800x600.png)

### The motor mount

The motor mount is intended to be machined from aluminium (though it can also be printed). It is designed to sit on a 3 mm thick base plate, and with the wheels above, there will be 5 mm clearance between the ground and the base plate (approximately, depends on the performance of the X-rings).

The two bottom holes are sized for an M4 tap, the 4 holes for the moteus board are sized for M2.5 taps, and the holes on top are sized for M3 taps (to mount a next level plate on top).


