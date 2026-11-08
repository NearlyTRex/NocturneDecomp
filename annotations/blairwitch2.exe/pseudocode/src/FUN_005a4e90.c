// Name: FUN_005a4e90
// Address: 005a4e90
// Address Range: [[005a4e90, 005a4fd1]]
// Convention: unknown
// Signature: void FUN_005a4e90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a4e90(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  if (iVar3 != 0) {
    iVar3 = param_1 + 0x10af8;
    if (*(int *)(param_1 + 0x11854) == 0) {
      *(uint *)(param_1 + 0x11394) = _DAT_005ff8f4;
      *(uint *)(param_1 + 0x11398) = 0;
      FUN_0059d7f0(iVar3,"ChaseComplete","MeleeAttack");
      FUN_0059d8e0(iVar3,"Chasing");
      return;
    }
    iVar4 = FUN_005035c0(param_1 + 0x2b4);
    uVar2 = _DAT_005ff8f4;
    uVar1 = *(uint *)(iVar4 + 0x24);
    if (uVar1 < 2) {
LAB_005a4fbb:
      FUN_00503620(param_1 + 0x2b4,2,1);
      return;
    }
    if (uVar1 < 3) {
      FUN_00423850(param_1,*(int *)(param_1 + 0x10a78) + 0x20);
      if (_DAT_005f0556 < *(float *)(param_1 + 700)) {
        FUN_00503620(param_1 + 0x2b4,3,1);
        FUN_005a5460(param_1);
        *(uint *)(param_1 + 0x11850) = 0;
        *(int *)(param_1 + 0x11854) = *(int *)(param_1 + 0x11854) + -1;
        return;
      }
    }
    else {
      if (uVar1 != 3) goto LAB_005a4fbb;
      if (_DAT_005f0552 < *(float *)(param_1 + 700)) {
        *(uint *)(param_1 + 0x11398) = 0;
        *(uint *)(param_1 + 0x11394) = uVar2;
        FUN_0059d7f0(iVar3,"ChaseComplete","MeleeAttack");
        FUN_0059d8e0(iVar3,"Chasing");
        return;
      }
    }
  }
  return;
}
