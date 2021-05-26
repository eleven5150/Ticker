/*
 * symbols.h
 *
 *  Created on: Mar 28, 2021
 *      Author: Eleven
 */

#ifndef INC_SYMBOLS_H_
#define INC_SYMBOLS_H_

#include "stm32f1xx_hal.h"
#include "main.h"
#include "stm32f1xx_it.h"

#define ALPHABET_SIZE 37
#define MATRIX_SIZE 8

uint8_t*** getSymbolMatrixPtrArray(void);
void setSymbolMatrixPtrArray(uint8_t*** ptrArray);

uint8_t symbolMatrix_A[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_B[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_C[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_D[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_E[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_F[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_G[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_H[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_I[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_J[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_K[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_L[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_M[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_N[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_O[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_P[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_Q[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_R[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_S[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_T[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_U[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_V[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_W[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_X[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_Y[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_Z[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_0[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_1[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_2[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_3[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_4[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_5[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_6[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_7[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_8[MATRIX_SIZE][MATRIX_SIZE];
uint8_t symbolMatrix_9[MATRIX_SIZE][MATRIX_SIZE];
uint8_t n[MATRIX_SIZE][MATRIX_SIZE];


#endif /* INC_SYMBOLS_H_ */
