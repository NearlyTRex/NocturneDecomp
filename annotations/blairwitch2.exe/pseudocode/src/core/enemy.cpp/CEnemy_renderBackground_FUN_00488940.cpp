// Name: core_enemy.cpp_CEnemy_renderBackground_FUN_00488940
// Address: 00488940
// Address Range: [[00488940, 00488969]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_renderBackground_FUN_00488940(CEnemy *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_renderBackground_FUN_00488940(CEnemy *this_ptr,int layer_flag)

{
  if (this_ptr->pool_me != 0) {
    if (layer_flag != 0) {
      *(uint *)&(this_ptr->base).field_0x2568 = 1;
    }
    core_charactr_cpp_CCharacter_renderBackground_FUN_00425a00(&this_ptr->base,layer_flag);
  }
  return;
}
