// Name: core_enemy.cpp_CEnemy_getTargetPoints_FUN_004a97c0
// Address: 004a97c0
// Address Range: [[004a97c0, 004a9870]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_getTargetPoints_FUN_004a97c0(CEnemy *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl
core_enemy_cpp_CEnemy_getTargetPoints_FUN_004a97c0(CEnemy *this_ptr,CVector3f *out_points_array)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CBoundingBox3D CStack_40;
  float fStack_28;
  float fStack_24;
  CVector3f aCStack_20 [2];
  
  (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,&CStack_40);
  fVar3 = (float)0.29999999999999999;
  fVar1 = (CStack_40.max.x + fStack_28) * 0.5f;
  fVar2 = (CStack_40.max.y + fStack_24) * 0.5f;
  if (out_points_array == aCStack_20) {
    return 1;
  }
  out_points_array->x = (CStack_40.min.z + CStack_40.max.z) * 0.5f;
  out_points_array->y = (fStack_28 - CStack_40.max.x) * fVar3 + fVar1;
  out_points_array->z = fVar2;
  return 1;
}
