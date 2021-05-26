/*
 * led.h
 *
 *  Created on: 20 мар. 2021 г.
 *      Author: kirSM
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "stm32f1xx_hal.h"
#include "main.h"

#define S1 LED1_Pin
#define S2 LED2_Pin
#define S3 LED3_Pin
#define S4 LED4_Pin
#define S5 LED5_Pin
#define S6 LED6_Pin
#define S7 LED7_Pin
#define S8 LED8_Pin

#define S1_SET HAL_GPIO_WritePin(GPIOA, S1 , GPIO_PIN_SET);
#define S1_RESET HAL_GPIO_WritePin(GPIOA, S1 , GPIO_PIN_RESET);
#define S2_SET HAL_GPIO_WritePin(GPIOA, S2 , GPIO_PIN_SET);
#define S2_RESET HAL_GPIO_WritePin(GPIOA, S2 , GPIO_PIN_RESET);
#define S3_SET HAL_GPIO_WritePin(GPIOA, S3 , GPIO_PIN_SET);
#define S3_RESET HAL_GPIO_WritePin(GPIOA, S3 , GPIO_PIN_RESET);
#define S4_SET HAL_GPIO_WritePin(GPIOA, S4 , GPIO_PIN_SET);
#define S4_RESET HAL_GPIO_WritePin(GPIOA, S4 , GPIO_PIN_RESET);
#define S5_SET HAL_GPIO_WritePin(GPIOA, S5 , GPIO_PIN_SET);
#define S5_RESET HAL_GPIO_WritePin(GPIOA, S5 , GPIO_PIN_RESET);
#define S6_SET HAL_GPIO_WritePin(GPIOA, S6 , GPIO_PIN_SET);
#define S6_RESET HAL_GPIO_WritePin(GPIOA, S6 , GPIO_PIN_RESET);
#define S7_SET HAL_GPIO_WritePin(GPIOA, S7 , GPIO_PIN_SET);
#define S7_RESET HAL_GPIO_WritePin(GPIOA, S7 , GPIO_PIN_RESET);
#define S8_SET HAL_GPIO_WritePin(GPIOA, S8 , GPIO_PIN_SET);
#define S8_RESET HAL_GPIO_WritePin(GPIOA, S8 , GPIO_PIN_RESET);

void segchar (uint8_t seg);

void outpin(uint16_t number);

uint8_t symboldigit(char symb);

#endif /* INC_LED_H_ */
