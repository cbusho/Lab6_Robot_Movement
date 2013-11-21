#Library for Lab 6 Robot Movement
Library for moving the robot using the MSP430
Example code is included in example.c

## General Notes
Configures the robot using TimerA and PWM to move easily with the functions provided

## Functions

- `void initMotor()`
  - Initializes TimerA capture control registers to use PWM to control motors 

- `void moveLeftMotorForward()`
  - Moves the left wheel forward

- `void moveLeftMotorBackward()`
  - Moves the left wheel backward
  
- `void stopLeftMotor()`
  - Stops the left wheel

- `void moveRightMotorForward()`
  - Moves the right motor forward

- `void moveRightMotorBackward()`
  - Moves the right motor backward

- `void stopRightMotor()`
  - Stops the right motor

- `void moveRobotForward()`
  - Moves both wheels forward

- `void moveRobotBackward()`
  - Moves both wheels backward

- `void moveRobotSmallLeft()`
  - Moves left wheel backward and right wheel forward

- `void moveRobotBigLeft()`
  - Moves right wheel forward while left wheel is stopped

- `void moveRobotSmallRight()`
  - Moves right wheel backward and left wheel forward

- `void moveRobotBigRight()`
  - Moves left wheel forward while right wheel is stopped

- `void stopRobot()`
  - Stops both wheels
