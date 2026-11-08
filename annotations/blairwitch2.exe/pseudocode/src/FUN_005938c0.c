// Name: FUN_005938c0
// Address: 005938c0
// Address Range: [[005938c0, 00593a00]]
// Convention: unknown
// Signature: void FUN_005938c0(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005938c0(float *param_1,float *param_2)

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
  
  fVar3 = _DAT_005eed92 /
          (param_2[3] * param_2[3] +
          param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
  fVar8 = param_2[2] * fVar3;
  fVar9 = param_2[3] * fVar3;
  fVar10 = *param_2 * param_2[1] * fVar3;
  fVar1 = *param_2;
  fVar2 = *param_2;
  fVar11 = param_2[1] * param_2[1] * fVar3;
  fVar3 = param_2[1];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  param_1[4] = fVar3 * fVar8 + fVar2 * fVar9;
  param_1[8] = fVar4 * fVar9 - fVar1 * fVar8;
  param_1[1] = fVar3 * fVar8 - fVar2 * fVar9;
  param_1[9] = fVar6 * fVar9 + fVar10;
  param_1[2] = fVar4 * fVar9 + fVar1 * fVar8;
  param_1[6] = fVar6 * fVar9 - fVar10;
  *param_1 = 1.0 - (fVar5 * fVar8 + fVar7 * fVar9);
  param_1[5] = 1.0 - (fVar11 + fVar7 * fVar9);
  param_1[10] = 1.0 - (fVar11 + fVar5 * fVar8);
  return;
}
