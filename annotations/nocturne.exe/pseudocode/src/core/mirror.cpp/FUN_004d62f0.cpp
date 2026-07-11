// Name: FUN_004d62f0
// Address: 004d62f0
// Address Range: [[004d62f0, 004d6403]]
// Convention: unknown
// Signature: void FUN_004d62f0(float *param_1,float *param_2,float *param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d62f0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_3c [9];
  float local_18;
  
  local_18 = (param_3[2] - param_2[2]) * param_1[2] +
             (*param_3 - *param_2) * *param_1 + (param_3[1] - param_2[1]) * param_1[1];
  if (ABS(local_18) == 0.0) {
    _DAT_01cc4800 = "..\\core\\mirror.cpp";
    _DAT_01cc4804 = 0x42;
    FUN_004c8440("Bad clip!");
  }
  local_18 = -(param_1[2] * param_2[2] + param_1[1] * param_2[1] + *param_1 * *param_2 + param_1[3])
             / local_18;
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  fVar3 = param_3[2];
  fVar4 = param_2[2];
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  if (param_4 == local_3c) {
    return;
  }
  *param_4 = *param_2 + (*param_3 - *param_2) * local_18;
  param_4[1] = fVar5 + (fVar1 - fVar2) * local_18;
  param_4[2] = fVar6 + (fVar3 - fVar4) * local_18;
  return;
}
