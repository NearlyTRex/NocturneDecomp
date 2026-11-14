// Name: core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_00409d70
// Address: 00409d70
// Address Range: [[00409d70, 00409f1d]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_00409d70(CDemonActor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_00409d70(CDemonActor *this_ptr)

{
  int iVar1;
  uint uVar2;
  float unaff_EBP;
  uint *puVar3;
  float unaff_EDI;
  uint *puVar4;
  byte bVar5;
  float afStackY_1008 [993];
  CBoundingBox3D *in_stack_ffffff80;
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
  (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_ffffff80);
  puVar3 = (uint *)&stack0xffffffb0;
  puVar4 = (uint *)&stack0xffffffc0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_20 = fStack_2c - fStack_38;
  fStack_1c = fStack_28 - fStack_34;
  fStack_18 = fStack_24 - fStack_30;
  fStack_14 = fStack_2c - fStack_38;
  *(uint *)(&stack0xfffffff0 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8);
  *(uint *)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  uVar2 = 0;
  if (((((fStack_14 < (float)_DAT_005d25c9) && (unaff_EBP < (float)_DAT_005d25c9)) &&
       (unaff_EDI < (float)_DAT_005d25c9)) &&
      (((float)_DAT_005d25d1 < fStack_14 && ((float)_DAT_005d25d1 < unaff_EBP)))) &&
     ((float)_DAT_005d25d1 < unaff_EDI)) {
    uVar2 = 4;
  }
  if (((fStack_14 < 1.0) && (unaff_EBP < 1.0)) &&
     (((float)_DAT_005d25c9 < unaff_EDI &&
      (((unaff_EDI < (float)_DAT_005d25d9 && (fStack_14 < unaff_EDI)) && (unaff_EBP < unaff_EDI)))))
     ) {
    uVar2 = uVar2 | 2;
  }
  if ((((fStack_14 < 1.0) && (unaff_EBP < 1.0)) &&
      ((1.0 < unaff_EDI && ((unaff_EDI < (float)_DAT_005d25c9 && (fStack_14 < unaff_EDI)))))) &&
     (unaff_EBP < unaff_EDI)) {
    uVar2 = uVar2 | 4;
  }
  return uVar2;
}
