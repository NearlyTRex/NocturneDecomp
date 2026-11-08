// Name: FUN_00510530
// Address: 00510530
// Address Range: [[00510530, 00510618]]
// Convention: unknown
// Signature: void FUN_00510530(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00510530(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  *(uint *)(param_1 + 0x46e60) = 2;
  FUN_0043eea0(param_1 + 0xc330,param_1 + 0x20,param_1 + 0x30,param_1 + 0x158);
  iVar1 = FUN_0040c600(*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),_DAT_01cc9190);
  if (iVar1 != 0) {
    puVar4 = (uint *)(iVar1 + 0x20384);
    puVar5 = (uint *)(param_1 + 0xc6c8);
    for (uVar3 = *(int *)(param_1 + 0xc434) * 0x47 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(byte *)puVar5 = *(byte *)puVar4;
      puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
  }
  iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  uVar2 = FUN_00524770(iVar1 + 0x158,*(uint *)(iVar1 + 0x160));
  FUN_00524ae0(param_1 + 0x158,uVar2);
  FUN_005247c0(param_1 + 0x158,1,1);
  FUN_00445430(PTR_DAT_00611100,">@%s attacking hero\n" + 2,param_1);
  return;
}
