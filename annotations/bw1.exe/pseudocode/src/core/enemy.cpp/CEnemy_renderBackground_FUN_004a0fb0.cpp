// Name: core_enemy.cpp_CEnemy_renderBackground_FUN_004a0fb0
// Address: 004a0fb0
// Address Range: [[004a0fb0, 004a0fd9]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_renderBackground_FUN_004a0fb0(CEnemy *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_renderBackground_FUN_004a0fb0(CEnemy *this_ptr,int layer_flag)

{
  if (this_ptr->pool_me != 0) {
    if (layer_flag != 0) {
      (this_ptr->base).render_active = 1;
    }
    core_charactr_cpp_CCharacter_renderBackground_FUN_0042f320(&this_ptr->base,layer_flag);
  }
  return;
}
