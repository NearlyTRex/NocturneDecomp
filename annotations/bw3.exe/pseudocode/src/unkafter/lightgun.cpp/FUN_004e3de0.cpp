// Name: unkafter_lightgun.cpp_FUN_004e3de0
// Address: 004e3de0
// Address Range: [[004e3de0, 004e3e59]]
// Convention: unknown
// Signature: void unkafter_lightgun_cpp_FUN_004e3de0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_lightgun_cpp_FUN_004e3de0(uint param_1)

{
  float *unaff_ESI;
  byte bVar1;
  float afStackY_1014 [1017];
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  float fStack_14;
  float fStack_10;
  uint uStack_c;
  
  bVar1 = 0;
  core_weapon_cpp_FUN_0057b820(param_1);
  fStack_14 = fStack_2c;
  (&stack0xfffffff0)[(uint)bVar1 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffd8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (&stack0xffffffe0 != &stack0xffffffec) {
    fStack_20 = fStack_14;
    fStack_1c = fStack_10;
    uStack_18 = uStack_c;
  }
  fStack_20 = fStack_20 + _DAT_005c6aa6;
  fStack_1c = fStack_1c + _DAT_005c6aaa;
  *unaff_ESI = fStack_20;
  unaff_ESI[(uint)bVar1 * -2 + 1] = (&stack0xffffffe4)[(uint)bVar1 * 0xfffffffe];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(float *)((int)&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}
