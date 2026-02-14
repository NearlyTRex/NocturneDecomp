// Name: core_enemy.cpp_CEnemy_getTargetPoint_FUN_004a99d0
// Address: 004a99d0
// Address Range: [[004a99d0, 004a9a4e]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_enemy_cpp_CEnemy_getTargetPoint_FUN_004a99d0(CEnemy *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl core_enemy_cpp_CEnemy_getTargetPoint_FUN_004a99d0(CEnemy *this_ptr,CVector3f *out_point)

{
  float fVar1;
  CBoundingBox3D CStack_30;
  
  (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,&CStack_30);
  fVar1 = 0.5f;
  out_point->x = (CStack_30.min.x + CStack_30.max.x) * 0.5f;
  out_point->y = (CStack_30.min.y + CStack_30.max.y) * fVar1;
  out_point->z = fVar1 * (CStack_30.min.z + CStack_30.max.z);
  out_point->y = CStack_30.max.y - (CStack_30.max.y - CStack_30.min.y) * (float)0.16666666666666699;
  return out_point;
}
