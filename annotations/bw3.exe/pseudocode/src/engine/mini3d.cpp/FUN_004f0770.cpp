// Name: engine_mini3d.cpp_FUN_004f0770
// Address: 004f0770
// Address Range: [[004f0770, 004f0836]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f0770(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f0770(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = (param_1[1] + param_1[2]) / ((param_1[1] + param_1[2]) - (param_2[1] + param_2[2]));
  fVar2 = (param_2[2] - param_1[2]) * fVar1 + param_1[2];
  param_3[2] = fVar2;
  param_3[1] = -fVar2;
  iVar3 = _DAT_01d7a694;
  *param_3 = (*param_2 - *param_1) * fVar1 + *param_1;
  if (iVar3 != 0) {
    return;
  }
  param_3[0xb] = (param_2[0xb] - param_1[0xb]) * fVar1 + param_1[0xb];
  param_3[10] = (param_2[10] - param_1[10]) * fVar1 + param_1[10];
  param_3[9] = (param_2[9] - param_1[9]) * fVar1 + param_1[9];
  param_3[7] = (param_2[7] - param_1[7]) * fVar1 + param_1[7];
  param_3[8] = (param_2[8] - param_1[8]) * fVar1 + param_1[8];
  param_3[0xc] = (param_2[0xc] - param_1[0xc]) * fVar1 + param_1[0xc];
  param_3[0xd] = (param_2[0xd] - param_1[0xd]) * fVar1 + param_1[0xd];
  return;
}
