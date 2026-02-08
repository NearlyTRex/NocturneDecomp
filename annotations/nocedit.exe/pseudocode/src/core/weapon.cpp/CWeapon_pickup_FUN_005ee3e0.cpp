// Name: core_weapon.cpp_CWeapon_pickup_FUN_005ee3e0
// Address: 005ee3e0
// Address Range: [[005ee3e0, 005ee3ee]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_pickup_FUN_005ee3e0(CWeapon *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_pickup_FUN_005ee3e0(CWeapon *this_ptr,CDemonActor *carrier)

{
  this_ptr->carried_by_actor = carrier;
  return;
}
