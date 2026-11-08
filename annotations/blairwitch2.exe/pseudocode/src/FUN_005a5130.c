// Name: FUN_005a5130
// Address: 005a5130
// Address Range: [[005a5130, 005a5276]]
// Convention: unknown
// Signature: void FUN_005a5130(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a5130(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  iVar1 = param_1 + 0x2b4;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  if (iVar3 == 0) {
    FUN_00503620(iVar1,*(uint *)(param_1 + 0x11384),1);
    return;
  }
  iVar3 = FUN_005035c0(iVar1);
  uVar2 = *(uint *)(iVar3 + 0x24);
  if (uVar2 < 2) {
    if (uVar2 != 0) {
LAB_005a5261:
      FUN_00503620(param_1 + 0x2b4,0,1);
      return;
    }
    FUN_00423850(param_1,*(int *)(param_1 + 0x10a78) + 0x20);
    param_2 = *(float *)(param_1 + 0x11850) - param_2;
    *(float *)(param_1 + 0x11850) = param_2;
    if (param_2 <= 0.0) {
      *(uint *)(param_1 + 0x11850) = 0;
      FUN_00503620(iVar1,2,1);
      return;
    }
  }
  else if (uVar2 < 3) {
    FUN_00423850(param_1,*(int *)(param_1 + 0x10a78) + 0x20);
    if (_DAT_005f056e < *(float *)(param_1 + 700)) {
      *(uint *)(param_1 + 0x11850) = 0x40a00000;
      FUN_00503620(iVar1,3,1);
      FUN_005a5460(param_1);
      *(int *)(param_1 + 0x11854) = *(int *)(param_1 + 0x11854) + -1;
      return;
    }
  }
  else {
    if (uVar2 != 3) goto LAB_005a5261;
    if (_DAT_005f056a < *(float *)(param_1 + 700)) {
      FUN_00503620(iVar1,0,1);
      return;
    }
  }
  return;
}
