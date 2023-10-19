/*
 * led.c
 *
 *  Created on: Oct 19, 2023
 *      Author: srkia
 */

#include "led.h"

void LED_init(){
	RCC->AHB1ENR |= (1 << 0); // Port A clk enable
	GPIOA->MODER &= ~(0b11 << 5 * 2); // Pin PA5 GPIO mode reset
	GPIOA->MODER |= (0b01 << 5 * 2); // Pin PA5 GPIO mode output
	GPIOA->OTYPER &= ~(0b1 << 5);
}
