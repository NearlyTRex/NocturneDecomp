// Name: core_hero.cpp_FUN_004cff50
// Address: 004cff50
// Address Range: [[004cff50, 004cff84]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004cff50(CHero *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_hero_cpp_FUN_004cff50(CHero *this_ptr,int hand_index)

{
  if (this_ptr->object_to_pick_up == (CDemonActor *)0x0) {
    return;
  }
  core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428b10
            (&this_ptr->base,hand_index,(int)this_ptr->object_to_pick_up,0x3dcccccd,0);
  this_ptr->object_to_pick_up = (CDemonActor *)0x0;
  return;
}
