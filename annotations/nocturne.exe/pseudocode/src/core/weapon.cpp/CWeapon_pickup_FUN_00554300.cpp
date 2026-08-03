// Name: core_weapon.cpp_CWeapon_pickup_FUN_00554300
// Address: 00554300
// Address Range: [[00554300, 0055430e]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_pickup_FUN_00554300(CWeapon *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_pickup_FUN_00554300(CWeapon *this_ptr,CDemonActor *carrier)

{
  this_ptr->carried_by_actor = carrier;
  return;
}
