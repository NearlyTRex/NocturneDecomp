// Name: core_zombie.cpp_FUN_00588590
// Address: 00588590
// Address Range: [[00588590, 00588649]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_00588590(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombie_cpp_FUN_00588590(int param_1)

{
  int iVar1;
  float *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1028 [1005];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar2 = (uint *)&stack0xffffffa8;
  puVar3 = &stack0xffffff90;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  fStack_40 = fStack_70 + fStack_64;
  fStack_3c = fStack_6c + fStack_60;
  fStack_38 = fStack_68 + fStack_5c;
  fStack_1c = fStack_70 + fStack_64;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_28 = fStack_1c * _DAT_005d839f;
  fStack_24 = fStack_18 * _DAT_005d839f;
  fStack_20 = fStack_14 * _DAT_005d839f;
  fStack_34 = fStack_1c * _DAT_005d839f;
  *(uint *)(&stack0xffffffd0 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_2c = fStack_68 + (float)_DAT_005d83a7;
  *unaff_ESI = fStack_34;
  unaff_ESI[(uint)bVar4 * -2 + 1] = *(float *)(&stack0xffffffd0 + (uint)bVar4 * -8);
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(float *)((int)&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return;
}
