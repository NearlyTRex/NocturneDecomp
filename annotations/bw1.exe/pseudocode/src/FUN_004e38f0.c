// Name: FUN_004e38f0
// Address: 004e38f0
// Address Range: [[004e38f0, 004e3a25]]
// Convention: unknown
// Signature: void FUN_004e38f0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e38f0(int param_1,int param_2)

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
  
  FUN_00409680(param_1,param_2);
  if (*(int *)(param_1 + 0x1e8) == 0) {
    *(float *)(param_2 + 0x48) = 1.0 - (float)*(int *)(param_1 + 0x17c) * (float)_DAT_005e3fdc;
    return;
  }
  if (*(int *)(param_1 + 0x180) == 0) {
    *(uint *)(param_2 + 0x50) = 0x3f800000;
  }
  else {
    fVar1 = *(float *)(param_2 + 0x30);
    fVar2 = *(float *)(param_1 + 0x15c);
    fVar3 = *(float *)(param_2 + 0x2c);
    fVar4 = *(float *)(param_1 + 0x158);
    fVar5 = (float)_DAT_005e3fe4;
    FUN_00484f00(DAT_00612560,param_1 + 0x374);
    fVar6 = (float10)(fVar3 / fVar4 + fVar5) * (float10)DAT_0061b4a8;
    fVar7 = (float10)(1.0 - fVar1 / fVar2) * (float10)DAT_0061b4a8;
    FUN_005c03a0();
    FUN_005c03a0();
    uStack_18 = (int)ROUND(fVar6);
    uStack_14 = (int)ROUND(fVar7);
    if (uStack_18 < 0) {
      uStack_18 = 0;
    }
    if (DAT_0061b4a8 <= uStack_18) {
      uStack_18 = DAT_0061b4a8 + -1;
    }
    if (uStack_14 < 0) {
      uStack_14 = 0;
    }
    if (DAT_0061b4a8 <= uStack_14) {
      uStack_14 = DAT_0061b4a8 + -1;
    }
    if (*(char *)(uStack_18 + uStack_14 * DAT_0061b4a8 + _DAT_01c50930) == '\0') {
      *(uint *)(param_2 + 0x50) = 0x3f800000;
      return;
    }
  }
  return;
}
