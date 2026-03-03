// Name: core_hero.cpp_CHero_executeObjectPickup_FUN_004f3890
// Address: 004f3890
// Address Range: [[004f3890, 004f38c2]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_executeObjectPickup_FUN_004f3890(CHero *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_executeObjectPickup_FUN_004f3890(CHero *this_ptr,int hand_index)

{
  if (this_ptr->object_to_pick_up == (CDemonActor *)0x0) {
    return;
  }
  core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
            (&this_ptr->base,hand_index,this_ptr->object_to_pick_up,0.1);
  this_ptr->object_to_pick_up = (CDemonActor *)0x0;
  return;
}
