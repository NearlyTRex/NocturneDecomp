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
    case 0:
    case 5:
      return 2;
    case 1:
      return 4;
    case 2:
      return 5;
    case 4:
      return 7;
    case 7:
      return 8;
    }
  }
  return 0;
}
