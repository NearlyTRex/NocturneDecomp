// Name: core_weapon.cpp_CWeapon_getCarrier_FUN_0057b5b0
// Address: 0057b5b0
// Address Range: [[0057b5b0, 0057b5ba]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_weapon_cpp_CWeapon_getCarrier_FUN_0057b5b0(CWeapon *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_weapon_cpp_CWeapon_getCarrier_FUN_0057b5b0(CWeapon *this_ptr)

{
  return this_ptr->carried_by_actor;
}
