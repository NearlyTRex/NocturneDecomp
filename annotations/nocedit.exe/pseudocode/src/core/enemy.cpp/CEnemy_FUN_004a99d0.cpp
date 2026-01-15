// Name: core_enemy.cpp_CEnemy_FUN_004a99d0
// Address: 004a99d0
// Address Range: [[004a99d0, 004a9a4e]]
// Convention: __cdecl
// Signature: float * core_enemy.cpp_CEnemy_FUN_004a99d0(CEnemy * this_ptr)

#include "nocturne.h"

float * __cdecl core_enemy_cpp_CEnemy_FUN_004a99d0(CEnemy *this_ptr)

{
  float fVar1;
  float *in_stack_00000008;
  CBoundingBox3D CStack_2c;
  
  (*((this_ptr->base_character).base_actor.vtable)->getBoundingBox)
            ((CDemonActor *)this_ptr,&CStack_2c);
  fVar1 = 0.5f;
  *in_stack_00000008 = (CStack_2c.min.x + CStack_2c.max.x) * 0.5f;
  in_stack_00000008[1] = (CStack_2c.min.y + CStack_2c.max.y) * fVar1;
  in_stack_00000008[2] = fVar1 * (CStack_2c.min.z + CStack_2c.max.z);
  in_stack_00000008[1] =
       CStack_2c.max.y - (CStack_2c.max.y - CStack_2c.min.y) * (float)0.16666666666666699;
  return in_stack_00000008;
}
