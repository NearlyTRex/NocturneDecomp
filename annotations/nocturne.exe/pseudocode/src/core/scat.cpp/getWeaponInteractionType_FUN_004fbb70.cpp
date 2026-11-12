// Name: core_scat.cpp_getWeaponInteractionType_FUN_004fbb70
// Address: 004fbb70
// Address Range: [[004fbb70, 004fbb89]]
// Convention: __cdecl
// Signature: int __cdecl core_scat_cpp_getWeaponInteractionType_FUN_004fbb70(CWeapon *weapon)

#include "nocturne.h"

int __cdecl core_scat_cpp_getWeaponInteractionType_FUN_004fbb70(CWeapon *weapon)

{
  if ((weapon != (CWeapon *)0x0) && (weapon->weapon_type != WEAPON_TYPE_BARON)) {
    return 1;
  }
  return 0;
}
