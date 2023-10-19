/*
 * timer.c
 *
 *  Created on: Oct 19, 2023
 *      Author: srkia
 */

#include "timer.h"

volatile unsigned int system_ms = 0;

void TIMER_init(){
	RCC->APB1ENR |= (0b1 << 0); // TIM2 clk enable
	//APB1 = 42 MHz
	TIM2->PSC = 42 - 1; //Set TIM2 prescaler
	TIM2->ARR = 1000 - 1; //Set TIM2 period

	TIM2->DIER |= (0b1 << 0); //TIM2 enable interrupt
	TIM2->CR1 |= (0b1 << 0); //TIM2 enable counter
	NVIC->ISER[0] |= (0b1 << 28); // set interrupt vector
}

void TIMER_delay(unsigned int ms){
	unsigned int tmp_ms = system_ms;
	while((system_ms - tmp_ms) < ms);
}

void TIM2_IRQHandler(){
	if(TIM2->SR & (0b1 << 0)){
		system_ms++;
		TIM2->SR &= ~(0b1 << 0);
	}
}
