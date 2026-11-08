// Name: FUN_005a40f0
// Address: 005a40f0
// Address Range: [[005a40f0, 005a4211]]
// Convention: unknown
// Signature: void FUN_005a40f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a40f0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x11858);
  iVar2 = param_1 + 0x2b4;
  if (uVar1 == 0) {
    FUN_00503620(iVar2,4,1);
    FUN_005a01a0(param_1,*(uint *)(param_1 + 0x113c4),0,0x3f99999a);
    FUN_0059f570(param_1);
    *(uint *)(param_1 + 0x11858) = 1;
    return;
  }
  if (uVar1 < 2) {
    iVar2 = FUN_005035c0(iVar2);
    if (*(int *)(iVar2 + 0x24) == 4) {
      if (_DAT_005f02de <= *(float *)(param_1 + 700)) {
        FUN_005a01a0(param_1,*(uint *)(param_1 + 0x113c4),0x3f800000,0x3f400000);
        FUN_0059f570(param_1);
        *(uint *)(param_1 + 0x11858) = 2;
        return;
      }
      FUN_00423850(param_1,*(int *)(param_1 + 0x10a78) + 0x20);
      return;
    }
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    iVar2 = FUN_005035c0(iVar2);
    if (*(int *)(iVar2 + 0x24) == 3) {
      *(uint *)(param_1 + 0x11394) = _DAT_005ff544;
      FUN_0059d7f0(param_1 + 0x10af8,"ChaseComplete","MeleeAttack");
      FUN_0059d8e0(param_1 + 0x10af8,"MeleeAttack");
      *(uint *)(param_1 + 0x11858) = 0;
      return;
    }
  }
  return;
}
