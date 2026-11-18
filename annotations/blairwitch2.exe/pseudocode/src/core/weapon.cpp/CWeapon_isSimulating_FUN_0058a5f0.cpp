// Name: core_weapon.cpp_CWeapon_isSimulating_FUN_0058a5f0
// Address: 0058a5f0
// Address Range: [[0058a5f0, 0058a60c]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_isSimulating_FUN_0058a5f0(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_isSimulating_FUN_0058a5f0(CWeapon *this_ptr)

{
  if (0.0 < this_ptr->sim_timer) {
    return 1;
  }
  return 0;
}
