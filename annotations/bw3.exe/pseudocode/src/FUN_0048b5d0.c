// Name: FUN_0048b5d0
// Address: 0048b5d0
// Address Range: [[0048b5d0, 0048b637]]
// Convention: unknown
// Signature: void FUN_0048b5d0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048b5d0(uint param_1)

{
  uint *unaff_ESI;
  byte bVar1;
  float afStackY_1014 [1017];
  uint uStack_2c;
  uint uStack_20;
  float fStack_1c;
  float fStack_18;
  uint uStack_14;
  float fStack_10;
  float fStack_c;
  
  bVar1 = 0;
  FUN_0057b820(param_1);
  uStack_14 = uStack_2c;
  (&stack0xfffffff0)[(uint)bVar1 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffd8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (&stack0xffffffe0 != &stack0xffffffec) {
    uStack_20 = uStack_14;
    fStack_1c = fStack_10;
    fStack_18 = fStack_c;
  }
  fStack_18 = fStack_18 + _DAT_005bdd96;
  *unaff_ESI = uStack_20;
  unaff_ESI[(uint)bVar1 * -2 + 1] = (&stack0xffffffe4)[(uint)bVar1 * 0xfffffffe];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}
