// Name: core_enemy.cpp_CEnemy_FUN_004aa0c0
// Address: 004aa0c0
// Address Range: [[004aa0c0, 004aa0e1]]
// Convention: __cdecl
// Signature: void core_enemy.cpp_CEnemy_FUN_004aa0c0(CEnemy * this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_FUN_004aa0c0(CEnemy *this_ptr)

{
  CVector3f *unaff_retaddr;
  float in_stack_00000008;
  
  if (in_stack_00000008 != *(float *)(this_ptr->field6_0xbe38 + 4)) {
    return;
  }
  (*(this_ptr->base_character).base_actor.vtable[1].handleFootstep)
            ((CDemonActor *)this_ptr,unaff_retaddr,(int)this_ptr,in_stack_00000008);
  return;
}
