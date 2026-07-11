// Name: FUN_00429560
// Address: 00429560
// Address Range: [[00429560, 0042965d]]
// Convention: unknown
// Signature: void FUN_00429560(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429560(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float local_8;
  
  if (-1 < *(int *)(param_1 + 0x25c0)) {
    if (*(int *)(param_1 + 0x25bc) < -1) {
      _DAT_01cc4800 = "..\\core\\charactr.cpp";
      _DAT_01cc4804 = 0xcdb;
      FUN_004c8440("CCharacter::applyGesture - never set gestureBranchRoot for actor %s",param_1);
    }
    iVar4 = *(int *)(param_1 + 0x25c0) * 0x54c;
    iVar3 = FUN_004e1890(param_1 + 0x150);
    fVar1 = 1.0 / (*(float *)(iVar4 + 0x988 + iVar3) * _DAT_0057a26a);
    fVar2 = *(float *)(param_1 + 0x25c4) * fVar1;
    fVar1 = ((float)*(int *)(iVar4 + 0x9cc + iVar3) - *(float *)(param_1 + 0x25c4)) * fVar1;
    local_8 = 0.85;
    if (fVar2 < _DAT_0057a26e) {
      local_8 = fVar2;
    }
    if (fVar1 < local_8) {
      local_8 = fVar1;
    }
    FUN_0051c3d0(param_1 + 0x150,*(uint *)(param_1 + 0x25c0),*(uint *)(param_1 + 0x25c4)
                 ,local_8,*(uint *)(param_1 + 0x25bc),&LAB_0051b650);
  }
  return;
}
