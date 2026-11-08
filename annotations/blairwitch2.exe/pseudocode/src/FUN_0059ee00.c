// Name: FUN_0059ee00
// Address: 0059ee00
// Address Range: [[0059ee00, 0059ef8d]]
// Convention: unknown
// Signature: void FUN_0059ee00(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059ee00(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)(param_1 + 0x342c) = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
  if (*(int *)(param_1 + 0x10a78) != 0) {
    FUN_0059d8e0(param_1 + 0x10af8,"Chasing");
    return;
  }
  if (*(int *)(param_1 + 0x113a4) == 0) {
    uVar2 = FUN_004fc740(0x01D182F0,param_1 + 0x10a84,_DAT_02668164);
    iVar1 = FUN_0040c8f0(uVar2);
    *(int *)(param_1 + 0x113a4) = iVar1;
    if (iVar1 == 0) {
      FUN_00503620(param_1 + 0x2b4,*(uint *)(param_1 + 0x11380),1);
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x113a8) == 0) {
      uVar2 = FUN_005882d0(param_1 + 0x20,*(int *)(param_1 + 0x113a4),0);
      uVar2 = FUN_0040c8f0(uVar2,_DAT_02668164);
      *(uint *)(param_1 + 0x113a8) = uVar2;
    }
    if (*(int *)(param_1 + 0x113a8) == 0) {
      FUN_00503620(param_1 + 0x2b4,*(uint *)(param_1 + 0x11380),1);
      return;
    }
    iVar1 = FUN_00423000(param_1,*(int *)(param_1 + 0x113a8) + 0x20,0,param_1 + 0x11424,
                         *(uint *)(param_1 + 0x1142c),0x3f490fdb);
    if (iVar1 == 0) {
      FUN_00503620(param_1 + 0x2b4,*(uint *)(param_1 + 0x11388),1);
      return;
    }
    if (*(int *)(param_1 + 0x113a4) == *(int *)(param_1 + 0x113a8)) {
      uVar2 = FUN_0059c9c0(*(uint *)(param_1 + 0x113a8),param_1 + 0x113ac);
      *(uint *)(param_1 + 0x113a8) = 0;
      *(uint *)(param_1 + 0x113a4) = uVar2;
      return;
    }
    *(uint *)(param_1 + 0x113a8) = 0;
  }
  return;
}
