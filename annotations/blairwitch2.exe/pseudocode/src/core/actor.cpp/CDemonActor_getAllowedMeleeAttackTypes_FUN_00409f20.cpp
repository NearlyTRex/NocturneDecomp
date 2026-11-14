// Name: core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_00409f20
// Address: 00409f20
// Address Range: [[00409f20, 0040a046]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_00409f20(CDemonActor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_00409f20(CDemonActor *this_ptr)

{
  int iVar1;
  uint uVar2;
  float unaff_EBP;
  uint *puVar3;
  float unaff_EDI;
  uint *puVar4;
  byte bVar5;
  float afStackY_1008 [999];
  CBoundingBox3D *in_stack_ffffff98;
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
  
  bVar5 = 0;
  (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_ffffff98);
  puVar3 = (uint *)&stack0xffffffc8;
  puVar4 = (uint *)&stack0xffffffa8;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_20 = fStack_44 - fStack_50;
  fStack_1c = fStack_40 - fStack_4c;
  fStack_18 = fStack_3c - fStack_48;
  fStack_14 = fStack_44 - fStack_50;
  *(uint *)(&stack0xfffffff0 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8);
  *(uint *)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  uVar2 = 0;
  if ((((fStack_14 < 1.0) && (unaff_EBP < 1.0)) && ((float)_DAT_005ca66e < unaff_EDI)) &&
     (((unaff_EDI < (float)_DAT_005ca676 && (fStack_14 < unaff_EDI)) && (unaff_EBP < unaff_EDI)))) {
    uVar2 = 2;
  }
  if (((fStack_14 < 1.0) && (unaff_EBP < 1.0)) &&
     ((1.0 < unaff_EDI &&
      (((unaff_EDI < (float)_DAT_005ca66e && (fStack_14 < unaff_EDI)) && (unaff_EBP < unaff_EDI)))))
     ) {
    uVar2 = uVar2 | 4;
  }
  return uVar2;
}
