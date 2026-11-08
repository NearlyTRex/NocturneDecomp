// Name: FUN_00432cb0
// Address: 00432cb0
// Address Range: [[00432cb0, 00432df2]]
// Convention: unknown
// Signature: void FUN_00432cb0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432cb0(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float local_c;
  
  if (-1 < *(int *)(param_1 + 0x2754)) {
    if (*(int *)(param_1 + 0x2750) < -1) {
      _DAT_01d1d400 = "..\\core\\charactr.cpp";
      _DAT_01d1d404 = 0xec5;
      FUN_005030e0("CCharacter::applyGesture - never set gestureBranchRoot for actor %s",param_1);
    }
    uVar3 = FUN_00569f30(param_1 + 0x158,"Bip01 spine1",0);
    uVar3 = FUN_005634f0(uVar3);
    iVar5 = *(int *)(param_1 + 0x2754);
    *(uint *)(param_1 + 0x2750) = uVar3;
    iVar4 = FUN_00524a00(param_1 + 0x158);
    local_c = 0.85;
    iVar5 = iVar4 + 0x1c28 + iVar5 * 0x120;
    if (*(int *)(param_1 + 0x275c) == 1) {
      local_c = 1.0;
    }
    else {
      fVar1 = 1.0 / (*(float *)(iVar5 + 0x20) * _DAT_005d5cf7);
      fVar2 = *(float *)(param_1 + 0x2758) * fVar1;
      fVar1 = ((float)*(int *)(iVar5 + 100) - *(float *)(param_1 + 0x2758)) * fVar1;
      if (fVar2 < _DAT_005d5cfb) {
        local_c = fVar2;
      }
      if (fVar1 < local_c) {
        local_c = fVar1;
      }
    }
    FUN_00568100(param_1 + 0x158,*(uint *)(param_1 + 0x2754),*(uint *)(param_1 + 0x2758)
                 ,local_c,*(uint *)(param_1 + 0x2750),&LAB_00567360);
  }
  return;
}
