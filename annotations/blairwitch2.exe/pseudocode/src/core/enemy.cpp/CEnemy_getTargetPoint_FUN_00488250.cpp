// Name: core_enemy.cpp_CEnemy_getTargetPoint_FUN_00488250
// Address: 00488250
// Address Range: [[00488250, 00488314]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_enemy_cpp_CEnemy_getTargetPoint_FUN_00488250(CEnemy *this_ptr,CVector3f *out_point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_enemy_cpp_CEnemy_getTargetPoint_FUN_00488250(CEnemy *this_ptr,CVector3f *out_point)

{
  float fVar1;
  int iVar2;
  CVector3f *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1020 [1003];
  CBoundingBox3D *in_stack_ffffff90;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar5 = 0;
  (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,in_stack_ffffff90);
  puVar4 = (uint *)&stack0xffffff98;
  puVar3 = (uint *)&stack0xffffffa8;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
  }
  fVar1 = fStack_40 - fStack_4c;
  fStack_14 = fStack_50 + fStack_44;
  fStack_10 = fStack_4c + fStack_40;
  fStack_20 = fStack_50 + fStack_44;
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xfffffff0 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_2c = fStack_20 * _DAT_005d2dc9;
  fStack_28 = fStack_1c * _DAT_005d2dc9;
  fStack_24 = fStack_18 * _DAT_005d2dc9;
  fStack_38 = fStack_20 * _DAT_005d2dc9;
  *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_34 = fStack_40 - fVar1 * (float)_DAT_005d2dd1;
  puVar4 = (uint *)((int)unaff_ESI + (uint)bVar5 * -8 + 4);
  unaff_ESI->x = fStack_38;
  *puVar4 = *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8);
  puVar4[(uint)bVar5 * -2 + 1] =
       *(uint *)(&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  return unaff_ESI;
}
