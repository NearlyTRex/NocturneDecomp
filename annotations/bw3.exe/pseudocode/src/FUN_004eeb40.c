// Name: FUN_004eeb40
// Address: 004eeb40
// Address Range: [[004eeb40, 004eec48]]
// Convention: unknown
// Signature: void FUN_004eeb40(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eeb40(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  
  pfVar7 = _DAT_01d76cfc;
  fVar4 = param_1[1] - _DAT_01d76cfc[10];
  fVar5 = *param_1 - _DAT_01d76cfc[9];
  fVar6 = param_1[2] - _DAT_01d76cfc[0xb];
  *param_2 = fVar6 * _DAT_01d76cfc[6] + fVar5 * *_DAT_01d76cfc + fVar4 * _DAT_01d76cfc[3];
  param_2[1] = fVar6 * pfVar7[7] + fVar4 * pfVar7[4] + fVar5 * pfVar7[1];
  fVar1 = pfVar7[2];
  fVar2 = pfVar7[5];
  fVar3 = pfVar7[8];
  param_2[4] = 0.0;
  param_2[2] = fVar6 * fVar3 + fVar4 * fVar2 + fVar5 * fVar1;
  if (param_2[2] < *param_2) {
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
  }
  if (*param_2 < -param_2[2]) {
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
  }
  if (param_2[2] < param_2[1]) {
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 4;
  }
  if (param_2[1] < -param_2[2]) {
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 8;
  }
  if (0.0 < param_2[2]) {
    if (param_2[4] != 0.0) {
      return;
    }
    fVar1 = *param_2 * _DAT_01d76c5c;
    fVar2 = param_2[1] * _DAT_01d76c60;
    param_2[3] = 1.0 / param_2[2];
    fVar2 = _DAT_01d76c68 + fVar2 * param_2[3];
    param_2[5] = _DAT_01d76c64 + fVar1 * param_2[3];
    param_2[6] = fVar2;
    return;
  }
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 0x10;
  return;
}
