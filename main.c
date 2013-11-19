#include <msp430.h> 

/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    initMotor();

//    moveLeftMotorBackward();
//
//    __delay_cycles(1000000);
//
      moveLeftMotorForward();

    __delay_cycles(1000000);

    moveLeftMotorBackward();

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
