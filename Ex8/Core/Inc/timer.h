/*
 * timer.h
 *
 *  Created on: Nov 1, 2023
 *      Author: ASUS TUF
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int clock_flag;
extern int led_flag;

void setTimer_clock(int duration);
void setTimer_led(int duration);
void timerRun();

#endif /* INC_TIMER_H_ */
