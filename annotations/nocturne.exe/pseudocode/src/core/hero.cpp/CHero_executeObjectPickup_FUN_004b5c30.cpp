// Name: core_hero.cpp_CHero_executeObjectPickup_FUN_004b5c30
// Address: 004b5c30
// Address Range: [[004b5c30, 004b5c62]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_executeObjectPickup_FUN_004b5c30(CHero *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_executeObjectPickup_FUN_004b5c30(CHero *this_ptr,int hand_index)

{
  if (this_ptr->object_to_pick_up == (CDemonActor *)0x0) {
    return;
  }
  core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40
            (&this_ptr->base,hand_index,this_ptr->object_to_pick_up,0.1);
  this_ptr->object_to_pick_up = (CDemonActor *)0x0;
  return;
}
