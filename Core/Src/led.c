/*
 * led.c
 *
 *  Created on: 20 мар. 2021 г.
 *      Author: kirSM
 */
#include "led.h"
#include "string.h"
#include "stdlib.h"


void segchar (uint8_t seg){
	switch (seg)
	{
	case 0:
		S1_SET;S2_RESET;S3_RESET;S4_RESET;S5_RESET;S6_RESET;S7_RESET;S8_RESET;
		break;
	case 1:
		S2_SET;S1_RESET;S3_RESET;S4_RESET;S5_RESET;S6_RESET;S7_RESET;S8_RESET;
			break;
	case 2:
		S3_SET;S1_RESET;S2_RESET;S4_RESET;S5_RESET;S6_RESET;S7_RESET;S8_RESET;
			break;
	case 3:
		S4_SET;S1_RESET;S2_RESET;S3_RESET;S5_RESET;S6_RESET;S7_RESET;S8_RESET;
			break;
	case 4:
		S5_SET;S1_RESET;S2_RESET;S3_RESET;S4_RESET;S6_RESET;S7_RESET;S8_RESET;
			break;
	case 5:
		S6_SET;S1_RESET;S2_RESET;S3_RESET;S4_RESET;S5_RESET;S7_RESET;S8_RESET;
			break;
	case 6:
		S7_SET;S1_RESET;S2_RESET;S3_RESET;S4_RESET;S5_RESET;S6_RESET;S8_RESET;
			break;
	case 7:
		S8_SET;S1_RESET;S2_RESET;S3_RESET;S4_RESET;S5_RESET;S6_RESET;S7_RESET;
			break;
	case 8:
			S8_RESET;S1_RESET;S2_RESET;S3_RESET;S4_RESET;S5_RESET;S6_RESET;S7_RESET;
				break;
	}
}

void outpin(uint16_t number){
	switch (number)
		{
		case 0:
			HAL_GPIO_WritePin(GPIOB, OUT1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, OUT2_Pin|OUT3_Pin|OUT6_Pin|OUT7_Pin|OUT8_Pin|OUT4_Pin|OUT5_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB, OUT2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, OUT1_Pin|OUT3_Pin|OUT6_Pin|OUT7_Pin|OUT8_Pin|OUT4_Pin|OUT5_Pin, GPIO_PIN_SET);
				break;
		case 2:
			HAL_GPIO_WritePin(GPIOB, OUT3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, OUT2_Pin|OUT1_Pin|OUT6_Pin|OUT7_Pin|OUT8_Pin|OUT4_Pin|OUT5_Pin, GPIO_PIN_SET);
				break;
		case 3:
			HAL_GPIO_WritePin(GPIOB, OUT4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, OUT2_Pin|OUT3_Pin|OUT6_Pin|OUT7_Pin|OUT8_Pin|OUT1_Pin|OUT5_Pin, GPIO_PIN_SET);
				break;
		case 4:
			HAL_GPIO_WritePin(GPIOB, OUT5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, OUT2_Pin|OUT3_Pin|OUT6_Pin|OUT7_Pin|OUT8_Pin|OUT4_Pin|OUT1_Pin, GPIO_PIN_SET);
				break;
		case 5:
			HAL_GPIO_WritePin(GPIOB, OUT6_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, OUT2_Pin|OUT3_Pin|OUT1_Pin|OUT7_Pin|OUT8_Pin|OUT4_Pin|OUT5_Pin, GPIO_PIN_SET);
				break;
		case 6:
			HAL_GPIO_WritePin(GPIOB, OUT7_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, OUT2_Pin|OUT3_Pin|OUT6_Pin|OUT1_Pin|OUT8_Pin|OUT4_Pin|OUT5_Pin, GPIO_PIN_SET);
				break;
		case 7:
			HAL_GPIO_WritePin(GPIOB, OUT8_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, OUT2_Pin|OUT3_Pin|OUT6_Pin|OUT7_Pin|OUT1_Pin|OUT4_Pin|OUT5_Pin, GPIO_PIN_SET);
				break;
		}
}

uint8_t symboldigit(char symb){
	uint8_t a=6;
	switch (symb){
	case 'a':
		a=0;
		break;
	case 'b':
			a=1;
			break;
	case 'c':
			a=2;
			break;
	case 'd':
			a=3;
			break;
	case 'e':
			a=4;
			break;
	case 'f':
			a=5;
			break;
	case 'g':
			a=7;
			break;
	case 'h':
			a=8;
			break;
	case 'i':
			a=9;
			break;
	case 'j':
			a=10;
			break;
	case 'k':
			a=11;
			break;
	case 'l':
			a=12;
			break;
	case 'm':
			a=13;
			break;
	case 'n':
			a=14;
			break;
	case 'o':
			a=15;
			break;
	case 'p':
			a=16;
			break;
	case 'q':
			a=17;
			break;
	case 'r':
			a=18;
			break;
	case 's':
			a=19;
			break;
	case 't':
			a=20;
			break;
	case 'u':
			a=21;
			break;
	case 'v':
			a=22;
			break;
	case 'w':
			a=23;
			break;
	case 'x':
			a=24;
			break;
	case 'y':
			a=25;
			break;
	case 'z':
			a=26;
			break;
	case '0':
				a=27;
				break;
	case '1':
				a=28;
				break;
	case '2':
				a=29;
				break;
	case '3':
				a=30;
				break;
	case '4':
				a=31;
				break;
	case '5':
				a=32;
				break;
	case '6':
				a=33;
				break;
	case '7':
				a=34;
				break;
	case '8':
				a=35;
				break;
	case '9':
				a=36;
				break;
	}
	return a;
}

