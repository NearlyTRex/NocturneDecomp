// Name: core_weapon.cpp_CWeapon_fire_FUN_0058a290
// Address: 0058a290
// Address Range: [[0058a290, 0058a2b3]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_fire_FUN_0058a290(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_fire_FUN_0058a290(CWeapon *this_ptr)

{
  if (0 < *(int *)&this_ptr->field_0x6c4) {
    *(int *)&this_ptr->field_0x6c4 = *(int *)&this_ptr->field_0x6c4 + -1;
    return 1;
  }
  return 0;
}
