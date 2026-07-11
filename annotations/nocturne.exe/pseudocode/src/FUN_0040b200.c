// Name: FUN_0040b200
// Address: 0040b200
// Address Range: [[0040b200, 0040b2fe]]
// Convention: unknown
// Signature: uint FUN_0040b200(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040b200(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  uint uVar5;
  byte local_30 [40];
  
  pfVar4 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_30);
  fVar1 = pfVar4[3] - *pfVar4;
  uVar5 = 0;
  fVar2 = pfVar4[4] - pfVar4[1];
  fVar3 = pfVar4[5] - pfVar4[2];
  if ((((fVar1 < 1.0) && (fVar2 < 1.0)) && ((float)_DAT_005777a9 < fVar3)) &&
     (((fVar3 < (float)_DAT_005777b1 && (fVar1 < fVar3)) && (fVar2 < fVar3)))) {
    uVar5 = 2;
  }
  if (((fVar1 < 1.0) && (fVar2 < 1.0)) &&
     ((1.0 < fVar3 && (((fVar3 < (float)_DAT_005777a9 && (fVar1 < fVar3)) && (fVar2 < fVar3)))))) {
    uVar5 = uVar5 | 4;
  }
  return uVar5;
}
