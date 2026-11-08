// Name: FUN_0040f590
// Address: 0040f590
// Address Range: [[0040f590, 0040f623]]
// Convention: unknown
// Signature: int FUN_0040f590(int param_1)

#include "nocturne.h"

int FUN_0040f590(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar4 = 0;
  FUN_0046ce90(DAT_005f2afc,param_1 + 0x20);
  FUN_0046cf30(DAT_005f2afc,param_1 + 0x30,0);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar2 = auStack_24;
  puVar3 = auStack_3c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041daf0(auStack_3c);
  if (iVar1 != 0) {
    FUN_00462540(param_1 + 0x158,0,0xffffffff);
  }
  thunk_FUN_004e5ef0(DAT_005f2afc);
  return iVar1;
}
