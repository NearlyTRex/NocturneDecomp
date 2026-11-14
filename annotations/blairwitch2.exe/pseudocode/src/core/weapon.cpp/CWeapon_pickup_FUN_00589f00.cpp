// Name: core_weapon.cpp_CWeapon_pickup_FUN_00589f00
// Address: 00589f00
// Address Range: [[00589f00, 00589f0e]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_pickup_FUN_00589f00(CWeapon *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_pickup_FUN_00589f00(CWeapon *this_ptr,CDemonActor *carrier)

{
  this_ptr->carried_by_actor = carrier;
  return;
}
