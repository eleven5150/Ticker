/*
 * symbols.c
 *
 *  Created on: Mar 28, 2021
 *      Author: Eleven
 */

#include "symbols.h"
#include <stdlib.h>
uint8_t n[MATRIX_SIZE][MATRIX_SIZE] = 			   {{0,0,0,0,0,0,0,0},
													{0,0,0,0,0,0,0,0},
													{0,0,0,0,0,0,0,0},
													{0,0,0,0,0,0,0,0},
													{0,0,0,0,0,0,0,0},
													{0,0,0,0,0,0,0,0},
													{0,0,0,0,0,0,0,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_A[MATRIX_SIZE][MATRIX_SIZE] = {{0,0,0,1,1,0,0,0},
													{0,0,1,1,1,1,0,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,1,1,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_B[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,1,1,1,0,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,1,1,1,0,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,1,1,1,0,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_C[MATRIX_SIZE][MATRIX_SIZE] = {{0,0,1,1,1,1,0,0},
													{0,1,1,0,0,1,1,0},
													{1,1,0,0,0,0,0,0},
													{1,1,0,0,0,0,0,0},
													{1,1,0,0,0,0,0,0},
													{0,1,1,0,0,1,1,0},
													{0,0,1,1,1,1,0,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_D[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,1,1,0,0,0},
													{0,1,1,0,1,1,0,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,1,1,0,0},
													{0,1,1,1,1,0,0,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_E[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,1,1,1,1,0},
													{0,1,1,0,0,0,0,0},
													{0,1,1,0,0,0,0,0},
													{0,1,1,1,1,1,0,0},
													{0,1,1,0,0,0,0,0},
													{0,1,1,0,0,0,0,0},
													{0,1,1,1,1,1,1,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_F[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,1,1,1,1,0},
													{0,1,1,0,0,0,0,0},
													{0,1,1,0,0,0,0,0},
													{0,1,1,1,1,1,0,0},
													{0,1,1,0,0,0,0,0},
													{0,1,1,0,0,0,0,0},
													{0,1,1,0,0,0,0,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_G[MATRIX_SIZE][MATRIX_SIZE] = {{0,0,1,1,1,1,0,0},
													{0,1,1,0,0,1,1,0},
													{1,1,0,0,0,0,0,0},
													{1,1,0,0,0,0,0,0},
													{1,1,0,0,1,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,0,1,1,1,1,1,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_H[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,1,1,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_I[MATRIX_SIZE][MATRIX_SIZE] = {{0,0,1,1,1,1,0,0},
													{0,0,0,1,1,0,0,0},
													{0,0,0,1,1,0,0,0},
													{0,0,0,1,1,0,0,0},
													{0,0,0,1,1,0,0,0,},
													{0,0,0,1,1,0,0,0},
													{0,0,1,1,1,1,0,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_J[MATRIX_SIZE][MATRIX_SIZE] = {{0,0,0,0,0,1,1,0},
													{0,0,0,0,0,1,1,0},
													{0,0,0,0,0,1,1,0},
													{0,0,0,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,0,1,1,1,1,0,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_K[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,1,1,0,0},
													{0,1,1,1,1,0,0,0},
													{0,1,1,0,1,1,0,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_L[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,0,0,0,0,0},
													{0,1,1,0,0,0,0,0},
													{0,1,1,0,0,0,0,0},
													{0,1,1,0,0,0,0,0},
													{0,1,1,0,0,0,0,0},
													{0,1,1,0,0,0,0,0},
													{0,1,1,1,1,1,1,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_M[MATRIX_SIZE][MATRIX_SIZE] = {{1,1,0,0,0,1,1,0},
													{1,1,1,0,1,1,1,0},
													{1,1,1,1,1,1,1,0},
													{1,1,1,1,1,1,1,0},
													{1,1,0,1,0,1,1,0},
													{1,1,0,0,0,1,1,0},
													{1,1,0,0,0,1,1,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_N[MATRIX_SIZE][MATRIX_SIZE] = {{1,1,0,0,0,1,1,0},
													{1,1,1,0,0,1,1,0},
													{1,1,1,1,0,1,1,0},
													{1,1,0,1,1,1,1,0},
													{1,1,0,0,1,1,1,0},
													{1,1,0,0,0,1,1,0},
													{1,1,0,0,0,1,1,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_O[MATRIX_SIZE][MATRIX_SIZE] = {{0,0,1,1,1,1,0,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,0,1,1,1,1,0,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_P[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,1,1,1,0,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,1,1,1,0,0},
													{0,1,1,0,0,0,0,0},
													{0,1,1,0,0,0,0,0},
													{0,1,1,0,0,0,0,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_Q[MATRIX_SIZE][MATRIX_SIZE] = {{0,0,1,1,1,1,0,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,1,1,1,0},
													{0,0,1,1,1,1,0,0},
													{0,0,0,0,1,1,1,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_R[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,1,1,1,0,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,1,1,1,0,0},
													{0,1,1,0,1,1,0,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_S[MATRIX_SIZE][MATRIX_SIZE] = {{0,0,1,1,1,1,0,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,1,0,0,0,0},
													{0,0,1,1,1,0,0,0},
													{0,0,0,0,1,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,0,1,1,1,1,0,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_T[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,1,1,1,1,0},
													{0,0,0,1,1,0,0,0},
													{0,0,0,1,1,0,0,0},
													{0,0,0,1,1,0,0,0},
													{0,0,0,1,1,0,0,0},
													{0,0,0,1,1,0,0,0},
													{0,0,0,1,1,0,0,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_U[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,0,1,1,1,1,1,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_V[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,0,1,1,1,1,0,0},
													{0,0,0,1,1,0,0,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_W[MATRIX_SIZE][MATRIX_SIZE] = {{1,1,0,0,0,1,1,0},
													{1,1,0,0,0,1,1,0},
													{1,1,0,0,0,1,1,0},
													{1,1,0,1,0,1,1,0},
													{1,1,1,1,1,1,1,0},
													{1,1,1,0,1,1,1,0},
													{1,1,0,0,0,1,1,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_X[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,0,1,1,1,1,0,0},
													{0,0,0,1,1,0,0,0},
													{0,0,1,1,1,1,0,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_Y[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,1,1,0,0,1,1,0},
													{0,0,1,1,1,1,0,0},
													{0,0,0,1,1,0,0,0},
													{0,0,0,1,1,0,0,0},
													{0,0,0,1,1,0,0,0},
													{0,0,0,0,0,0,0,0}};

uint8_t symbolMatrix_Z[MATRIX_SIZE][MATRIX_SIZE] = {{1,1,1,1,1,1,1,0},
													{0,0,0,0,0,1,1,0},
													{0,0,0,0,1,1,0,0},
													{0,0,0,1,1,0,0,0},
													{0,0,1,1,0,0,0,0},
													{0,1,1,0,0,0,0,0},
													{1,1,1,1,1,1,1,0},
													{0,0,0,0,0,0,0,0}};
uint8_t symbolMatrix_0[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,1,1,1,0,0},
													{1,1,0,0,0,1,1,0},
													{1,1,0,0,0,1,1,0},
													{1,1,0,0,0,1,1,0},
													{1,1,0,0,0,1,1,0},
													{1,1,0,0,0,1,1,0},
													{0,1,1,1,1,1,0,0},
													{0,0,0,0,0,0,0,0}};
uint8_t symbolMatrix_1[MATRIX_SIZE][MATRIX_SIZE] = {{0,0,1,1,0,0,0,0},
													{0,1,1,1,0,0,0,0},
													{0,0,1,1,0,0,0,0},
													{0,0,1,1,0,0,0,0},
													{0,0,1,1,0,0,0,0},
													{0,0,1,1,0,0,0,0},
													{0,0,1,1,0,0,0,0},
													{0,0,0,0,0,0,0,0}};
uint8_t symbolMatrix_2[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,1,1,0,0,0},
													{1,1,0,0,1,1,0,0},
													{0,0,0,0,1,1,0,0},
													{0,0,1,1,1,0,0,0},
													{0,1,1,0,0,0,0,0},
													{1,1,0,0,0,0,0,0},
													{1,1,1,1,1,1,0,0},
													{0,0,0,0,0,0,0,0}};
uint8_t symbolMatrix_3[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,1,1,0,0,0},
													{1,1,0,0,1,1,0,0},
													{0,0,0,0,1,1,0,0},
													{0,0,1,1,1,0,0,0},
													{0,0,0,0,1,1,0,0},
													{1,1,0,0,1,1,0,0},
													{0,0,1,1,1,0,0,0},
													{0,0,0,0,0,0,0,0}};
uint8_t symbolMatrix_4[MATRIX_SIZE][MATRIX_SIZE] = {{0,0,0,1,1,1,0,0},
													{0,0,1,1,1,1,0,0},
													{0,1,1,0,1,1,0,0},
													{1,1,0,0,1,1,0,0},
													{1,1,1,1,1,1,1,0},
													{0,0,0,0,1,1,0,0},
													{0,0,0,0,1,1,0,0},
													{0,0,0,0,0,0,0,0}};
uint8_t symbolMatrix_5[MATRIX_SIZE][MATRIX_SIZE] = {{1,1,1,1,1,1,0,0},
													{1,1,0,0,0,0,0,0},
													{1,1,1,1,1,0,0,0},
													{0,0,0,0,1,1,0,0},
													{0,0,0,0,1,1,0,0},
													{1,1,0,0,1,1,0,0},
													{0,1,1,1,1,0,0,0},
													{0,0,0,0,0,0,0,0}};
uint8_t symbolMatrix_6[MATRIX_SIZE][MATRIX_SIZE] = {{0,0,1,1,1,0,0,0},
													{0,1,1,0,0,0,0,0},
													{1,1,0,0,0,0,0,0},
													{1,1,1,1,1,0,0,0},
													{1,1,0,0,1,1,0,0},
													{1,1,0,0,1,1,0,0},
													{0,1,1,1,1,0,0,0},
													{0,0,0,0,0,0,0,0}};
uint8_t symbolMatrix_7[MATRIX_SIZE][MATRIX_SIZE] = {{1,1,1,1,1,1,0,0},
													{0,0,0,0,1,1,0,0},
													{0,0,0,0,1,1,0,0},
													{0,0,0,1,1,0,0,0},
													{0,0,1,1,0,0,0,0},
													{0,0,1,1,0,0,0,0},
													{0,0,1,1,0,0,0,0},
													{0,0,0,0,0,0,0,0}};
uint8_t symbolMatrix_8[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,1,1,0,0,0},
													{1,1,0,0,1,1,0,0},
													{1,1,0,0,1,1,0,0},
													{0,1,1,1,1,0,0,0},
													{1,1,0,0,1,1,0,0},
													{1,1,0,0,1,1,0,0},
													{0,1,1,1,1,0,0,0},
													{0,0,0,0,0,0,0,0}};
uint8_t symbolMatrix_9[MATRIX_SIZE][MATRIX_SIZE] = {{0,1,1,1,1,0,0,0},
													{1,1,0,0,1,1,0,0},
													{1,1,0,0,1,1,0,0},
													{0,1,1,1,1,1,0,0},
													{0,0,0,0,1,1,0,0},
													{0,0,0,1,1,0,0,0},
													{0,1,1,1,0,0,0,0},
													{0,0,0,0,0,0,0,0}};




uint8_t*** getSymbolMatrixPtrArray(void){
  uint8_t*** symbolMatrixPtrArray;
  symbolMatrixPtrArray = malloc(ALPHABET_SIZE * sizeof(uint8_t**));
  setSymbolMatrixPtrArray(symbolMatrixPtrArray);
  return symbolMatrixPtrArray;
}

void setSymbolMatrixPtrArray(uint8_t*** ptrArray){
  ptrArray[0] = malloc(MATRIX_SIZE * sizeof(uint8_t*));
  ptrArray[0][0] = symbolMatrix_A[0];
  ptrArray[0][1] = symbolMatrix_A[1];
  ptrArray[0][2] = symbolMatrix_A[2];
  ptrArray[0][3] = symbolMatrix_A[3];
  ptrArray[0][4] = symbolMatrix_A[4];
  ptrArray[0][5] = symbolMatrix_A[5];
  ptrArray[0][6] = symbolMatrix_A[6];
  ptrArray[0][7] = symbolMatrix_A[7];

  ptrArray[1] = malloc(MATRIX_SIZE * sizeof(uint8_t*));
  	ptrArray[1][0] = symbolMatrix_B[0];
    ptrArray[1][1] = symbolMatrix_B[1];
    ptrArray[1][2] = symbolMatrix_B[2];
    ptrArray[1][3] = symbolMatrix_B[3];
    ptrArray[1][4] = symbolMatrix_B[4];
    ptrArray[1][5] = symbolMatrix_B[5];
    ptrArray[1][6] = symbolMatrix_B[6];
    ptrArray[1][7] = symbolMatrix_B[7];

  ptrArray[2] = malloc(MATRIX_SIZE * sizeof(uint8_t*));
      ptrArray[2][0] = symbolMatrix_C[0];
      ptrArray[2][1] = symbolMatrix_C[1];
      ptrArray[2][2] = symbolMatrix_C[2];
      ptrArray[2][3] = symbolMatrix_C[3];
      ptrArray[2][4] = symbolMatrix_C[4];
      ptrArray[2][5] = symbolMatrix_C[5];
      ptrArray[2][6] = symbolMatrix_C[6];
      ptrArray[2][7] = symbolMatrix_C[7];

  ptrArray[3] = malloc(MATRIX_SIZE * sizeof(uint8_t*));
       ptrArray[3][0] = symbolMatrix_D[0];
       ptrArray[3][1] = symbolMatrix_D[1];
       ptrArray[3][2] = symbolMatrix_D[2];
       ptrArray[3][3] = symbolMatrix_D[3];
       ptrArray[3][4] = symbolMatrix_D[4];
       ptrArray[3][5] = symbolMatrix_D[5];
       ptrArray[3][6] = symbolMatrix_D[6];
       ptrArray[3][7] = symbolMatrix_D[7];

  ptrArray[4] = malloc(MATRIX_SIZE * sizeof(uint8_t*));
      ptrArray[4][0] = symbolMatrix_E[0];
      ptrArray[4][1] = symbolMatrix_E[1];
      ptrArray[4][2] = symbolMatrix_E[2];
      ptrArray[4][3] = symbolMatrix_E[3];
      ptrArray[4][4] = symbolMatrix_E[4];
      ptrArray[4][5] = symbolMatrix_E[5];
      ptrArray[4][6] = symbolMatrix_E[6];
      ptrArray[4][7] = symbolMatrix_E[7];


  ptrArray[5] = malloc(MATRIX_SIZE * sizeof(uint8_t*));
      ptrArray[5][0] = symbolMatrix_F[0];
      ptrArray[5][1] = symbolMatrix_F[1];
      ptrArray[5][2] = symbolMatrix_F[2];
      ptrArray[5][3] = symbolMatrix_F[3];
      ptrArray[5][4] = symbolMatrix_F[4];
      ptrArray[5][5] = symbolMatrix_F[5];
      ptrArray[5][6] = symbolMatrix_F[6];
      ptrArray[5][7] = symbolMatrix_F[7];
}

