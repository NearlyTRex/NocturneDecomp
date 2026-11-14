// Name: core_weapon.cpp_CWeapon_pickup_FUN_005ada50
// Address: 005ada50
// Address Range: [[005ada50, 005ada5e]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_pickup_FUN_005ada50(CWeapon *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_pickup_FUN_005ada50(CWeapon *this_ptr,CDemonActor *carrier)

{
  this_ptr->carried_by_actor = carrier;
  return;
}
