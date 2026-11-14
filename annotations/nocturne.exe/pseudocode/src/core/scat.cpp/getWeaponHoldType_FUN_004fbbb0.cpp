// Name: core_scat.cpp_getWeaponHoldType_FUN_004fbbb0
// Address: 004fbbb0
// Address Range: [[004fbbb0, 004fbbcf]]
// Convention: __cdecl
// Signature: int __cdecl core_scat_cpp_getWeaponHoldType_FUN_004fbbb0(CWeapon *weapon)

#include "nocturne.h"

int __cdecl core_scat_cpp_getWeaponHoldType_FUN_004fbbb0(CWeapon *weapon)

{
  int iVar1;
  
  iVar1 = 0;
  if (weapon != (CWeapon *)0x0) {
    switch(weapon->weapon_type) {
    default:
      iVar1 = 2;
      break;
    case WEAPON_TYPE_BARON:
      return 0;
    }
  }
  return iVar1;
}
