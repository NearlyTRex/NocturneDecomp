// Name: FUN_005adf90
// Address: 005adf90
// Address Range: [[005adf90, 005ae136]]
// Convention: unknown
// Signature: int FUN_005adf90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005adf90(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int aiStackY_1044 [970];
  uint uStack_c4;
  int iStack_c0;
  uint *puStack_bc;
  uint auStack_b0 [2];
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_5c;
  uint auStack_58 [5];
  uint auStack_44 [3];
  uint local_38;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint auStack_1c [5];
  
  bVar4 = 0;
  iVar1 = FUN_00483e60();
  if (iVar1 != 0) {
    return iVar1;
  }
  puStack_bc = (uint *)param_1;
  iStack_c0 = 0x5adfdb;
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))();
  puStack_bc = auStack_58 + 2;
  auStack_58[2] = local_38;
  auStack_58[(uint)bVar4 * -2 + 3] = auStack_58[(uint)bVar4 * -2 + 9];
  auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  iStack_c0 = param_1;
  uStack_c4 = 0x5adffe;
  FUN_00408b40();
  uStack_5c = auStack_1c[2];
  auStack_58[(uint)bVar4 * -2] = auStack_1c[(uint)bVar4 * -2 + 3];
  auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       auStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  uStack_24 = *(uint *)(param_1 + 0x2e8);
  puStack_bc = auStack_58 + 0xb;
  iStack_c0 = param_1;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_c4 = 0x5ae041;
  FUN_00408ac0();
  auStack_44[0] = uStack_20;
  auStack_58[(uint)bVar4 * -2 + 6] = auStack_1c[(uint)bVar4 * -2];
  auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       auStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  puStack_bc = (uint *)0x01E82168;
  iStack_c0 = 0x5ae05a;
  FUN_00559220();
  puStack_bc = (uint *)param_1;
  iStack_c0 = 0x01E82168;
  uStack_c4 = 0x5ae06a;
  FUN_00559250();
  puStack_bc = *(uint **)(param_1 + 0x304);
  if (puStack_bc != (uint *)0x0) {
    iStack_c0 = 0x01E82168;
    uStack_c4 = 0x5ae084;
    FUN_00559250();
  }
  puStack_bc = auStack_b0;
  iStack_c0 = 0x5ae096;
  FUN_004b63e0();
  uStack_a8 = 1;
  uStack_a4 = *(uint *)(param_1 + 0x2f4);
  uStack_a0 = *(uint *)(param_1 + 0x2f8);
  uStack_9c = *(uint *)(param_1 + 0x2fc);
  auStack_b0[0] = 0x3f800000;
  puStack_bc = (uint *)_DAT_01d06b10;
  iStack_c0 = *(uint *)(param_1 + 0x304);
  uStack_c4 = 0x5ae0d7;
  iVar1 = FUN_0040c600();
  puStack_bc = (uint *)0x0;
  uStack_94 = 1;
  uStack_98 = (uint)(iVar1 != 0);
  puVar2 = auStack_b0;
  puVar3 = (uint *)&stack0xfffffef0;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_004b6420(0x01C57074,&uStack_5c,auStack_58 + 5);
  puStack_bc = (uint *)0x01E82168;
  iStack_c0 = 0x5ae129;
  iVar1 = FUN_00559220();
  return iVar1;
}
