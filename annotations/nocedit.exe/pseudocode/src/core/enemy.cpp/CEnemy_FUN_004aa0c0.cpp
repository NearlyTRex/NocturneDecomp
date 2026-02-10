// Name: core_enemy.cpp_CEnemy_FUN_004aa0c0
// Address: 004aa0c0
// Address Range: [[004aa0c0, 004aa0e1]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_FUN_004aa0c0(CEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_FUN_004aa0c0(CEnemy *this_ptr)

{
  CDemonActor *in_stack_00000008;
  
  if (in_stack_00000008 != this_ptr->victim) {
    return;
  }
  (*(((this_ptr->base).base.vtable._uc)->_uc).releaseVictim)(&this_ptr->base);
  return;
}
