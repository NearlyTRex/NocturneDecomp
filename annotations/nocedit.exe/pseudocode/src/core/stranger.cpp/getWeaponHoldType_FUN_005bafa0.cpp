// Name: core_stranger.cpp_getWeaponHoldType_FUN_005bafa0
// Address: 005bafa0
// Address Range: [[005bafa0, 005bafd7]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_getWeaponHoldType_FUN_005bafa0(CWeapon *weapon)

#include "nocturne.h"

int __cdecl core_stranger_cpp_getWeaponHoldType_FUN_005bafa0(CWeapon *weapon)

{
  if (weapon != (CWeapon *)0x0) {
    switch(weapon->weapon_type) {
    case WEAPON_TYPE_GUN:
    case WEAPON_TYPE_FLASHLIGHT:
      return 2;
    case WEAPON_TYPE_SHOTGUN:
      return 4;
    case WEAPON_TYPE_LIGHT_GUN:
      return 5;
    case WEAPON_TYPE_TOMMY_GUN:
      return 7;
    case WEAPON_TYPE_MELEE:
      return 8;
    }
  }
  return 0;
}
