#include <msp430.h> 
#include "Robot_Movement.h"

/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    initMotor();

    moveRobotForward();

    __delay_cycles(5000000);

      moveRobotBackward();

    __delay_cycles(5000000);

    moveRobotSmallLeft();
    __delay_cycles(5000000);
    moveRobotBigLeft();
    __delay_cycles(5000000);
    moveRobotSmallRight();
    __delay_cycles(5000000);
    moveRobotBigRight();

	while(1){
//		__delay_cycles(1000000);
//		TACCTL0 |= OUTMOD_5;        // set TACCTL0 to Toggle mode
//		TACCTL1 |= OUTMOD_5;        // set TACCTL1 to Reset mode

//		__delay_cycles(1000000);
//		TACCTL0 |= OUTMOD_4;        // set TACCTL0 to Toggle mode
//		TACCTL1 |= OUTMOD_4;        // set TACCTL1 to Reset mode
	}

	return 0;
}
