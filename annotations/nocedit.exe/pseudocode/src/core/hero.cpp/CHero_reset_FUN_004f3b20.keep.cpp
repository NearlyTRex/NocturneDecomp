// Name: core_hero.cpp_CHero_reset_FUN_004f3b20
// Address: 004f3b20
// MANUAL RECONSTRUCTION
// Address Range: [[004f3b20, 004f3bb2]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_reset_FUN_004f3b20(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_reset_FUN_004f3b20(CHero *this_ptr)

{
  int i;

  this_ptr->door_to_open = (CDoor *)0x0;
  this_ptr->object_to_pick_up = (CDemonActor *)0x0;
  this_ptr->pushed_object = (CBoxActor *)0x0;
  this_ptr->lever_to_pull = (CLever *)0x0;
  this_ptr->ladder_to_climb = (CLadder *)0x0;
  this_ptr->nearby_interactive_actor = (CDemonActor *)0x0;
  this_ptr->target_actor = (CDemonActor *)0x0;
  (this_ptr->base).grabbed_by = (CDemonActor *)0x0;
  core_inv_cpp_CInventory_removeMatchingKeys_FUN_005014a0(&this_ptr->inventory,0xffffffff);
  (*(((this_ptr->base).base.vtable._uh)->_uh).drawWeapon)(this_ptr,0);
  for (i = 0; i < 2; i = i + 1) {
    (this_ptr->base).carry_hands[i].carry_actor = (CDemonActor *)0x0;
  }
  return;
}
