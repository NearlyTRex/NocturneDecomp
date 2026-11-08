// Name: FUN_00567630
// Address: 00567630
// Address Range: [[00567630, 005677bd]]
// Convention: unknown
// Signature: void FUN_00567630(float *param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00567630(float *param_1,float param_2,float param_3)

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
  fVar3 = (1.0 - param_3) * _DAT_005d5bf6;
  fVar2 = fVar1 * param_2;
  fVar4 = fVar3 * _DAT_005d5bfa;
  fVar7 = fVar3 * _DAT_005d5bfe;
  fVar6 = _DAT_005d5bfa - fVar3;
  fVar5 = fVar3 + _DAT_005d5bfe;
  fVar9 = _DAT_005d5c02 - fVar4;
  param_1[1] = fVar5 * fVar1 + fVar6 * fVar2 + 1.0;
  fVar8 = fVar3 * _DAT_005d5c0a;
  fVar10 = fVar3 + _DAT_005d5c06;
  param_1[3] = fVar3 * fVar2 - fVar3 * fVar1;
  fVar11 = fVar3 * _DAT_005d5c02;
  fVar6 = fVar6 * _DAT_005d5c02;
  param_1[4] = (fVar8 * param_2 + fVar7 * fVar1) - fVar3;
  fVar7 = fVar9 * _DAT_005d5bfa;
  param_1[5] = fVar5 * _DAT_005d5bfa * param_2 + fVar6 * fVar1;
  fVar5 = fVar10 * _DAT_005d5c02;
  param_1[7] = fVar11 * fVar1 - fVar4 * param_2;
  *param_1 = (-fVar3 * fVar2 + fVar4 * fVar1) - fVar3 * param_2;
  param_1[2] = fVar9 * fVar1 + fVar10 * fVar2 + fVar3 * param_2;
  param_1[6] = fVar5 * fVar1 + fVar7 * param_2 + fVar3;
  return;
}
