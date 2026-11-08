// Name: FUN_004291f0
// Address: 004291f0
// Address Range: [[004291f0, 0042931b]]
// Convention: unknown
// Signature: void FUN_004291f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004291f0(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float local_c;
  
  if (-1 < *(int *)(param_1 + 0x27c4)) {
    if (*(int *)(param_1 + 0x27c0) < -1) {
      _DAT_01d046a0 = "..\\core\\charactr.cpp";
      _DAT_01d046a4 = 0xf08;
      FUN_004e4500("CCharacter::applyGesture - never set gestureBranchRoot for actor %s",param_1);
    }
    uVar3 = FUN_00547890(param_1 + 0x2b4,"Bip01 spine1",0);
    uVar3 = FUN_00540e80(uVar3);
    iVar5 = *(int *)(param_1 + 0x27c4) * 0x118;
    *(uint *)(param_1 + 0x27c0) = uVar3;
    iVar4 = FUN_00503860(param_1 + 0x2b4);
    fVar1 = 1.0 / (*(float *)(iVar5 + 0x1c48 + iVar4) * _DAT_005cd06a);
    fVar2 = *(float *)(param_1 + 0x27c8) * fVar1;
    fVar1 = ((float)*(int *)(iVar5 + 0x1c8c + iVar4) - *(float *)(param_1 + 0x27c8)) * fVar1;
    local_c = 0.85;
    if (fVar2 < _DAT_005cd06e) {
      local_c = fVar2;
    }
    if (fVar1 < local_c) {
      local_c = fVar1;
    }
    FUN_00545a60(param_1 + 0x2b4,*(uint *)(param_1 + 0x27c4),*(uint *)(param_1 + 0x27c8)
                 ,local_c,*(uint *)(param_1 + 0x27c0),&LAB_00544cc0);
  }
  return;
}
