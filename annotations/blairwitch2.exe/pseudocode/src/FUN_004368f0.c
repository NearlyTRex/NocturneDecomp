// Name: FUN_004368f0
// Address: 004368f0
// Address Range: [[004368f0, 0043696a]]
// Convention: unknown
// Signature: void FUN_004368f0(int param_1)

#include "nocturne.h"

void FUN_004368f0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  
  iVar6 = 0;
  puVar5 = (uint *)(param_1 + 0x58);
  puVar4 = (uint *)(param_1 + 8);
  while (iVar1 = *(int *)(param_1 + 0xfb4) + -1, iVar6 < iVar1) {
    uVar3 = *(uint *)(param_1 + 0xfb0);
    iVar6 = iVar6 + 1;
    puVar7 = puVar5;
    puVar8 = puVar4;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(byte *)puVar8 = *(byte *)puVar7;
      puVar7 = (uint *)((int)puVar7 + 1);
      puVar8 = (uint *)((int)puVar8 + 1);
    }
    puVar4 = puVar4 + 0x14;
    puVar5 = puVar5 + 0x14;
  }
  FUN_005b77c0((uint *)(param_1 + 8) + iVar1 * 0x14,0,*(uint *)(param_1 + 0xfb0));
  return;
}
