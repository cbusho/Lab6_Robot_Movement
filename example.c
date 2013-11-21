#include <msp430.h> 
#include "Robot_Movement.h"

/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    initMotor();

	while(1){
		 moveRobotForward();
		 __delay_cycles(2000000);
		 stopRobot();
		 __delay_cycles(2000000);

		 moveRobotBackward();
		 __delay_cycles(2000000);
		 stopRobot();
		 __delay_cycles(2000000);

		 moveRobotSmallLeft();
		 __delay_cycles(500000);
		 stopRobot();
		 __delay_cycles(2000000);

		 moveRobotSmallRight();
		 __delay_cycles(500000);
		 stopRobot();
		 __delay_cycles(2000000);

		 moveRobotSmallLeft();
		 __delay_cycles(1000000);
		 stopRobot();
		 __delay_cycles(2000000);

		 moveRobotSmallRight();
		 __delay_cycles(1000000);
		 stopRobot();
		 __delay_cycles(2000000);

	}

	return 0;
}
