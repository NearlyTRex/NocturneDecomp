// Name: FUN_00583d60
// Address: 00583d60
// Address Range: [[00583d60, 00583eed]]
// Convention: unknown
// Signature: void FUN_00583d60(float *param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00583d60(float *param_1,float param_2,float param_3)

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
  
  fVar1 = param_2 * param_2;
  fVar3 = (1.0 - param_3) * _DAT_005f62dc;
  fVar2 = fVar1 * param_2;
  fVar4 = fVar3 * _DAT_005f62e0;
  fVar7 = fVar3 * _DAT_005f62e4;
  fVar6 = _DAT_005f62e0 - fVar3;
  fVar5 = fVar3 + _DAT_005f62e4;
  fVar9 = _DAT_005f62e8 - fVar4;
  param_1[1] = fVar5 * fVar1 + fVar6 * fVar2 + 1.0;
  fVar8 = fVar3 * _DAT_005f62f0;
  fVar10 = fVar3 + _DAT_005f62ec;
  param_1[3] = fVar3 * fVar2 - fVar3 * fVar1;
  fVar11 = fVar3 * _DAT_005f62e8;
  fVar6 = fVar6 * _DAT_005f62e8;
  param_1[4] = (fVar8 * param_2 + fVar7 * fVar1) - fVar3;
  fVar7 = fVar9 * _DAT_005f62e0;
  param_1[5] = fVar5 * _DAT_005f62e0 * param_2 + fVar6 * fVar1;
  fVar5 = fVar10 * _DAT_005f62e8;
  param_1[7] = fVar11 * fVar1 - fVar4 * param_2;
  *param_1 = (-fVar3 * fVar2 + fVar4 * fVar1) - fVar3 * param_2;
  param_1[2] = fVar9 * fVar1 + fVar10 * fVar2 + fVar3 * param_2;
  param_1[6] = fVar5 * fVar1 + fVar7 * param_2 + fVar3;
  return;
}
