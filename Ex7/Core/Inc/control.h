/*
 * control.h
 *
 *  Created on: Nov 1, 2023
 *      Author: ASUS TUF
 */

#ifndef INC_CONTROL_H_
#define INC_CONTROL_H_

#include "main.h"

extern const int MAX_LED;
extern int index_led;
extern int led_buffer[4];
extern int hour, minute, second;
void clear7SEG();
void display7SEG(int num);
void blinkLED();
void update7SEG(int index);
void updateClockBuffer();

#endif /* INC_LED_H_ */

