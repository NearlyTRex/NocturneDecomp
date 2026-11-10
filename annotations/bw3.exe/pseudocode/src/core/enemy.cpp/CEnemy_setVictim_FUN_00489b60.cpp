// Name: core_enemy.cpp_CEnemy_setVictim_FUN_00489b60
// Address: 00489b60
// Address Range: [[00489b60, 00489b78]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_setVictim_FUN_00489b60(CEnemy *this_ptr,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_setVictim_FUN_00489b60(CEnemy *this_ptr,CDemonActor *victim)

{
  this_ptr->victim_search_timer = 0.0;
  *(CDemonActor **)&this_ptr->field_0xd04c = victim;
  return;
}
