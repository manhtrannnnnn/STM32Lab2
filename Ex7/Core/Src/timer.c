/*
 * timer.c
 *
 *  Created on: Nov 1, 2023
 *      Author: ASUS TUF
 */


#include "timer.h"

int timer0_flag = 0;
int timer0_counter = 0;

void setTimer(int duration)
{
	timer0_counter = duration / 10;
	timer0_flag= 0;
}

void timerRun()
{
	if(timer0_counter > 0)
	{
		timer0_counter--;
		if(timer0_counter <= 0)
		{
			timer0_flag = 1;
		}
	}
}
