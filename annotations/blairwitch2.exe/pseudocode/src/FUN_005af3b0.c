// Name: FUN_005af3b0
// Address: 005af3b0
// Address Range: [[005af3b0, 005af52d]]
// Convention: unknown
// Signature: void FUN_005af3b0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_005af3b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_100c [944];
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_a8;
  uint local_98;
  uint local_88;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar5 = 0;
  iVar2 = param_2 * 0xac + param_1 + 0x37b50;
  FUN_00592830(param_3 + 0xe80 + *(int *)(iVar2 + 0x40) * 0x30);
  puVar3 = (uint *)&stack0xffffffac;
  puVar4 = (uint *)&stack0xffffff7c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  FUN_005916b0(&stack0xffffff7c,iVar2 + 0x48);
  puVar3 = (uint *)&stack0xfffffeec;
  puVar4 = &stack0xfffffebc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(uint *)(iVar2 + 0x78) = local_144;
  *(uint *)(iVar2 + 0x7c) = local_134;
  *(uint *)(iVar2 + 0x80) = local_124;
  *(uint *)(iVar2 + 0x84) = local_140;
  *(uint *)(iVar2 + 0x88) = local_130;
  *(uint *)(iVar2 + 0x8c) = local_120;
  *(uint *)(iVar2 + 0x90) = local_13c;
  *(uint *)(iVar2 + 0x94) = local_12c;
  *(uint *)(iVar2 + 0x98) = local_11c;
  FUN_00592830(&stack0xfffffebc);
  puVar3 = (uint *)&stack0xffffff1c;
  puVar4 = (uint *)&stack0xffffff4c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  local_24 = local_a8;
  local_20 = local_98;
  local_1c = local_88;
  local_18 = local_a8;
  (&stack0xffffffe0)[(uint)bVar5 * -2 + 3] = (&stack0xffffffe0)[(uint)bVar5 * 0xfffffffe];
  (&stack0xffffffe0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       (&stack0xffffffe0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  if ((uint *)(iVar2 + 0xa0) == &local_18) {
    return;
  }
  *(uint *)(iVar2 + 0xa0) = local_18;
  *(uint *)(iVar2 + 0xa4) = local_14;
  *(uint *)(iVar2 + 0xa8) = local_10;
  return;
}
