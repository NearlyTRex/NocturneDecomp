// Name: FUN_004c1000
// Address: 004c1000
// Address Range: [[004c1000, 004c1211]]
// Convention: unknown
// Signature: int FUN_004c1000(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c1000(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint auStackY_1070 [1016];
  uint uStack_88;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_34;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  bVar3 = 0;
  iVar2 = 1;
  FUN_00546a90(param_1 + 0x2b4,_DAT_01cb8120);
  uStack_70 = uStack_34;
  *(uint *)((int)&stack0xffffff94 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffff98 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (&stack0xffffff90 != param_2) {
    *param_2 = uStack_70;
    param_2[1] = uStack_6c;
    param_2[2] = uStack_68;
  }
  if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10af8) * 4) != 0) {
    FUN_00546a90(param_1 + 0x2b4,_DAT_01cb8134);
    uStack_7c = uStack_64;
    *(uint *)((int)&stack0xffffff88 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffa0 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffff8c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffa4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (param_2 + 3 != &stack0xffffff84) {
      param_2[3] = uStack_7c;
      param_2[4] = uStack_78;
      param_2[5] = uStack_74;
    }
    iVar2 = 2;
  }
  if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b00) * 4) != 0) {
    FUN_00546a90(param_1 + 0x2b4,_DAT_01cb8138);
    puVar1 = param_2 + iVar2 * 3;
    uStack_28 = uStack_88;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffff7c + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffff80 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (puVar1 != &stack0xffffffd8) {
      *puVar1 = uStack_28;
      puVar1[1] = uStack_24;
      puVar1[2] = uStack_20;
    }
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b18) * 4) != 0) {
    FUN_00546a90(param_1 + 0x2b4,_DAT_01cb8144);
    puVar1 = param_2 + iVar2 * 3;
    uStack_4c = uStack_1c;
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (puVar1 != &stack0xffffffb4) {
      *puVar1 = uStack_4c;
      puVar1[1] = uStack_48;
      puVar1[2] = uStack_44;
    }
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(param_1 + 0x23f4 + *(int *)(param_1 + 0x10b1c) * 4) == 0) {
    return iVar2;
  }
  FUN_00546a90(param_1 + 0x2b4,_DAT_01cb814c);
  param_2 = param_2 + iVar2 * 3;
  uStack_58 = uStack_40;
  *(uint *)((int)&stack0xffffffac + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffb0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (param_2 != &stack0xffffffa8) {
    *param_2 = uStack_58;
    param_2[1] = uStack_54;
    param_2[2] = uStack_50;
  }
  return iVar2 + 1;
}
