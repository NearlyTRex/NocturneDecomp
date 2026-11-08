// Name: FUN_004e6aa0
// Address: 004e6aa0
// Address Range: [[004e6aa0, 004e6b44]]
// Convention: unknown
// Signature: int FUN_004e6aa0(int param_1)

#include "nocturne.h"

int FUN_004e6aa0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if ((*(int *)(param_1 + 0x2dc) == 0) &&
     (((*(int *)(0x01D2C900 + 0x1008) != 0 || (*(int *)(param_1 + 0x2e4) == 0)) ||
      (*(int *)(param_1 + 0x2e0) != 0)))) {
    FUN_004087b0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar2 = auStack_34;
    puVar3 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = FUN_004207b0(auStack_1c);
    if (iVar1 != 0) {
      FUN_004688a0(param_1 + 0x158,*(uint *)(param_1 + 0x2d4),0xffffffff);
    }
    FUN_004087f0(param_1);
    return iVar1;
  }
  return 0;
}
