// Name: FUN_004c7180
// Address: 004c7180
// Address Range: [[004c7180, 004c72b5]]
// Convention: unknown
// Signature: void FUN_004c7180(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c7180(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  uint uStack_18;
  uint uStack_14;
  
  FUN_00409830(param_1,param_2);
  if (*(int *)(param_1 + 0x344) == 0) {
    *(float *)(param_2 + 0x48) = 1.0 - (float)*(int *)(param_1 + 0x2d8) * (float)_DAT_005d9422;
    return;
  }
  if (*(int *)(param_1 + 0x2dc) == 0) {
    *(uint *)(param_2 + 0x50) = 0x3f800000;
  }
  else {
    fVar1 = *(float *)(param_2 + 0x30);
    fVar2 = *(float *)(param_1 + 0x2b8);
    fVar3 = *(float *)(param_2 + 0x2c);
    fVar4 = *(float *)(param_1 + 0x2b4);
    fVar5 = (float)_DAT_005d942a;
    FUN_0046ca00(DAT_0060b280,param_1 + 0x4d0);
    fVar6 = (float10)(fVar3 / fVar4 + fVar5) * (float10)DAT_006141c8;
    fVar7 = (float10)(1.0 - fVar1 / fVar2) * (float10)DAT_006141c8;
    FUN_005b7ff0();
    FUN_005b7ff0();
    uStack_18 = (int)ROUND(fVar6);
    uStack_14 = (int)ROUND(fVar7);
    if (uStack_18 < 0) {
      uStack_18 = 0;
    }
    if (DAT_006141c8 <= uStack_18) {
      uStack_18 = DAT_006141c8 + -1;
    }
    if (uStack_14 < 0) {
      uStack_14 = 0;
    }
    if (DAT_006141c8 <= uStack_14) {
      uStack_14 = DAT_006141c8 + -1;
    }
    if (*(char *)(uStack_18 + uStack_14 * DAT_006141c8 + _DAT_01c37770) == '\0') {
      *(uint *)(param_2 + 0x50) = 0x3f800000;
      return;
    }
  }
  return;
}
