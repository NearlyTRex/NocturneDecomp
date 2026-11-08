// Name: FUN_004cc480
// Address: 004cc480
// Address Range: [[004cc480, 004cc5b5]]
// Convention: unknown
// Signature: void FUN_004cc480(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cc480(int param_1,int param_2)

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
  
  FUN_004096c0(param_1,param_2);
  if (*(int *)(param_1 + 0x218) == 0) {
    *(float *)(param_2 + 0x48) = 1.0 - (float)*(int *)(param_1 + 0x1ac) * (float)_DAT_005c45e8;
    return;
  }
  if (*(int *)(param_1 + 0x1b0) == 0) {
    *(uint *)(param_2 + 0x50) = 0x3f800000;
  }
  else {
    fVar1 = *(float *)(param_2 + 0x30);
    fVar2 = *(float *)(param_1 + 0x15c);
    fVar3 = *(float *)(param_2 + 0x2c);
    fVar4 = *(float *)(param_1 + 0x158);
    fVar5 = (float)_DAT_005c45f0;
    FUN_0046e5e0(DAT_005f2afc,param_1 + 0x3a4);
    fVar6 = (float10)(fVar3 / fVar4 + fVar5) * (float10)DAT_005fba28;
    fVar7 = (float10)(1.0 - fVar1 / fVar2) * (float10)DAT_005fba28;
    FUN_005a3120();
    FUN_005a3120();
    uStack_18 = (int)ROUND(fVar6);
    uStack_14 = (int)ROUND(fVar7);
    if (uStack_18 < 0) {
      uStack_18 = 0;
    }
    if (DAT_005fba28 <= uStack_18) {
      uStack_18 = DAT_005fba28 + -1;
    }
    if (uStack_14 < 0) {
      uStack_14 = 0;
    }
    if (DAT_005fba28 <= uStack_14) {
      uStack_14 = DAT_005fba28 + -1;
    }
    if (*(char *)(uStack_18 + uStack_14 * DAT_005fba28 + _DAT_01c6ced0) == '\0') {
      *(uint *)(param_2 + 0x50) = 0x3f800000;
      return;
    }
  }
  return;
}
