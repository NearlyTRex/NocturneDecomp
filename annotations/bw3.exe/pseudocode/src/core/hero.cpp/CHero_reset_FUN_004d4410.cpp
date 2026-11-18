// Name: core_hero.cpp_CHero_reset_FUN_004d4410
// Address: 004d4410
// Address Range: [[004d4410, 004d44de]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_reset_FUN_004d4410(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_reset_FUN_004d4410(CHero *this_ptr)

{
  CHero *pCVar1;
  char *pcVar2;
  
  this_ptr->door_to_open = (CDoor *)0x0;
  this_ptr->object_to_pick_up = (CDemonActor *)0x0;
  this_ptr->pushed_object = (CBoxActor *)0x0;
  this_ptr->lever_to_pull = (CLever *)0x0;
  this_ptr->ladder_to_climb = (CLadder *)0x0;
  this_ptr->nearby_interactive_actor = (CDemonActor *)0x0;
  this_ptr->target_actor = (CDemonActor *)0x0;
  (this_ptr->base).grabbed_by = (CDemonActor *)0x0;
  core_inv_cpp_CInventory_removeMatchingKeys_FUN_004de6e0(&this_ptr->inventory,0xffffffff);
  (*(((this_ptr->base).base.vtable._ue)->_ue).updateVictim)((CEnemy *)this_ptr,0.0);
  pCVar1 = this_ptr;
  do {
    pcVar2 = (pCVar1->base).base.create_event;
    (pCVar1->base).carry_hands[0].carry_actor = (CDemonActor *)0x0;
    pCVar1 = (CHero *)pcVar2;
  } while ((float *)pcVar2 != &(this_ptr->base).base.platform_orientation_delta.y);
  this_ptr->pushed_object = (CBoxActor *)0x0;
  (this_ptr->base).walk_to_target = (CDemonActor *)0x0;
  (this_ptr->base).door_target = (CDoor *)0x0;
  (this_ptr->base).look_at_candidate = (CCharacter *)0x0;
  (this_ptr->base).look_at_target = (CCharacter *)0x0;
  this_ptr->aim_target_actor = (CDemonActor *)0x0;
  return;
}
