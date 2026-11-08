// Name: FUN_004224f0
// Address: 004224f0
// Address Range: [[004224f0, 004225f0]]
// Convention: unknown
// Signature: int FUN_004224f0(int param_1)

#include "nocturne.h"

int FUN_004224f0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar4 = 0;
  iVar1 = FUN_00468900(param_1 + 0x158);
  if ((*(int *)(iVar1 + 0x110) < 1) ||
     ((iVar1 = FUN_00483e60(DAT_00612560), iVar1 == 0 && (*(int *)(param_1 + 0xfc) != 0)))) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x5f4) == 0) && (iVar1 = FUN_00483e60(DAT_00612560), iVar1 != 0)) {
    return 0;
  }
  FUN_004837b0(0x01BC120C,param_1 + 0x20);
  FUN_00483850(0x01BC120C,param_1 + 0x30,0);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar2 = auStack_38;
  puVar3 = auStack_20;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_004207b0(auStack_20);
  if (iVar1 != 0) {
    FUN_004688a0(param_1 + 0x158,*(uint *)(param_1 + 0x310),0xffffffff);
  }
  thunk_FUN_005084b0(0x01BC120C);
  return iVar1;
}
