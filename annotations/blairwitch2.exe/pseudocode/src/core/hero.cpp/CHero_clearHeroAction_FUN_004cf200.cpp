// Name: core_hero.cpp_CHero_clearHeroAction_FUN_004cf200
// Address: 004cf200
// Address Range: [[004cf200, 004cf22c]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_clearHeroAction_FUN_004cf200(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_clearHeroAction_FUN_004cf200(CHero *this_ptr)

{
  this_ptr->hero_action_actor = (CDemonActor *)0x0;
  this_ptr->hero_action_target = (CDemonActor *)0x0;
  this_ptr->hero_action_range = 1e+30;
  this_ptr->hero_action = 0;
  return;
}
