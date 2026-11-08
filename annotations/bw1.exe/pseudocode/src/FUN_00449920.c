// Name: FUN_00449920
// Address: 00449920
// Address Range: [[00449920, 004499b3]]
// Convention: unknown
// Signature: int FUN_00449920(int param_1)

#include "nocturne.h"

int FUN_00449920(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_40 [6];
  uint auStack_28 [6];
  uint uStack_10;
  
  bVar4 = 0;
  FUN_004087b0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar2 = auStack_28;
  puVar3 = auStack_40;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_004207b0(auStack_40);
  if (iVar1 == 0) {
    FUN_004087f0(param_1);
    return 0;
  }
  uStack_10 = FUN_0044a0c0(param_1,0xffffffff);
  FUN_004688a0(param_1 + 0x158,uStack_10);
  FUN_004087f0(param_1);
  return iVar1;
}
