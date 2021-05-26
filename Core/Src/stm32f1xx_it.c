/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    stm32f1xx_it.c
  * @brief   Interrupt Service Routines.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f1xx_it.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "led.h"
#include "symbols.h"
#include <stdlib.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN TD */

/* USER CODE END TD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
uint8_t count=0;
uint8_t i=0;
uint8_t j=0;
uint8_t k=0;
uint8_t col=0;
uint8_t l=0;
uint8_t frame=0;
char string[32];
int strl;
uint8_t m[8][8]={
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0}};
uint8_t m1[8][8]={
{0,1,1,1,1,1,1,0},
{1,0,0,0,0,0,0,1},
{1,0,1,0,0,1,0,1},
{1,0,0,0,0,0,0,1},
{1,0,1,0,0,1,0,1},
{1,0,0,1,1,0,0,1},
{1,0,0,0,0,0,0,1},
{0,1,1,1,1,1,1,0}};


/* USER CODE END 0 */

/* External variables --------------------------------------------------------*/
extern TIM_HandleTypeDef htim2;
extern TIM_HandleTypeDef htim3;
extern DMA_HandleTypeDef hdma_usart3_rx;
extern UART_HandleTypeDef huart3;
/* USER CODE BEGIN EV */
extern uint8_t*** symbolMatrixPtrArray;
/* USER CODE END EV */

/******************************************************************************/
/*           Cortex-M3 Processor Interruption and Exception Handlers          */
/******************************************************************************/
/**
  * @brief This function handles Non maskable interrupt.
  */
void NMI_Handler(void)
{
  /* USER CODE BEGIN NonMaskableInt_IRQn 0 */

  /* USER CODE END NonMaskableInt_IRQn 0 */
  /* USER CODE BEGIN NonMaskableInt_IRQn 1 */
  while (1)
  {
  }
  /* USER CODE END NonMaskableInt_IRQn 1 */
}

/**
  * @brief This function handles Hard fault interrupt.
  */
void HardFault_Handler(void)
{
  /* USER CODE BEGIN HardFault_IRQn 0 */

  /* USER CODE END HardFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_HardFault_IRQn 0 */
    /* USER CODE END W1_HardFault_IRQn 0 */
  }
}

/**
  * @brief This function handles Memory management fault.
  */
void MemManage_Handler(void)
{
  /* USER CODE BEGIN MemoryManagement_IRQn 0 */

  /* USER CODE END MemoryManagement_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_MemoryManagement_IRQn 0 */
    /* USER CODE END W1_MemoryManagement_IRQn 0 */
  }
}

/**
  * @brief This function handles Prefetch fault, memory access fault.
  */
void BusFault_Handler(void)
{
  /* USER CODE BEGIN BusFault_IRQn 0 */

  /* USER CODE END BusFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_BusFault_IRQn 0 */
    /* USER CODE END W1_BusFault_IRQn 0 */
  }
}

/**
  * @brief This function handles Undefined instruction or illegal state.
  */
void UsageFault_Handler(void)
{
  /* USER CODE BEGIN UsageFault_IRQn 0 */

  /* USER CODE END UsageFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_UsageFault_IRQn 0 */
    /* USER CODE END W1_UsageFault_IRQn 0 */
  }
}

/**
  * @brief This function handles System service call via SWI instruction.
  */
void SVC_Handler(void)
{
  /* USER CODE BEGIN SVCall_IRQn 0 */

  /* USER CODE END SVCall_IRQn 0 */
  /* USER CODE BEGIN SVCall_IRQn 1 */

  /* USER CODE END SVCall_IRQn 1 */
}

/**
  * @brief This function handles Debug monitor.
  */
void DebugMon_Handler(void)
{
  /* USER CODE BEGIN DebugMonitor_IRQn 0 */

  /* USER CODE END DebugMonitor_IRQn 0 */
  /* USER CODE BEGIN DebugMonitor_IRQn 1 */

  /* USER CODE END DebugMonitor_IRQn 1 */
}

/**
  * @brief This function handles Pendable request for system service.
  */
void PendSV_Handler(void)
{
  /* USER CODE BEGIN PendSV_IRQn 0 */

  /* USER CODE END PendSV_IRQn 0 */
  /* USER CODE BEGIN PendSV_IRQn 1 */

  /* USER CODE END PendSV_IRQn 1 */
}

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler(void)
{
  /* USER CODE BEGIN SysTick_IRQn 0 */

  /* USER CODE END SysTick_IRQn 0 */
  HAL_IncTick();
  /* USER CODE BEGIN SysTick_IRQn 1 */

  /* USER CODE END SysTick_IRQn 1 */
}

/******************************************************************************/
/* STM32F1xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32f1xx.s).                    */
/******************************************************************************/

/**
  * @brief This function handles DMA1 channel3 global interrupt.
  */
void DMA1_Channel3_IRQHandler(void)
{
  /* USER CODE BEGIN DMA1_Channel3_IRQn 0 */

  /* USER CODE END DMA1_Channel3_IRQn 0 */
  HAL_DMA_IRQHandler(&hdma_usart3_rx);
  /* USER CODE BEGIN DMA1_Channel3_IRQn 1 */

  /* USER CODE END DMA1_Channel3_IRQn 1 */
}

/**
  * @brief This function handles TIM2 global interrupt.
  */
void TIM2_IRQHandler(void)
{
  /* USER CODE BEGIN TIM2_IRQn 0 */

  /* USER CODE END TIM2_IRQn 0 */
  HAL_TIM_IRQHandler(&htim2);
  /* USER CODE BEGIN TIM2_IRQn 1 */
  frame=symboldigit(string[l]);
for (j=0;j<8;j++){
	for (k=0;k<8;k++){
		if(k<7){
		m[j][k]=m[j][k+1];
		} else {
			m[j][k]=m1[j][col];
		}
	}
}
col++;
if (col>7){
	col=0;
	switch(frame){
	case 0:
		for (j=0;j<8;j++){
			for (k=0;k<8;k++){
				m1[j][k]=symbolMatrix_A[j][k];
			}
		}
		frame=symboldigit(string[l]);
		l++;
		if(l>strl-1){
			frame=6;
			l=0;
		}
				break;
	case 1:
		for (j=0;j<8;j++){
					for (k=0;k<8;k++){
						m1[j][k]=symbolMatrix_B[j][k];
					}
				}
		frame=symboldigit(string[l]);
				l++;
				if(l>strl-1){
					frame=6;
					l=0;
				}
				break;
	case 2:
			for (j=0;j<8;j++){
						for (k=0;k<8;k++){
							m1[j][k]=symbolMatrix_C[j][k];
						}
					}
			frame=symboldigit(string[l]);
					l++;
					if(l>strl-1){
						frame=6;
						l=0;
					}
					break;
	case 3:
			for (j=0;j<8;j++){
						for (k=0;k<8;k++){
							m1[j][k]=symbolMatrix_D[j][k];
						}
					}
			frame=symboldigit(string[l]);
					l++;
					if(l>strl-1){
						frame=6;
						l=0;
					}
					break;
	case 4:
			for (j=0;j<8;j++){
						for (k=0;k<8;k++){
							m1[j][k]=symbolMatrix_E[j][k];
						}
					}
			frame=symboldigit(string[l]);
					l++;
					if(l>strl-1){
						frame=6;
						l=0;
					}
					break;
	case 5:
			for (j=0;j<8;j++){
						for (k=0;k<8;k++){
							m1[j][k]=symbolMatrix_F[j][k];
						}
					}
			frame=symboldigit(string[l]);
					l++;
					if(l>strl-1){
						frame=6;
						l=0;
					}
					break;
	case 6: //empty
		for (j=0;j<8;j++){
					for (k=0;k<8;k++){
						m1[j][k]=n[j][k];
					}
				}
		frame=symboldigit(string[l]);
							l++;
							if(l>strl-1){
								frame=6;
								l=0;
							}
		break;
	case 7:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_G[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 8:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_H[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 9:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_I[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 10:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_J[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 11:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_K[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 12:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_L[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 13:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_M[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 14:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_N[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 15:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_O[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 16:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_P[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 17:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_Q[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 18:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_R[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 19:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_S[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 20:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_T[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 21:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_U[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 22:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_V[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 23:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_W[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 24:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_X[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 25:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_Y[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 26:
				for (j=0;j<8;j++){
							for (k=0;k<8;k++){
								m1[j][k]=symbolMatrix_Z[j][k];
							}
						}
				frame=symboldigit(string[l]);
						l++;
						if(l>strl-1){
							frame=6;
							l=0;
						}
						break;
	case 27:
					for (j=0;j<8;j++){
								for (k=0;k<8;k++){
									m1[j][k]=symbolMatrix_0[j][k];
								}
							}
					frame=symboldigit(string[l]);
							l++;
							if(l>strl-1){
								frame=6;
								l=0;
							}
							break;
	case 28:
					for (j=0;j<8;j++){
								for (k=0;k<8;k++){
									m1[j][k]=symbolMatrix_1[j][k];
								}
							}
					frame=symboldigit(string[l]);
							l++;
							if(l>strl-1){
								frame=6;
								l=0;
							}
							break;
	case 29:
					for (j=0;j<8;j++){
								for (k=0;k<8;k++){
									m1[j][k]=symbolMatrix_2[j][k];
								}
							}
					frame=symboldigit(string[l]);
							l++;
							if(l>strl-1){
								frame=6;
								l=0;
							}
							break;
	case 30:
					for (j=0;j<8;j++){
								for (k=0;k<8;k++){
									m1[j][k]=symbolMatrix_3[j][k];
								}
							}
					frame=symboldigit(string[l]);
							l++;
							if(l>strl-1){
								frame=6;
								l=0;
							}
							break;
	case 31:
					for (j=0;j<8;j++){
								for (k=0;k<8;k++){
									m1[j][k]=symbolMatrix_4[j][k];
								}
							}
					frame=symboldigit(string[l]);
							l++;
							if(l>strl-1){
								frame=6;
								l=0;
							}
							break;
	case 32:
					for (j=0;j<8;j++){
								for (k=0;k<8;k++){
									m1[j][k]=symbolMatrix_5[j][k];
								}
							}
					frame=symboldigit(string[l]);
							l++;
							if(l>strl-1){
								frame=6;
								l=0;
							}
							break;
	case 33:
					for (j=0;j<8;j++){
								for (k=0;k<8;k++){
									m1[j][k]=symbolMatrix_6[j][k];
								}
							}
					frame=symboldigit(string[l]);
							l++;
							if(l>strl-1){
								frame=6;
								l=0;
							}
							break;
	case 34:
					for (j=0;j<8;j++){
								for (k=0;k<8;k++){
									m1[j][k]=symbolMatrix_7[j][k];
								}
							}
					frame=symboldigit(string[l]);
							l++;
							if(l>strl-1){
								frame=6;
								l=0;
							}
							break;
	case 35:
					for (j=0;j<8;j++){
								for (k=0;k<8;k++){
									m1[j][k]=symbolMatrix_8[j][k];
								}
							}
					frame=symboldigit(string[l]);
							l++;
							if(l>strl-1){
								frame=6;
								l=0;
							}
							break;
	case 36:
					for (j=0;j<8;j++){
								for (k=0;k<8;k++){
									m1[j][k]=symbolMatrix_9[j][k];
								}
							}
					frame=symboldigit(string[l]);
							l++;
							if(l>strl-1){
								frame=6;
								l=0;
							}
							break;
	}
}
  /* USER CODE END TIM2_IRQn 1 */
}

/**
  * @brief This function handles TIM3 global interrupt.
  */
void TIM3_IRQHandler(void)
{
  /* USER CODE BEGIN TIM3_IRQn 0 */

  /* USER CODE END TIM3_IRQn 0 */
  HAL_TIM_IRQHandler(&htim3);
  /* USER CODE BEGIN TIM3_IRQn 1 */
  segchar(8);
  if (m[i][count]==1){
				 segchar(count);
				 outpin(i);
}
  count++;
  if (count>7)
  {
	  count=0;
	  i++;
	       if (i>7)
	        {
	      	  i=0;
	        }
  }

  /* USER CODE END TIM3_IRQn 1 */
}

/**
  * @brief This function handles USART3 global interrupt.
  */
void USART3_IRQHandler(void)
{
  /* USER CODE BEGIN USART3_IRQn 0 */

  /* USER CODE END USART3_IRQn 0 */
  HAL_UART_IRQHandler(&huart3);
  /* USER CODE BEGIN USART3_IRQn 1 */

  /* USER CODE END USART3_IRQn 1 */
}

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
