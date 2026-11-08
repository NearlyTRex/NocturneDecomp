// Name: FUN_0059ec10
// Address: 0059ec10
// Address Range: [[0059ec10, 0059ed47]]
// Convention: unknown
// Signature: void FUN_0059ec10(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0059ec10(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint auStackY_1004 [1012];
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar3 = 0;
  *(uint *)(param_1 + 0x342c) = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0x10a78);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1);
    if ((iVar1 == 0) || (*(int *)(param_1 + 0x10af0) == 0)) {
      *(uint *)(param_1 + 0x10a6c) = 1;
      *(uint *)(param_1 + 0x10a7c) = *(uint *)(param_1 + 0x11378);
      FUN_0059d8e0(param_1 + 0x10af8,"Chasing");
    }
    else {
      *(uint *)(param_1 + 0x10af0) = 0;
      *(uint *)(param_1 + 0x10a78) = 0;
    }
    return;
  }
  puVar2 = (uint *)(param_1 + 0x2580 + (uint)bVar3 * -8);
  uStack_1c = *(uint *)(param_1 + 0x257c);
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * -8) = *puVar2;
  *(uint *)((int)&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       puVar2[(uint)bVar3 * -2 + 1];
  uStack_10 = *(uint *)(param_1 + 0x2578);
  iVar1 = FUN_00423000(param_1,param_1 + 0x11360,0,param_1 + 0x11424,
                       *(uint *)(param_1 + 0x1142c),0x3e32b8c2);
  if (iVar1 != 0) {
    if ((uint *)(param_1 + 0x257c) != &stack0xffffffe4) {
      *(uint *)(param_1 + 0x257c) = uStack_1c;
      *(uint *)(param_1 + 0x2580) = uStack_18;
      *(uint *)(param_1 + 0x2584) = uStack_14;
    }
    *(uint *)(param_1 + 0x2578) = uStack_10;
    FUN_00503620(param_1 + 0x2b4,*(uint *)(param_1 + 0x11384),1);
    return;
  }
  FUN_00503620(param_1 + 0x2b4,*(uint *)(param_1 + 0x11388),1);
  return;
}
