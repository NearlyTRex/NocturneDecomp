// Name: FUN_00561310
// Address: 00561310
// Address Range: [[00561310, 0056149d]]
// Convention: unknown
// Signature: void FUN_00561310(float *param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00561310(float *param_1,float param_2,float param_3)

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
  fVar3 = (1.0 - param_3) * _DAT_005eb0d8;
  fVar2 = fVar1 * param_2;
  fVar4 = fVar3 * _DAT_005eb0dc;
  fVar7 = fVar3 * _DAT_005eb0e0;
  fVar6 = _DAT_005eb0dc - fVar3;
  fVar5 = fVar3 + _DAT_005eb0e0;
  fVar9 = _DAT_005eb0e4 - fVar4;
  param_1[1] = fVar5 * fVar1 + fVar6 * fVar2 + 1.0;
  fVar8 = fVar3 * _DAT_005eb0ec;
  fVar10 = fVar3 + _DAT_005eb0e8;
  param_1[3] = fVar3 * fVar2 - fVar3 * fVar1;
  fVar11 = fVar3 * _DAT_005eb0e4;
  fVar6 = fVar6 * _DAT_005eb0e4;
  param_1[4] = (fVar8 * param_2 + fVar7 * fVar1) - fVar3;
  fVar7 = fVar9 * _DAT_005eb0dc;
  param_1[5] = fVar5 * _DAT_005eb0dc * param_2 + fVar6 * fVar1;
  fVar5 = fVar10 * _DAT_005eb0e4;
  param_1[7] = fVar11 * fVar1 - fVar4 * param_2;
  *param_1 = (-fVar3 * fVar2 + fVar4 * fVar1) - fVar3 * param_2;
  param_1[2] = fVar9 * fVar1 + fVar10 * fVar2 + fVar3 * param_2;
  param_1[6] = fVar5 * fVar1 + fVar7 * param_2 + fVar3;
  return;
}
