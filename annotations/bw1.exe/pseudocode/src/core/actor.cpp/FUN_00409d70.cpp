// Name: core_actor.cpp_FUN_00409d70
// Address: 00409d70
// Address Range: [[00409d70, 00409f1d]]
// Convention: unknown
// Signature: uint core_actor_cpp_FUN_00409d70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_actor_cpp_FUN_00409d70(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1010 [995];
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
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
  puVar3 = (uint *)&stack0xffffffa8;
  puVar4 = &stack0xffffffc0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_28 = fStack_34 - fStack_40;
  fStack_24 = fStack_30 - fStack_3c;
  fStack_20 = fStack_2c - fStack_38;
  fStack_1c = fStack_34 - fStack_40;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  uVar2 = 0;
  if (((((fStack_1c < (float)_DAT_005d25c9) && (fStack_18 < (float)_DAT_005d25c9)) &&
       (fStack_14 < (float)_DAT_005d25c9)) &&
      (((float)_DAT_005d25d1 < fStack_1c && ((float)_DAT_005d25d1 < fStack_18)))) &&
     ((float)_DAT_005d25d1 < fStack_14)) {
    uVar2 = 4;
  }
  if (((fStack_1c < 1.0) && (fStack_18 < 1.0)) &&
     (((float)_DAT_005d25c9 < fStack_14 &&
      (((fStack_14 < (float)_DAT_005d25d9 && (fStack_1c < fStack_14)) && (fStack_18 < fStack_14)))))
     ) {
    uVar2 = uVar2 | 2;
  }
  if ((((fStack_1c < 1.0) && (fStack_18 < 1.0)) &&
      ((1.0 < fStack_14 && ((fStack_14 < (float)_DAT_005d25c9 && (fStack_1c < fStack_14)))))) &&
     (fStack_18 < fStack_14)) {
    uVar2 = uVar2 | 4;
  }
  return uVar2;
}
