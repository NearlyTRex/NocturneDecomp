// Name: core_demnfolk.cpp_getObjectGrabPointLocal_FUN_004586d0
// Address: 004586d0
// Address Range: [[004586d0, 00458789]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_demnfolk_cpp_getObjectGrabPointLocal_FUN_004586d0(CDemonActor *actor,CVector3f *out_point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __stack_esi core_demnfolk_cpp_getObjectGrabPointLocal_FUN_004586d0(CDemonActor *actor,CVector3f *out_point)

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
  fStack_20 = fStack_14 * _DAT_005d7d1b;
  fStack_1c = fStack_10 * _DAT_005d7d1b;
  fStack_18 = unaff_EBP * _DAT_005d7d1b;
  fStack_2c = fStack_14 * _DAT_005d7d1b;
  *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  fStack_24 = fStack_60 + (float)_DAT_005d7d23;
  puVar3 = (uint *)((int)out_point + (uint)bVar4 * -8 + 4);
  out_point->x = fStack_2c;
  *puVar3 = *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8);
  puVar3[(uint)bVar4 * -2 + 1] =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return out_point;
}
