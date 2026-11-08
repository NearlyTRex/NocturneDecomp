// Name: FUN_004320d0
// Address: 004320d0
// Address Range: [[004320d0, 00432212]]
// Convention: unknown
// Signature: void FUN_004320d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004320d0(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float local_c;
  
  if (-1 < *(int *)(param_1 + 0x2754)) {
    if (*(int *)(param_1 + 0x2750) < -1) {
      _DAT_01d71de0 = "..\\core\\charactr.cpp";
      _DAT_01d71de4 = 0xff7;
      FUN_004e4330("CCharacter::applyGesture - never set gestureBranchRoot for actor %s",param_1);
    }
    uVar3 = FUN_0054eac0(param_1 + 0x158,"Bip01 spine1",0);
    uVar3 = FUN_00548090(uVar3);
    iVar5 = *(int *)(param_1 + 0x2754);
    *(uint *)(param_1 + 0x2750) = uVar3;
    iVar4 = FUN_004fc310(param_1 + 0x158);
    local_c = 0.85;
    iVar5 = iVar4 + 0x1c28 + iVar5 * 0x120;
    if (*(int *)(param_1 + 0x275c) == 1) {
      local_c = 1.0;
    }
    else {
      fVar1 = 1.0 / (*(float *)(iVar5 + 0x20) * _DAT_005b863e);
      fVar2 = *(float *)(param_1 + 0x2758) * fVar1;
      fVar1 = ((float)*(int *)(iVar5 + 100) - *(float *)(param_1 + 0x2758)) * fVar1;
      if (fVar2 < _DAT_005b8642) {
        local_c = fVar2;
      }
      if (fVar1 < local_c) {
        local_c = fVar1;
      }
    }
    FUN_0054cc90(param_1 + 0x158,*(uint *)(param_1 + 0x2754),*(uint *)(param_1 + 0x2758)
                 ,local_c,*(uint *)(param_1 + 0x2750),&LAB_0054bef0);
  }
  return;
}
