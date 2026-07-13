// Name: FUN_004add80
// Address: 004add80
// Address Range: [[004add80, 004adeb5]]
// Convention: unknown
// Signature: void FUN_004add80(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004add80(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  uint local_18;
  uint local_14;
  
  FUN_0040ab10(param_1,param_2);
  if (*(int *)(param_1 + 0x1e0) == 0) {
    *(float *)(param_2 + 0x48) = 1.0 - (float)*(int *)(param_1 + 0x174) * (float)_DAT_00585070;
    return;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    *(uint *)(param_2 + 0x50) = 0x3f800000;
  }
  else {
    fVar1 = *(float *)(param_2 + 0x30);
    fVar2 = *(float *)(param_1 + 0x154);
    fVar3 = *(float *)(param_2 + 0x2c);
    fVar4 = *(float *)(param_1 + 0x150);
    fVar5 = (float)_DAT_00585078;
    FUN_00461eb0(DAT_005ae704,param_1 + 0x36c);
    fVar6 = (float10)(fVar3 / fVar4 + fVar5) * (float10)DAT_005b762c;
    fVar7 = (float10)(1.0 - fVar1 / fVar2) * (float10)DAT_005b762c;
    FUN_00563a30();
    FUN_00563a30();
    local_18 = (int)ROUND(fVar6);
    local_14 = (int)ROUND(fVar7);
    if (local_18 < 0) {
      local_18 = 0;
    }
    if (DAT_005b762c <= local_18) {
      local_18 = DAT_005b762c + -1;
    }
    if (local_14 < 0) {
      local_14 = 0;
    }
    if (DAT_005b762c <= local_14) {
      local_14 = DAT_005b762c + -1;
    }
    if (*(char *)(local_18 + local_14 * DAT_005b762c + _DAT_01c02580) == '\0') {
      *(uint *)(param_2 + 0x50) = 0x3f800000;
      return;
    }
  }
  return;
}
