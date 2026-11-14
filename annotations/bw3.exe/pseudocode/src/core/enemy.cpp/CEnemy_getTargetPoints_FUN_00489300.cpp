// Name: core_enemy.cpp_CEnemy_getTargetPoints_FUN_00489300
// Address: 00489300
// Address Range: [[00489300, 004893eb]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_getTargetPoints_FUN_00489300(CEnemy *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_enemy_cpp_CEnemy_getTargetPoints_FUN_00489300(CEnemy *this_ptr,CVector3f *out_points_array)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1028 [1003];
  CBoundingBox3D *in_stack_ffffff88;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [4];
  float fStack_14;
  
  bVar5 = 0;
  (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,in_stack_ffffff88);
  puVar3 = (uint *)&stack0xffffff90;
  puVar4 = (uint *)&stack0xffffffa0;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fVar1 = (float)_DAT_005bdc47;
  fStack_28 = fStack_58 + fStack_4c;
  afStack_24[0] = fStack_54 + fStack_48;
  afStack_24[1] = fStack_50 + fStack_44;
  afStack_24[2] = fStack_58 + fStack_4c;
  afStack_24[(uint)bVar5 * -2 + 3] = afStack_24[(uint)bVar5 * -2];
  afStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  fStack_40 = afStack_24[2] * _DAT_005bdc43;
  fStack_3c = afStack_24[3] * _DAT_005bdc43;
  fStack_38 = fStack_14 * _DAT_005bdc43;
  CStack_34.x = afStack_24[2] * _DAT_005bdc43;
  *(uint *)((int)&CStack_34 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8);
  *(uint *)((int)&CStack_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if (out_points_array == &CStack_34) {
    return 1;
  }
  out_points_array->x = CStack_34.x;
  out_points_array->y = (fStack_48 - fStack_54) * fVar1 + CStack_34.y;
  out_points_array->z = CStack_34.z;
  return 1;
}
