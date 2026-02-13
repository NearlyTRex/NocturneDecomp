// Name: core_hero.cpp_CHero_reset_FUN_004f3b20
// Address: 004f3b20
// Address Range: [[004f3b20, 004f3bb2]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_reset_FUN_004f3b20(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_reset_FUN_004f3b20(CHero *this_ptr)

{
  CHero *pCVar1;
  float *pfVar2;
  
  this_ptr->door_to_open = (CDemonActor *)0x0;
  this_ptr->object_to_pick_up = (CDemonActor *)0x0;
  this_ptr->pushed_object = (CDemonActor *)0x0;
  this_ptr->lever_to_pull = (CDemonActor *)0x0;
  this_ptr->ladder_to_climb = (CDemonActor *)0x0;
  this_ptr->nearby_interactive_actor = (CDemonActor *)0x0;
  this_ptr->target_actor = (CDemonActor *)0x0;
  (this_ptr->base).grabbed_by = (CDemonActor *)0x0;
  core_inv_cpp_CInventory_removeMatchingKeys_FUN_005014a0(&this_ptr->inventory,0xffffffff);
  (*(((this_ptr->base).base.vtable._uh)->_uh).drawGun)(this_ptr,0);
  pCVar1 = this_ptr;
  do {
    pfVar2 = &(pCVar1->base).base.orient_matrix.m[0].z;
    (pCVar1->base).carry_hands[0].carry_actor = (CDemonActor *)0x0;
    pCVar1 = (CHero *)pfVar2;
  } while (pfVar2 != (float *)((this_ptr->base).base.create_event + 0x10));
  return;
}
