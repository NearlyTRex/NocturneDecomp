// Name: FUN_005834e0
// Address: 005834e0
// Address Range: [[005834e0, 0058355e]]
// Convention: unknown
// Signature: int FUN_005834e0(int param_1)

#include "nocturne.h"

int FUN_005834e0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar4 = 0;
  FUN_004087b0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar2 = auStack_3c;
  puVar3 = auStack_24;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_004207b0(auStack_24);
  if (iVar1 == 0) {
    FUN_004087f0(param_1);
    return 0;
  }
  FUN_004688a0(param_1 + 0x158,0,0xffffffff);
  FUN_004087f0(param_1);
  return iVar1;
}
