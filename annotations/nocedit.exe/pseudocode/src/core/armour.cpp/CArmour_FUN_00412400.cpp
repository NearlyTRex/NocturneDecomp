// Name: core_armour.cpp_CArmour_FUN_00412400
// Address: 00412400
// Address Range: [[00412400, 00412438]]
// Convention: __cdecl
// Signature: void core_armour.cpp_CArmour_FUN_00412400(CArmour * this_ptr)

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_FUN_00412400(CArmour *this_ptr)

{
  core_charactr_cpp_CCharacter_FUN_0042b9e0((CCharacter *)this_ptr);
  (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playSound)
            ((CDemonActor *)this_ptr,"armour.wav");
  core_enemy_cpp_FUN_004a9f10();
  return;
}
