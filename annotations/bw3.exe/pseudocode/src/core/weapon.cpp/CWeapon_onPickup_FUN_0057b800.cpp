// Name: core_weapon.cpp_CWeapon_onPickup_FUN_0057b800
// Address: 0057b800
// Address Range: [[0057b800, 0057b812]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_onPickup_FUN_0057b800(CWeapon *this_ptr,CDemonActor *owner)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_onPickup_FUN_0057b800(CWeapon *this_ptr,CDemonActor *owner)

{
  core_actor_cpp_CDemonActor_onPickup_FUN_00409d50(&this_ptr->base,owner);
  return;
}
