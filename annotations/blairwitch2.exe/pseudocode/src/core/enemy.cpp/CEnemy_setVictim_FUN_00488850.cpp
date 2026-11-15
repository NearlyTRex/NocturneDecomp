// Name: core_enemy.cpp_CEnemy_setVictim_FUN_00488850
// Address: 00488850
// Address Range: [[00488850, 00488883]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_setVictim_FUN_00488850(CEnemy *this_ptr,CDemonActor *victim)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_setVictim_FUN_00488850(CEnemy *this_ptr,CDemonActor *victim)

{
  CDemonActor *pCVar1;
  
  pCVar1 = 0xFFFFFFFF;
  this_ptr->script_victim = (CCharacter *)victim;
  if (victim == pCVar1) {
    this_ptr->victim_search_timer = 0.0;
    return;
  }
  this_ptr->victim = (CCharacter *)victim;
  this_ptr->victim_search_timer = 0.0;
  return;
}
