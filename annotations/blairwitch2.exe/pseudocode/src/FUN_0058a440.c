// Name: FUN_0058a440
// Address: 0058a440
// Address Range: [[0058a440, 0058a5e6]]
// Convention: unknown
// Signature: int FUN_0058a440(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0058a440(int param_1)

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
  iVar1 = FUN_0046b960();
  if (iVar1 != 0) {
    return iVar1;
  }
  puStack_bc = (uint *)param_1;
  iStack_c0 = 0x58a48b;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe8))();
  puStack_bc = auStack_58 + 2;
  auStack_58[2] = local_38;
  auStack_58[(uint)bVar4 * -2 + 3] = auStack_58[(uint)bVar4 * -2 + 9];
  auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  iStack_c0 = param_1;
  uStack_c4 = 0x58a4ae;
  FUN_00408d70();
  uStack_5c = auStack_1c[2];
  auStack_58[(uint)bVar4 * -2] = auStack_1c[(uint)bVar4 * -2 + 3];
  auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       auStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  uStack_24 = *(uint *)(param_1 + 0x444);
  puStack_bc = auStack_58 + 0xb;
  iStack_c0 = param_1;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_c4 = 0x58a4f1;
  FUN_00408cf0();
  auStack_44[0] = uStack_20;
  auStack_58[(uint)bVar4 * -2 + 6] = auStack_1c[(uint)bVar4 * -2];
  auStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       auStack_1c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  puStack_bc = (uint *)0x01E661B8;
  iStack_c0 = 0x58a50a;
  FUN_00537e00();
  puStack_bc = (uint *)param_1;
  iStack_c0 = 0x01E661B8;
  uStack_c4 = 0x58a51a;
  FUN_00537e30();
  puStack_bc = *(uint **)(param_1 + 0x460);
  if (puStack_bc != (uint *)0x0) {
    iStack_c0 = 0x01E661B8;
    uStack_c4 = 0x58a534;
    FUN_00537e30();
  }
  puStack_bc = auStack_b0;
  iStack_c0 = 0x58a546;
  FUN_0049dae0();
  uStack_a8 = 1;
  uStack_a4 = *(uint *)(param_1 + 0x450);
  uStack_a0 = *(uint *)(param_1 + 0x454);
  uStack_9c = *(uint *)(param_1 + 0x458);
  auStack_b0[0] = 0x41200000;
  puStack_bc = (uint *)_DAT_01cedf50;
  iStack_c0 = *(uint *)(param_1 + 0x460);
  uStack_c4 = 0x58a587;
  iVar1 = FUN_0040c8f0();
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
  FUN_0049db20(0x01C3DEB4,&uStack_5c,auStack_58 + 5);
  puStack_bc = (uint *)0x01E661B8;
  iStack_c0 = 0x58a5d9;
  iVar1 = FUN_00537e00();
  return iVar1;
}
