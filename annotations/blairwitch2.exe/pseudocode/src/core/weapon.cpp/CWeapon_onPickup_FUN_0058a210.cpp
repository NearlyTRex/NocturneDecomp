// Name: core_weapon.cpp_CWeapon_onPickup_FUN_0058a210
// Address: 0058a210
// Address Range: [[0058a210, 0058a222]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_onPickup_FUN_0058a210(CWeapon *this_ptr,CDemonActor *owner)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_onPickup_FUN_0058a210(CWeapon *this_ptr,CDemonActor *owner)

{
  core_actor_cpp_CDemonActor_onPickup_FUN_00409ec0(&this_ptr->base,owner);
  return;
}
