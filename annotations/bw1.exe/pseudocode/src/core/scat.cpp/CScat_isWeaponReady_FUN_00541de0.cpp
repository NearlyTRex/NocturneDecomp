// Name: core_scat.cpp_CScat_isWeaponReady_FUN_00541de0
// Address: 00541de0
// Address Range: [[00540a54, 00540a59] [00541de0, 00541e06]]
// Convention: __cdecl
// Signature: int __cdecl core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(CScat *this_ptr)

#include "nocturne.h"

int __cdecl core_scat_cpp_CScat_isWeaponReady_FUN_00541de0(CScat *this_ptr)

{
  if (((this_ptr->guns_drawn != 0) && (this_ptr->weapon_actor != (CWeapon *)0x0)) &&
     (this_ptr->weapon_actor->weapon_type == WEAPON_TYPE_BARON)) {
    return 1;
  }
  return 0;
}
