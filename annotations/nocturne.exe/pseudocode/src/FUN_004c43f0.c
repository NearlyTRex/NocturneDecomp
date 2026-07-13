// Name: FUN_004c43f0
// Address: 004c43f0
// Address Range: [[004c43f0, 004c44eb]]
// Convention: unknown
// Signature: float * FUN_004c43f0(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_004c43f0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  iVar7 = FUN_00454530(param_1 + 0x150);
  if (*(int *)(iVar7 + 0x110) < 1) {
    fVar5 = (float)_DAT_0058773c;
    fVar1 = *(float *)(param_1 + 0x2d4);
    fVar2 = *(float *)(param_1 + 0x2cc);
    fVar3 = *(float *)(param_1 + 0x2d0);
    fVar6 = (float)_DAT_00587744;
    fVar4 = *(float *)(param_1 + 0x2d4);
    *param_2 = -*(float *)(param_1 + 0x2cc) * fVar5;
    param_2[1] = -0.1;
    param_2[2] = -fVar1 * fVar5;
    param_2[3] = fVar2 * fVar5;
    param_2[4] = fVar3 + fVar6;
    param_2[5] = fVar5 * fVar4;
    return param_2;
  }
  iVar7 = FUN_00454530(param_1 + 0x150);
  *param_2 = *(float *)(iVar7 + 0x338);
  param_2[1] = *(float *)(iVar7 + 0x33c);
  param_2[2] = *(float *)(iVar7 + 0x340);
  param_2[3] = *(float *)(iVar7 + 0x344);
  param_2[4] = *(float *)(iVar7 + 0x348);
  param_2[5] = *(float *)(iVar7 + 0x34c);
  return param_2;
}
