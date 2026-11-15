// Name: core_boneguy.cpp_getWorldBoundingBoxCenter_FUN_00417e20
// Address: 00417e20
// Address Range: [[00417e20, 00417f15]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_boneguy_cpp_getWorldBoundingBoxCenter_FUN_00417e20(CDemonActor *actor,CVector3f *out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __stack_esi core_boneguy_cpp_getWorldBoundingBoxCenter_FUN_00417e20(CDemonActor *actor,CVector3f *out)

{
  int iVar1;
  float unaff_EBP;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1038 [1003];
  CBoundingBox3D *in_stack_ffffff78;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [2];
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  (*((actor->vtable)._ub)->getBoundingBox)(actor,in_stack_ffffff78);
  puVar3 = (uint *)&stack0xffffff80;
  puVar2 = (uint *)&stack0xffffff90;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
  }
  core_actor_cpp_CVector3f_ctor_FUN_0040d340(&CStack_20);
  CStack_20.x = fStack_68 + fStack_5c;
  CStack_20.y = fStack_64 + fStack_58;
  CStack_20.z = fStack_60 + fStack_54;
  fStack_14 = fStack_68 + fStack_5c;
  (&fStack_10)[(uint)bVar4 * -2] = *(float *)((int)&CStack_20 + (uint)bVar4 * -8 + 4);
  *(uint *)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&CStack_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_actor_cpp_CVector3f_ctor_FUN_0040d340(&CStack_50);
  CStack_50.x = fStack_14 * _DAT_005cbfda;
  CStack_50.y = fStack_10 * _DAT_005cbfda;
  CStack_50.z = unaff_EBP * _DAT_005cbfda;
  fStack_44 = fStack_14 * _DAT_005cbfda;
  afStack_40[(uint)bVar4 * -2] = *(float *)((int)&CStack_50 + (uint)bVar4 * -8 + 4);
  afStack_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_50 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  afStack_40[1] = fStack_60 + (float)_DAT_005cbfe2;
  CStack_38.x = fStack_44;
  *(float *)((int)&CStack_38 + (uint)bVar4 * -8 + 4) = afStack_40[(uint)bVar4 * -2];
  *(float *)((int)&CStack_38 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(actor,&CStack_38,&CStack_2c);
  puVar3 = (uint *)((int)out + (uint)bVar4 * -8 + 4);
  out->x = CStack_2c.x;
  *puVar3 = *(uint *)((int)&CStack_2c + (uint)bVar4 * -8 + 4);
  puVar3[(uint)bVar4 * -2 + 1] =
       *(uint *)((int)&CStack_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  return out;
}
