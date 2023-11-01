/*
 * timer.c
 *
 *  Created on: Nov 1, 2023
 *      Author: ASUS TUF
 */


#include "timer.h"

int clock_counter = 0;
int led_counter = 0;
int clock_flag = 0;
int led_flag = 0;

void setTimer_clock(int duration){
	clock_counter = duration / 10;
	clock_flag = 0;
}
void setTimer_led(int duration){
	led_counter = duration / 10;
	led_flag = 0;
}
void timerRun(){
	if(clock_counter > 0){
		clock_counter--;
		if(clock_counter <= 0){
			clock_flag = 1;
		}
	}
	if(led_counter > 0){
		led_counter--;
		if(led_counter <= 0){
			led_flag = 1;
		}
	}
}
