// Name: FUN_005a2280
// Address: 005a2280
// Address Range: [[005a2280, 005a2391]]
// Convention: unknown
// Signature: int FUN_005a2280(int param_1)

#include "nocturne.h"

int FUN_005a2280(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_44 [6];
  uint auStack_2c [6];
  uint uStack_14;
  
  bVar5 = 0;
  FUN_004087b0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar3 = auStack_44;
  puVar4 = auStack_2c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = FUN_004207b0(auStack_2c);
  if (iVar2 != 0) {
    uStack_14 = FUN_005a2ae0(param_1,0,0xffffffff);
    FUN_004688a0(param_1 + 0x158,uStack_14);
  }
  FUN_004087f0(param_1);
  if (iVar2 != 0) {
    iVar1 = FUN_00468900(param_1 + 0x584);
    if (0 < *(int *)(iVar1 + 0x110)) {
      FUN_004837b0(DAT_00612560,param_1 + 0x20);
      FUN_00483850(DAT_00612560,param_1 + 0x578,0);
      uStack_14 = FUN_005a2ae0(param_1,1,0xffffffff);
      FUN_004688a0(param_1 + 0x584,uStack_14);
      thunk_FUN_005084b0(DAT_00612560);
      return iVar2;
    }
  }
  return iVar2;
}
