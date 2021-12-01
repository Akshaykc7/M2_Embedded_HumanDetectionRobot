- Program: Human Detection Robot
- Purpose: Design and Implementation of Human Detection Robot
- Description: Human detection robot vehicle detects the alive human buried
under the debris during natural calamities and control the robot manually for
its movements.
- Input: Fire sensor, Gas sensor, PIR sensor and IR sensor.
- Output: Message to mobile device if motion is detected, object detected, re
detected and gas detected.
Steps that take place in the robot are:
1. Step 1: set up all the devices
2. Step 2: serial data-1 ( Human detection robot)
3. Step 3: Manual control
If-right button
Move right
If-left button
Move left
If-forward button
Move forward
If-backward button
Move backward
End if
End if
End if
End if
4. Step 4: if PIR=True?
Serial data|2(motion detected)
End if
5. Step 5: if IR=True?
Serial data-3(object detected)
End if
6. Step 6: if fire=True?
Serial data-4(fire detected)
End if
7. Step 7: if gas=True?
Serial data-5(gas detected)
End if
8. Step 8: Finished
