// Name: core_enemy.cpp_CEnemy_FUN_004a99d0
// Address: 004a99d0
// Address Range: [[004a99d0, 004a9a4e]]
// Convention: __cdecl
// Signature: float * core_enemy.cpp_CEnemy_FUN_004a99d0(CEnemy * this_ptr)

#include "nocturne.h"

float * __cdecl core_enemy_cpp_CEnemy_FUN_004a99d0(CEnemy *this_ptr)

{
  float fVar1;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float *in_stack_00000008;
  CBoundingBox3D CStack_30;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  (*((this_ptr->base_character).base_actor.vtable)->getBoundingBox)
            ((CDemonActor *)this_ptr,&CStack_30);
  fVar1 = 0.5f;
  *in_stack_00000008 = (CStack_30.max.z + fStack_10) * 0.5f;
  in_stack_00000008[1] = (fStack_18 + fStack_c) * fVar1;
  in_stack_00000008[2] = fVar1 * (fStack_14 + unaff_EBP);
  in_stack_00000008[1] = fStack_c - (fStack_c - fStack_18) * (float)0.16666666666666699;
  return in_stack_00000008;
}
