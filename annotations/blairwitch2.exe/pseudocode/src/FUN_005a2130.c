// Name: FUN_005a2130
// Address: 005a2130
// Address Range: [[005a2130, 005a223a]]
// Convention: unknown
// Signature: void FUN_005a2130(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a2130(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  FUN_00503620(param_1 + 0x2b4,3,1);
  FUN_00423850(param_1,*(int *)(param_1 + 0x10a78) + 0x20);
  fVar3 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0x10a78) + 0x20);
  fVar2 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0x10a78) + 0x28);
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  iVar1 = param_1 + 0x10af8;
  if (_DAT_005fef90 < fVar2) {
    *(float *)(param_1 + 0x11394) = _DAT_005fef90;
    FUN_0059d7f0(iVar1,"ChaseComplete","BRangeAttack" + 1);
    FUN_0059dcb0(iVar1,0x3dcccccd);
    FUN_0059d8e0(iVar1,"Chasing");
  }
  else if (_DAT_005fef94 + _DAT_005efe93 < fVar2) {
    *(float *)(param_1 + 0x11394) = _DAT_005fef94;
    FUN_0059dcb0(iVar1,0x3dcccccd);
    FUN_0059d8e0(iVar1,"Chasing");
    return;
  }
  return;
}
