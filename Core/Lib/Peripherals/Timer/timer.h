/*
 * timer.h
 *
 *  Created on: Oct 19, 2023
 *      Author: srkia
 */

#ifndef LIB_PERIPHERALS_TIMER_TIMER_H_
#define LIB_PERIPHERALS_TIMER_TIMER_H_

#include <stm32f4xx.h>

volatile extern unsigned int system_ms;

void TIMER_init();

void TIMER_delay(unsigned int ms);

#endif /* LIB_PERIPHERALS_TIMER_TIMER_H_ */
