// Name: FUN_00513480
// Address: 00513480
// Address Range: [[00513480, 0051352b]]
// Convention: unknown
// Signature: void FUN_00513480(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00513480(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_005124f0();
  fVar1 = param_1[1] - *(float *)(_DAT_01d2257c + 0x28);
  fVar2 = fVar1 * _DAT_01d2adcc;
  fVar5 = *param_1 - *(float *)(_DAT_01d2257c + 0x24);
  fVar6 = fVar5 * _DAT_01d2adc0;
  fVar5 = fVar5 * _DAT_01d2adbc;
  fVar1 = fVar1 * _DAT_01d2add0;
  fVar3 = param_1[2] - *(float *)(_DAT_01d2257c + 0x2c);
  fVar4 = fVar3 * _DAT_01d2addc;
  param_2[2] = 1.0;
  fVar3 = fVar3 * _DAT_01d2ade0;
  param_2[4] = 0.0;
  fVar4 = fVar4 + fVar5 + fVar2;
  fVar3 = fVar1 + fVar6 + fVar3;
  *param_2 = fVar4;
  fVar1 = _DAT_01d22528;
  fVar4 = fVar4 * _DAT_01d22528;
  param_2[1] = fVar3;
  param_2[3] = 1.0;
  fVar1 = _DAT_01d224e8 + fVar3 * fVar1;
  param_2[5] = _DAT_01d224e4 + fVar4;
  param_2[6] = fVar1;
  return;
}
