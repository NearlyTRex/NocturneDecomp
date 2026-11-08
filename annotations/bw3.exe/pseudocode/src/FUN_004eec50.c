// Name: FUN_004eec50
// Address: 004eec50
// Address Range: [[004eec50, 004eecfb]]
// Convention: unknown
// Signature: void FUN_004eec50(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eec50(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_004edcc0();
  fVar1 = param_1[1] - *(float *)(_DAT_01d76cfc + 0x28);
  fVar2 = fVar1 * _DAT_01d7f54c;
  fVar5 = *param_1 - *(float *)(_DAT_01d76cfc + 0x24);
  fVar6 = fVar5 * _DAT_01d7f540;
  fVar5 = fVar5 * _DAT_01d7f53c;
  fVar1 = fVar1 * _DAT_01d7f550;
  fVar3 = param_1[2] - *(float *)(_DAT_01d76cfc + 0x2c);
  fVar4 = fVar3 * _DAT_01d7f55c;
  param_2[2] = 1.0;
  fVar3 = fVar3 * _DAT_01d7f560;
  param_2[4] = 0.0;
  fVar4 = fVar4 + fVar5 + fVar2;
  fVar3 = fVar1 + fVar6 + fVar3;
  *param_2 = fVar4;
  fVar1 = _DAT_01d76ca8;
  fVar4 = fVar4 * _DAT_01d76ca8;
  param_2[1] = fVar3;
  param_2[3] = 1.0;
  fVar1 = _DAT_01d76c68 + fVar3 * fVar1;
  param_2[5] = _DAT_01d76c64 + fVar4;
  param_2[6] = fVar1;
  return;
}
