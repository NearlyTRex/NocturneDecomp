// Name: core_enemy.cpp_CEnemy_FUN_004a9ef0
// Address: 004a9ef0
// Address Range: [[004a9ef0, 004a9f08]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_FUN_004a9ef0(CEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_FUN_004a9ef0(CEnemy *this_ptr)

{
  uint in_stack_00000008;
  
  this_ptr->unk2[8] = '\0';
  this_ptr->unk2[9] = '\0';
  this_ptr->unk2[10] = '\0';
  this_ptr->unk2[0xb] = '\0';
  *(uint *)this_ptr[1].base.base.actor_name = in_stack_00000008;
  return;
}
