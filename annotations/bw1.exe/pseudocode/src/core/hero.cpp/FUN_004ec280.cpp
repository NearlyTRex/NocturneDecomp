// Name: core_hero.cpp_FUN_004ec280
// Address: 004ec280
// Address Range: [[004ec280, 004ec2b4]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004ec280(CHero *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_hero_cpp_FUN_004ec280(CHero *this_ptr,int hand_index)

{
  if (this_ptr->object_to_pick_up == (CDemonActor *)0x0) {
    return;
  }
  core_charactr_cpp_FUN_004325b0(this_ptr,hand_index,this_ptr->object_to_pick_up,0x3dcccccd,0);
  this_ptr->object_to_pick_up = (CDemonActor *)0x0;
  return;
}
