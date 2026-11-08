// Name: FUN_005a3280
// Address: 005a3280
// Address Range: [[005a3280, 005a33a7]]
// Convention: unknown
// Signature: void FUN_005a3280(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a3280(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  if (iVar3 != 0) {
    fVar1 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0x10a78) + 0x20);
    fVar2 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0x10a78) + 0x28);
    iVar3 = param_1 + 0x2b4;
    iVar4 = FUN_005035c0(iVar3);
    iVar4 = *(int *)(iVar4 + 0x24);
    if (_DAT_005ff350 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
      *(float *)(param_1 + 0x11394) = _DAT_005ff350;
      FUN_0059dcb0(param_1 + 0x10af8,0x3f000000);
      FUN_0059d8e0(param_1 + 0x10af8,"Chasing");
      if (iVar4 == 10) {
        FUN_00503620(iVar3,0,1);
        return;
      }
    }
    else {
      if (iVar4 == 10) {
        uVar5 = FUN_0040cfc0(0,1);
        *(uint *)(param_1 + 0x1186c) = uVar5;
        FUN_00503620(iVar3,0,1);
        return;
      }
      FUN_00423850(param_1,*(int *)(param_1 + 0x10a78) + 0x20);
      if (*(int *)(param_1 + 0x1186c) == 0) {
        FUN_00503620(iVar3,3,1);
        return;
      }
      if (*(int *)(param_1 + 0x1186c) == 1) {
        FUN_00503620(iVar3,4,1);
        return;
      }
    }
  }
  return;
}
