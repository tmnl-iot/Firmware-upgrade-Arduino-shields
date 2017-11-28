# Firmware-upgrade-Arduino-shields

If you have an Arduino NB-IOT shield there are two options for upgrade;

### 1
Using a USB to Serial cable and an power up solution
For Power up of the module the power pin 7 must be set to High (additional to the power supply)

This could be done using an arduino with the power up sketch.

The USB to serial cable can then be connected to the D0/D1 RX/TX connectors.

### 2
Directly from an Arduino device using an Arduino with Passtrough communcation
For this procedure flash the arduino with this adopted passtrough sketch

NOTE: For 8 bits arduino's (e.g. Leonardo) this is not possible due to the high baud rate the updater requires.!
