/*
 * software_timer.h
 *
 *  Created on: Nov 1, 2023
 *      Author: ASUS TUF
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_counter;
extern int timer0_flag;

void setTimer0(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
