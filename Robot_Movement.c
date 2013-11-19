/*
 * Robot_Movement.c
 *
 *  Created on: Nov 16, 2013
 *      Author: C15Colin.Busho
 */

#include <msp430.h>
#include "Robot_Movement.h"

void initMotor()
{
	 	P1DIR |= BIT1;                // TA0CCR0 on P1.1
		P1SEL |= BIT1;                // TA0CCR0 on P1.1

		P1DIR |= BIT2;                // TA0CCR1 on P1.2
		P1SEL |= BIT2;                // TA0CCR1 on P1.2

		TACTL &= ~MC1|MC0;            // stop timer A0

		TACTL |= TACLR;                // clear timer A0

		TACTL |= TASSEL1;           // configure for SMCLK

		TACCR0 = 100;                // set signal period to 100 clock cycles (~100 microseconds)
		TACCR1 = 50;                // set duty cycle to 50/100 (50%)

		TACCTL0 |= OUTMOD_5;        // set TACCTL0 to Reset mode
		TACCTL1 |= OUTMOD_5;        // set TACCTL1 to Reset mode

		TACTL |= MC0;                // count up

	    P2DIR |= BIT0;                // TA0CCR0 on P2.0
		P2SEL |= BIT0;                // TA0CCR0 on P2.2

		P2DIR |= BIT1;                // TA0CCR1 on P2.1
		P2SEL |= BIT1;                // TA0CCR1 on P2.1

		TA1CTL &= ~MC1|MC0;            // stop timer A0

		TA1CTL |= TACLR;                // clear timer A0

		TA1CTL |= TASSEL1;           // configure for SMCLK

		TA1CCR0 = 100;                // set signal period to 100 clock cycles (~100 microseconds)
		TA1CCR1 = 50;                // set duty cycle to 50/100 (50%)

		TA1CCTL0 |= OUTMOD_5;        // set TACCTL0 to Reset mode
		TA1CCTL1 |= OUTMOD_5;        // set TACCTL1 to Reset mode

		TA1CTL |= MC0;                // count up
}

void moveLeftMotorForward()
{
	TACCTL1 &= ~(OUTMOD2|OUTMOD1|OUTMOD0);
	TACCTL1 |= OUTMOD_4;
	TACCTL0 &=  ~(OUTMOD2|OUTMOD1|OUTMOD0);
	TACCTL0 |= OUTMOD_5;
}

void moveLeftMotorBackward()
{
	TACCTL1 &= ~(OUTMOD2|OUTMOD1|OUTMOD0);
	TACCTL1 |= OUTMOD_5;
	TACCTL0 &=  ~(OUTMOD2|OUTMOD1|OUTMOD0);
	TACCTL0 |= OUTMOD_4;
}

void stopLeftMotor()
{
	TACCTL0 &=  ~(OUTMOD2|OUTMOD1|OUTMOD0);
	TACCTL0 |= OUTMOD_5;
	TACCTL1 &= ~(OUTMOD2|OUTMOD1|OUTMOD0);
	TACCTL1 |= OUTMOD_5;
}

void moveRightMotorForward()
{
	TA1CCTL1 &= ~(OUTMOD2|OUTMOD1|OUTMOD0);
	TA1CCTL1 |= OUTMOD_5;
	TA1CCTL0 &=  ~(OUTMOD2|OUTMOD1|OUTMOD0);
	TA1CCTL0 |= OUTMOD_4;
}

void moveRightMotorBackward()
{
	TA1CCTL1 &= ~(OUTMOD2|OUTMOD1|OUTMOD0);
	TA1CCTL1 |= OUTMOD_4;
	TA1CCTL0 &=  ~(OUTMOD2|OUTMOD1|OUTMOD0);
	TA1CCTL0 |= OUTMOD_5;
}

void stopRightMotor()
{
	TA1CCTL1 &= ~(OUTMOD2|OUTMOD1|OUTMOD0);
	TA1CCTL1 |= OUTMOD_5;
	TA1CCTL0 &=  ~(OUTMOD2|OUTMOD1|OUTMOD0);
	TA1CCTL0 |= OUTMOD_5;
}

void moveRobotForward()
{
	moveLeftMotorForward();
	moveRightMotorForward();
}

void moveRobotBackward()
{
	moveLeftMotorBackward();
	moveRightMotorBackward();
}

void moveRobotSmallLeft()
{
	moveLeftMotorBackward();
	moveRightMotorForward();
}

void moveRobotBigLeft()
{
	stopLeftMotor();
	moveRightMotorForward();
}

void moveRobotSmallRight()
{
	moveRightMotorBackward();
	moveLeftMotorForward();
}

void moveRobotBigRight()
{
	stopRightMotor();
	moveLeftMotorForward();
}
