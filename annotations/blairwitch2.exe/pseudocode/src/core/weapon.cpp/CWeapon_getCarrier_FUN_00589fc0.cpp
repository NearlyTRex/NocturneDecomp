// Name: core_weapon.cpp_CWeapon_getCarrier_FUN_00589fc0
// Address: 00589fc0
// Address Range: [[00589fc0, 00589fca]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_weapon_cpp_CWeapon_getCarrier_FUN_00589fc0(CWeapon *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_weapon_cpp_CWeapon_getCarrier_FUN_00589fc0(CWeapon *this_ptr)

{
  return this_ptr->carried_by_actor;
}
