// Name: FUN_0055cd70
// Address: 0055cd70
// Address Range: [[0055cd70, 0055cec4]]
// Convention: unknown
// Signature: void FUN_0055cd70(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055cd70(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_2[1];
  fVar4 = (float)_DAT_0059834e /
          (param_2[3] * param_2[3] +
          param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
  fVar2 = param_2[2];
  fVar5 = fVar2 * fVar4;
  fVar6 = param_2[3] * fVar4;
  fVar3 = *param_2;
  fVar7 = fVar3 * fVar1 * fVar4;
  fVar4 = fVar1 * fVar1 * fVar4;
  fVar8 = param_2[3] * fVar6;
  param_1[4] = fVar1 * fVar5 + fVar3 * fVar6;
  param_1[8] = fVar1 * fVar6 - fVar3 * fVar5;
  param_1[1] = fVar1 * fVar5 - fVar3 * fVar6;
  param_1[9] = fVar2 * fVar6 + fVar7;
  param_1[2] = fVar1 * fVar6 + fVar3 * fVar5;
  param_1[6] = fVar2 * fVar6 - fVar7;
  *param_1 = 1.0 - (fVar2 * fVar5 + fVar8);
  param_1[5] = 1.0 - (fVar4 + fVar8);
  param_1[10] = 1.0 - (fVar4 + fVar2 * fVar5);
  return;
}
