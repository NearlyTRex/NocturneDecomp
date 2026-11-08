// Name: FUN_004f2bb0
// Address: 004f2bb0
// Address Range: [[004f2bb0, 004f2cd4]]
// Convention: unknown
// Signature: void FUN_004f2bb0(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f2bb0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (param_2[2] - param_1[2]) * _DAT_01d7a6a4 +
          (*param_2 - *param_1) * _DAT_01d7a69c + (param_2[1] - param_1[1]) * _DAT_01d7a6a0;
  if (ABS(fVar1) == 0.0) {
    _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
    _DAT_01d71de4 = 0x1473;
    FUN_004e4330("Bad clip!");
  }
  fVar1 = -(_DAT_01d7a6a4 * param_1[2] +
           _DAT_01d7a6a0 * param_1[1] + _DAT_01d7a69c * *param_1 + _DAT_01d7a6a8) / fVar1;
  *param_3 = (*param_2 - *param_1) * fVar1 + *param_1;
  param_3[1] = (param_2[1] - param_1[1]) * fVar1 + param_1[1];
  param_3[2] = (param_2[2] - param_1[2]) * fVar1 + param_1[2];
  param_3[7] = (param_2[7] - param_1[7]) * fVar1 + param_1[7];
  param_3[8] = (param_2[8] - param_1[8]) * fVar1 + param_1[8];
  param_3[3] = (param_2[3] - param_1[3]) * fVar1 + param_1[3];
  param_3[4] = (param_2[4] - param_1[4]) * fVar1 + param_1[4];
  param_3[5] = (param_2[5] - param_1[5]) * fVar1 + param_1[5];
  param_3[6] = (param_2[6] - param_1[6]) * fVar1 + param_1[6];
  return;
}
