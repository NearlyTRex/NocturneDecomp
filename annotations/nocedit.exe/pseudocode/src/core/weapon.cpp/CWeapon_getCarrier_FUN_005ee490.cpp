// Name: core_weapon.cpp_CWeapon_getCarrier_FUN_005ee490
// Address: 005ee490
// Address Range: [[005ee490, 005ee49a]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_weapon_cpp_CWeapon_getCarrier_FUN_005ee490(CWeapon *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_weapon_cpp_CWeapon_getCarrier_FUN_005ee490(CWeapon *this_ptr)

{
  return this_ptr->carried_by_actor;
}
