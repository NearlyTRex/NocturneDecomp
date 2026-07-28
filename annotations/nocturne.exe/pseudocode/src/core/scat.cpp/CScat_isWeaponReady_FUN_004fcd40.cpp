// Name: core_scat.cpp_CScat_isWeaponReady_FUN_004fcd40
// Address: 004fcd40
// Address Range: [[004fcd40, 004fcd66]]
// Convention: __cdecl
// Signature: int __cdecl core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(CScat *this_ptr)

#include "nocturne.h"

int __cdecl core_scat_cpp_CScat_isWeaponReady_FUN_004fcd40(CScat *this_ptr)

{
  if (((this_ptr->guns_drawn != 0) && (this_ptr->weapon_actor != (CWeapon *)0x0)) &&
     (this_ptr->weapon_actor->weapon_type == 8)) {
    return 1;
  }
  return 0;
}
