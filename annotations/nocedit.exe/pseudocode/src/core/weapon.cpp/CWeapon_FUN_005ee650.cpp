// Name: core_weapon.cpp_CWeapon_FUN_005ee650
// Address: 005ee650
// Address Range: [[005ee650, 005ee662]]
// Convention: __cdecl
// Signature: void core_weapon.cpp_CWeapon_FUN_005ee650(CWeapon * this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_FUN_005ee650(CWeapon *this_ptr)

{
  CDemonActor *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_onPickup_FUN_0040a010(&this_ptr->base_actor,in_stack_00000008);
  return;
}
