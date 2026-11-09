// Name: core_weapon.cpp_CWeapon_getCarrier_FUN_005adb10
// Address: 005adb10
// Address Range: [[005adb10, 005adb1a]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_weapon_cpp_CWeapon_getCarrier_FUN_005adb10(CWeapon *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_weapon_cpp_CWeapon_getCarrier_FUN_005adb10(CWeapon *this_ptr)

{
  return *(CDemonActor **)&this_ptr->field_0x304;
}
