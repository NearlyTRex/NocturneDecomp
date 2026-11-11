// Name: core_hero.cpp_FUN_004d4160
// Address: 004d4160
// Address Range: [[004d4160, 004d4194]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004d4160(CHero *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_hero_cpp_FUN_004d4160(CHero *this_ptr,int hand_index)

{
  if (this_ptr->object_to_pick_up == (CDemonActor *)0x0) {
    return;
  }
  core_charactr_cpp_FUN_004319d0(this_ptr,hand_index,this_ptr->object_to_pick_up,0x3dcccccd,0);
  this_ptr->object_to_pick_up = (CDemonActor *)0x0;
  return;
}
