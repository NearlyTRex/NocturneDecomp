// Name: FUN_0056d000
// Address: 0056d000
// Address Range: [[0056d000, 0056d0a6]]
// Convention: unknown
// Signature: int FUN_0056d000(int param_1)

#include "nocturne.h"

int FUN_0056d000(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  uint auStack_40 [6];
  uint auStack_28 [6];
  
  bVar4 = 0;
  FUN_0046ce90(DAT_005f2afc,param_1 + 0x20);
  FUN_0046cf30(DAT_005f2afc,param_1 + 0x30,0);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar2 = auStack_28;
  puVar3 = auStack_40;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041daf0(auStack_40);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x2d8) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0x40400000;
    }
    FUN_00462540(param_1 + 0x158,uVar5,0xffffffff);
  }
  thunk_FUN_004e5ef0(DAT_005f2afc);
  return iVar1;
}
