// Name: core_enemy.cpp_CEnemy_FUN_004a97c0
// Address: 004a97c0
// Address Range: [[004a97c0, 004a9870]]
// Convention: __cdecl
// Signature: int core_enemy.cpp_CEnemy_FUN_004a97c0(CEnemy * this_ptr)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_FUN_004a97c0(CEnemy *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  BADSPACEBASE *in_ESP;
  float *in_stack_00000008;
  CBoundingBox3D CStack_40;
  float afStack_28 [8];
  
  (*((this_ptr->base_character).base_actor.vtable)->getBoundingBox)
            ((CDemonActor *)this_ptr,&CStack_40);
  fVar3 = (float)0.29999999999999999;
  fVar1 = (CStack_40.min.y + CStack_40.max.y) * 0.5f;
  fVar2 = (CStack_40.min.z + CStack_40.max.z) * 0.5f;
  if (in_stack_00000008 == afStack_28) {
    return 1;
  }
  *in_stack_00000008 = (CStack_40.min.x + CStack_40.max.x) * 0.5f;
  in_stack_00000008[1] = (CStack_40.max.y - CStack_40.min.y) * fVar3 + fVar1;
  in_stack_00000008[2] = fVar2;
  return 1;
}
