// Name: FUN_004e3bd0
// Address: 004e3bd0
// Address Range: [[004e3bd0, 004e3c63]]
// Convention: unknown
// Signature: int FUN_004e3bd0(int param_1)

#include "nocturne.h"

int FUN_004e3bd0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar4 = 0;
  FUN_004837b0(DAT_00612560,param_1 + 0x20);
  FUN_00483850(DAT_00612560,param_1 + 0x30,0);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar2 = auStack_24;
  puVar3 = auStack_3c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_004207b0(auStack_3c);
  if (iVar1 != 0) {
    FUN_004688a0(param_1 + 0x158,0,0xffffffff);
  }
  thunk_FUN_005084b0(DAT_00612560);
  return iVar1;
}
