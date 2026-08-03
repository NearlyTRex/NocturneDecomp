// Name: core_weapon.cpp_CWeapon_onPickup_FUN_00554570
// Address: 00554570
// Address Range: [[00554570, 00554582]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_onPickup_FUN_00554570(CWeapon *this_ptr,CDemonActor *owner)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_onPickup_FUN_00554570(CWeapon *this_ptr,CDemonActor *owner)

{
  core_actor_cpp_CDemonActor_onPickup_FUN_0040b1a0(&this_ptr->base,owner);
  return;
}
