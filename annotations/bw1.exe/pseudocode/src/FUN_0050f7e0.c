// Name: FUN_0050f7e0
// Address: 0050f7e0
// Address Range: [[0050f7e0, 0050fb9c]]
// Convention: unknown
// Signature: void FUN_0050f7e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050f7e0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  int aiStackY_1030 [846];
  byte local_1f8 [48];
  uint local_1c8 [12];
  uint local_198 [12];
  byte local_168 [48];
  uint local_138 [3];
  uint local_12c;
  uint local_11c;
  uint local_10c;
  byte local_108 [48];
  uint local_d8 [12];
  uint local_a8 [12];
  uint local_78 [12];
  uint local_48;
  int local_44 [4];
  uint local_34;
  uint local_30;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  bVar10 = 0;
  iVar1 = FUN_00569f30(param_1 + 0x158);
  local_18 = *(int *)(iVar1 + 0x1de78);
  local_14 = param_1;
  puVar2 = (uint *)(param_1 + 0x1b0);
  iVar1 = param_1;
  for (iVar6 = 0; iVar7 = _DAT_01d06ab4 * 4, iVar6 < local_18; iVar6 = iVar6 + 1) {
    puVar5 = (uint *)(*(int *)(iVar7 + 0x1d06aa4) + 0x808 + iVar6 * 0x10);
    puVar8 = (uint *)(iVar1 + 0x80c + (uint)bVar10 * -8);
    puVar9 = puVar5 + (uint)bVar10 * -2 + 1;
    *(uint *)(iVar1 + 0x808) = *puVar5;
    puVar5 = puVar8 + (uint)bVar10 * -2 + 1;
    *puVar8 = *puVar9;
    *puVar5 = puVar9[(uint)bVar10 * -2 + 1];
    puVar5[(uint)bVar10 * -2 + 1] = (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    puVar5 = (uint *)(iVar6 * 0x30 + *(int *)(iVar7 + 0x1d06aa4) + 0xfd8);
    puVar9 = (uint *)(local_14 + 0xfd8);
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
    }
    puVar5 = (uint *)(*(int *)(iVar7 + 0x1d06aa4) + 0x1b0 + iVar6 * 0xc);
    if (puVar2 != puVar5) {
      *puVar2 = *puVar5;
      puVar2[1] = puVar5[1];
      puVar2[2] = puVar5[2];
    }
    iVar1 = iVar1 + 0x10;
    local_14 = local_14 + 0x30;
    puVar2 = puVar2 + 3;
  }
  iVar1 = *(int *)(iVar7 + 0x1d06aa4);
  if ((uint *)(param_1 + 0x7fc) != (uint *)(iVar1 + 0x7fc)) {
    *(uint *)(param_1 + 0x7fc) = *(uint *)(iVar1 + 0x7fc);
    *(uint *)(param_1 + 0x800) = *(uint *)(iVar1 + 0x800);
    *(uint *)(param_1 + 0x804) = *(uint *)(iVar1 + 0x804);
  }
  *(uint *)(param_1 + 0x2478) = 0xffffffff;
  iVar1 = *(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2e34);
  puVar2 = *(uint **)(iVar1 + 0x10c);
  puVar5 = *(uint **)(param_1 + 0xc43c);
  for (uVar3 = (uint)(*(int *)(iVar1 + 0x104) * 0xc) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + (uint)bVar10 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(byte *)puVar5 = *(byte *)puVar2;
    puVar2 = (uint *)((int)puVar2 + (uint)bVar10 * -2 + 1);
    puVar5 = (uint *)((int)puVar5 + (uint)bVar10 * -2 + 1);
  }
  iVar1 = *(int *)(param_1 + 0x46e64);
  if (iVar1 != 0) {
    FUN_005b5620(local_168,iVar1 + 0x20,iVar1 + 0x30);
    FUN_005b5760(local_108,*(int *)(param_1 + 0x46e64) + 0x20,*(int *)(param_1 + 0x46e64) + 0x30);
    iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    FUN_005b5760(local_1f8,iVar1 + 0x20,iVar1 + 0x30);
    FUN_005b70f0(0,local_108);
    puVar2 = local_198;
    puVar5 = local_d8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + (uint)bVar10 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    }
    FUN_005b5200(local_1f8,local_168,local_d8);
    puVar2 = local_a8;
    puVar5 = local_1c8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + (uint)bVar10 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    }
    FUN_005b5200(local_1c8);
    puVar2 = local_78;
    puVar5 = (uint *)&stack0xfffffd18;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + (uint)bVar10 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    }
    FUN_005b5200(&stack0xfffffd18);
    puVar2 = (uint *)&stack0xfffffd78;
    puVar5 = local_138;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + (uint)bVar10 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    }
    FUN_005b7030(0,local_138);
    puVar2 = (uint *)&stack0xfffffda8;
    puVar5 = (uint *)&stack0xfffffd48;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + (uint)bVar10 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    }
    FUN_005b5200(&stack0xfffffd48);
    puVar2 = (uint *)&stack0xfffffdd8;
    puVar5 = local_138;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + (uint)bVar10 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    }
    local_44[2] = local_12c;
    local_44[3] = local_11c;
    local_34 = local_10c;
    local_24 = local_12c;
    local_44[(uint)bVar10 * -2 + 9] = local_44[(uint)bVar10 * -2 + 3];
    local_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         local_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    *(uint *)(param_1 + 0x20) = local_24;
    *(uint *)(param_1 + 0x24) = local_20;
    *(uint *)(param_1 + 0x28) = local_1c;
    FUN_005b5930(local_138);
    local_48 = local_30;
    local_44[(uint)bVar10 * -2] = local_44[(uint)bVar10 * -2 + 6];
    local_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         local_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    if ((uint *)(param_1 + 0x30) != &local_48) {
      *(uint *)(param_1 + 0x30) = local_48;
      *(int *)(param_1 + 0x34) = local_44[0];
      *(int *)(param_1 + 0x38) = local_44[1];
      return;
    }
  }
  return;
}
