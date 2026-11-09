// Name: core_weapon.cpp_CWeapon_pickup_FUN_0057b4f0
// Address: 0057b4f0
// Address Range: [[0057b4f0, 0057b4fe]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_pickup_FUN_0057b4f0(CWeapon *this_ptr,CDemonActor *carrier)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_pickup_FUN_0057b4f0(CWeapon *this_ptr,CDemonActor *carrier)

{
  *(CDemonActor **)&this_ptr->field_0x304 = carrier;
  return;
}
