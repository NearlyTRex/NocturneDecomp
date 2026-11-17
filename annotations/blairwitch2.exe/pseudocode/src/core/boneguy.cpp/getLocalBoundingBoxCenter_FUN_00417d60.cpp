// Name: core_boneguy.cpp_getLocalBoundingBoxCenter_FUN_00417d60
// Address: 00417d60
// Address Range: [[00417d60, 00417e19]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_boneguy_cpp_getLocalBoundingBoxCenter_FUN_00417d60(CDemonActor *actor,CVector3f *out)

#include "nocturne.h"

CVector3f * __stack_esi core_boneguy_cpp_getLocalBoundingBoxCenter_FUN_00417d60(CDemonActor *actor,CVector3f *out)

{
  int iVar1;
  float unaff_EBP;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1020 [1003];
  CBoundingBox3D *in_stack_ffffff90;
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
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  (*((actor->vtable)._ub)->getBoundingBox)(actor,in_stack_ffffff90);
  puVar3 = (uint *)&stack0xffffffb0;
  puVar2 = (uint *)&stack0xffffff90;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
  }
  fStack_38 = fStack_68 + fStack_5c;
  fStack_34 = fStack_64 + fStack_58;
  fStack_30 = fStack_60 + fStack_54;
  fStack_14 = fStack_68 + fStack_5c;
  *(uint *)((int)&stack0xfffffff0 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar4 * -8);
  *(uint *)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_20 = fStack_14 * 0.5f;
  fStack_1c = fStack_10 * 0.5f;
  fStack_18 = unaff_EBP * 0.5f;
  fStack_2c = fStack_14 * 0.5f;
  *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_24 = fStack_60 + (float)0.40000000000000002;
  puVar3 = (uint *)((int)out + (uint)bVar4 * -8 + 4);
  out->x = fStack_2c;
  *puVar3 = *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8);
  puVar3[(uint)bVar4 * -2 + 1] =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return out;
}
