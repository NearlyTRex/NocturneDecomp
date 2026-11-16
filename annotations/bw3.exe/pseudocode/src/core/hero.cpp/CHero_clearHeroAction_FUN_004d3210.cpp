// Name: core_hero.cpp_CHero_clearHeroAction_FUN_004d3210
// Address: 004d3210
// Address Range: [[004d3210, 004d3246]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_clearHeroAction_FUN_004d3210(CHero *this_ptr)

{
  this_ptr->hero_action_actor = (CDemonActor *)0x0;
  this_ptr->hero_action_target = (CDemonActor *)0x0;
  this_ptr->hero_action_range = 1e+30;
  this_ptr->hero_action_started = 0;
  this_ptr->hero_action = 0;
  return;
}
