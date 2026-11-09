// Name: core_carved.cpp_FUN_00425580
// Address: 00425580
// Address Range: [[00425580, 00425613]]
// Convention: unknown
// Signature: float core_carved_cpp_FUN_00425580(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_carved_cpp_FUN_00425580(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1008 [1004];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_c;
  uint uStack_8;
  
  bVar4 = 0;
  uStack_8 = 0x3f800000;
  if (param_1 == 0) {
    return 1.0;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar2 = (uint *)&stack0xffffffc8;
  puVar3 = &stack0xffffffb0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  fStack_20 = fStack_44 - fStack_50;
  fStack_1c = fStack_40 - fStack_4c;
  fStack_18 = fStack_3c - fStack_48;
  fStack_14 = fStack_44 - fStack_50;
  *(uint *)(&stack0xfffffff0 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return fStack_c * (float)_DAT_005b7987 + 1.0;
}
