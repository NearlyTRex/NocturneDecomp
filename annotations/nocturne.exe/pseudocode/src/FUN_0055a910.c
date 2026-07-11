// Name: FUN_0055a910
// Address: 0055a910
// Address Range: [[0055a910, 0055a993]]
// Convention: unknown
// Signature: float * FUN_0055a910(float *param_1,float *param_2)

#include "nocturne.h"

float * FUN_0055a910(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_c [3];
  
  fVar1 = param_2[5];
  fVar2 = *param_1;
  fVar3 = param_2[4];
  fVar4 = param_2[6];
  fVar5 = param_2[7];
  fVar6 = param_1[1];
  fVar7 = param_2[9];
  fVar8 = *param_1;
  fVar9 = param_2[8];
  fVar10 = param_2[10];
  fVar11 = param_2[0xb];
  if (param_1 == local_c) {
    return param_1;
  }
  *param_1 = param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1] + param_2[3];
  param_1[1] = param_1[2] * fVar4 + fVar2 * fVar3 + param_1[1] * fVar1 + fVar5;
  param_1[2] = param_1[2] * fVar10 + fVar8 * fVar9 + fVar6 * fVar7 + fVar11;
  return param_1;
}
