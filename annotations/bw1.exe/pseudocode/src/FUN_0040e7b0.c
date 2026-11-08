// Name: FUN_0040e7b0
// Address: 0040e7b0
// Address Range: [[0040e7b0, 0040e851]]
// Convention: unknown
// Signature: int FUN_0040e7b0(int param_1)

#include "nocturne.h"

int FUN_0040e7b0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x33c) == 0) {
    return 0;
  }
  FUN_004837b0(DAT_00612560,param_1 + 0x20);
  FUN_00483850(DAT_00612560,param_1 + 0x30,0);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar2 = auStack_1c;
  puVar3 = auStack_34;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_004207b0(auStack_34);
  if (iVar1 != 0) {
    FUN_004688a0(param_1 + 0x158,0,0xffffffff);
  }
  thunk_FUN_005084b0(DAT_00612560);
  return iVar1;
}
