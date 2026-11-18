// Name: core_hero.cpp_CHero_clearHeroAction_FUN_004eb5b0
// Address: 004eb5b0
// Address Range: [[004eb5b0, 004eb5dc]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_clearHeroAction_FUN_004eb5b0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_clearHeroAction_FUN_004eb5b0(CHero *this_ptr)

{
  this_ptr->hero_action_actor = (CDemonActor *)0x0;
  this_ptr->hero_action_target = (CDemonActor *)0x0;
  this_ptr->hero_action_range = 1e+30;
  this_ptr->hero_action = 0;
  return;
}
