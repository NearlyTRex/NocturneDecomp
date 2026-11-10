// Name: core_enemy.cpp_CEnemy_setVictim_FUN_004a0ee0
// Address: 004a0ee0
// Address Range: [[004a0ee0, 004a0ef8]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_setVictim_FUN_004a0ee0(CEnemy *this_ptr,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_setVictim_FUN_004a0ee0(CEnemy *this_ptr,CDemonActor *victim)

{
  this_ptr->victim_search_timer = 0.0;
  this_ptr->script_victim = (CCharacter *)victim;
  return;
}
