// Name: FUN_0049a3a0
// Address: 0049a3a0
// Address Range: [[0049a3a0, 0049a4f9]]
// Convention: unknown
// Signature: void FUN_0049a3a0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049a3a0(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  fVar4 = *(float *)(0x01CB6900 + 0x284);
  fVar3 = *param_1;
  *param_1 = fVar3 - fVar4;
  if (0.0 < fVar3 - fVar4) {
    pfVar1 = param_1 + 4;
    pfVar2 = param_1 + 1;
    fVar5 = (float)_DAT_005d56ba;
    *pfVar2 = *pfVar2 + *pfVar1 * fVar4;
    param_1[2] = param_1[2] + param_1[5] * fVar4;
    param_1[3] = param_1[3] + param_1[6] * fVar4;
    fVar3 = param_1[5] * _DAT_005d56b2;
    fVar6 = param_1[6] * _DAT_005d56b2;
    *pfVar1 = *pfVar1 * _DAT_005d56b2;
    param_1[5] = fVar3;
    param_1[6] = fVar6;
    fVar3 = (float)_DAT_005d56c2;
    param_1[5] = fVar4 * fVar5 + param_1[5];
    iVar7 = FUN_0040d060(fVar4 * fVar3);
    if (iVar7 != 0) {
      FUN_0049d230(0x01C3DEB4,pfVar2,0x3f000000,0,0xffff);
    }
    if ((param_1[8] != 0.0) && (iVar7 = FUN_0040d060(fVar4), iVar7 != 0)) {
      FUN_00499fe0(param_1);
    }
    param_1[7] = fVar4 * _DAT_005f6504 + param_1[7];
    fVar3 = _DAT_005d56ca;
    if (0x419fffff < (int)param_1[7]) {
      do {
        param_1[7] = param_1[7] + fVar3;
      } while (0x419fffff < (int)param_1[7]);
      return;
    }
  }
  else {
    *param_1 = 0.0;
  }
  return;
}
