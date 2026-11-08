// Name: FUN_005ad680
// Address: 005ad680
// Address Range: [[005ad680, 005ad720]]
// Convention: unknown
// Signature: int FUN_005ad680(int param_1)

#include "nocturne.h"

int FUN_005ad680(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar6 = 0;
  FUN_004087b0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar4 = auStack_3c;
  puVar5 = auStack_24;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  iVar3 = FUN_004207b0(auStack_24);
  if (iVar3 != 0) {
    FUN_004688a0(param_1 + 0x158,0,0xffffffff);
  }
  FUN_004087f0(param_1);
  uVar1 = DAT_00612560;
  *(uint *)(param_1 + 0x574) = 0;
  iVar2 = FUN_00483e60(uVar1);
  if ((iVar2 == 0) && (iVar3 != 0)) {
    *(uint *)(param_1 + 0x574) = 1;
    return iVar3;
  }
  return iVar3;
}
