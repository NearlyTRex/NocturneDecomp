// Name: core_trigger.cpp_FUN_0056efa0
// Address: 0056efa0
// Address Range: [[0056efa0, 0056f071]]
// Convention: unknown
// Signature: undefined4 core_trigger_cpp_FUN_0056efa0(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_trigger_cpp_FUN_0056efa0(int param_1,float *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1020 [1004];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x174) != 4) {
    return 0;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar2 = (uint *)&stack0xffffffb0;
  puVar3 = &stack0xffffff98;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  fStack_20 = fStack_68 + fStack_5c;
  fStack_1c = fStack_64 + fStack_58;
  fStack_18 = fStack_60 + fStack_54;
  fStack_2c = fStack_68 + fStack_5c;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_38 = fStack_2c * _DAT_005d6793;
  fStack_34 = fStack_28 * _DAT_005d6793;
  fStack_30 = fStack_24 * _DAT_005d6793;
  fStack_14 = fStack_2c * _DAT_005d6793;
  *(uint *)((int)&stack0xfffffff0 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (param_2 != &stack0xffffffec) {
    *param_2 = fStack_14;
    param_2[1] = fStack_10;
    param_2[2] = fStack_c;
  }
  return 1;
}
