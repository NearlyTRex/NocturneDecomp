// Name: core_enemy.cpp_FUN_00488020
// Address: 00488020
// Address Range: [[00488020, 0048810b]]
// Convention: unknown
// Signature: undefined4 core_enemy_cpp_FUN_00488020(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_enemy_cpp_FUN_00488020(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1030 [1005];
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  bVar5 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  puVar3 = (uint *)&stack0xffffff88;
  puVar4 = &stack0xffffffa0;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fVar1 = (float)_DAT_005d2da1;
  fStack_30 = local_60 + fStack_54;
  fStack_2c = fStack_5c + fStack_50;
  fStack_28 = fStack_58 + fStack_4c;
  fStack_24 = local_60 + fStack_54;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_48 = fStack_24 * _DAT_005d2d9d;
  fStack_44 = fStack_20 * _DAT_005d2d9d;
  fStack_40 = fStack_1c * _DAT_005d2d9d;
  fStack_3c = fStack_24 * _DAT_005d2d9d;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if (param_2 == &stack0xffffffc4) {
    return 1;
  }
  *param_2 = fStack_3c;
  param_2[1] = (fStack_50 - fStack_5c) * fVar1 + fStack_38;
  param_2[2] = fStack_34;
  return 1;
}
