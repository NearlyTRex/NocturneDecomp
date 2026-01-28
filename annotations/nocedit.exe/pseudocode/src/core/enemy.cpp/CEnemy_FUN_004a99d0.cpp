// Name: core_enemy.cpp_CEnemy_FUN_004a99d0
// Address: 004a99d0
// Address Range: [[004a99d0, 004a9a4e]]
// Convention: __cdecl
// Signature: float * __cdecl core_enemy_cpp_CEnemy_FUN_004a99d0(CEnemy *this_ptr)

#include "nocturne.h"

float * __cdecl core_enemy_cpp_CEnemy_FUN_004a99d0(CEnemy *this_ptr)

{
  float fVar1;
  float *in_stack_00000008;
  CBoundingBox3D CStack_30;
  float fStack_18;
  float fStack_14;
  
  (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,&CStack_30);
  fVar1 = 0.5f;
  *in_stack_00000008 = (CStack_30.min.z + CStack_30.max.z) * 0.5f;
  in_stack_00000008[1] = (CStack_30.max.x + fStack_18) * fVar1;
  in_stack_00000008[2] = fVar1 * (CStack_30.max.y + fStack_14);
  in_stack_00000008[1] = fStack_18 - (fStack_18 - CStack_30.max.x) * (float)0.16666666666666699;
  return in_stack_00000008;
}
