// Name: core_scat.cpp_CScat_isWeaponReady_FUN_0051fcb0
// Address: 0051fcb0
// Address Range: [[0051e914, 0051e919] [0051fcb0, 0051fcd6]]
// Convention: __cdecl
// Signature: int __cdecl core_scat_cpp_CScat_isWeaponReady_FUN_0051fcb0(CScat *this_ptr)

#include "nocturne.h"

int __cdecl core_scat_cpp_CScat_isWeaponReady_FUN_0051fcb0(CScat *this_ptr)

{
  if (((this_ptr->guns_drawn != 0) && (this_ptr->weapon_actor != (CWeapon *)0x0)) &&
     (this_ptr->weapon_actor->weapon_type == (WEAPON_TYPE_BARON|WEAPON_TYPE_SHOTGUN))) {
    return 1;
  }
  return 0;
}
