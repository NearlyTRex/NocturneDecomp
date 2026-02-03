// Name: core_enemy.cpp_CEnemy_renderBackground_FUN_004a9fa0
// Address: 004a9fa0
// Address Range: [[004a9fa0, 004a9fc9]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_renderBackground_FUN_004a9fa0(CEnemy *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_renderBackground_FUN_004a9fa0(CEnemy *this_ptr,int layer_flag)

{
  if (this_ptr->pool_me != 0) {
    if (layer_flag != 0) {
      (this_ptr->base).unk1[0] = '\x01';
      (this_ptr->base).unk1[1] = '\0';
      (this_ptr->base).unk1[2] = '\0';
      (this_ptr->base).unk1[3] = '\0';
    }
    core_charactr_cpp_CCharacter_renderBackground_FUN_0042a390(&this_ptr->base,layer_flag);
  }
  return;
}
