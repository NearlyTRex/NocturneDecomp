// Name: core_weapon.cpp_CWeapon_FUN_005ee710
// Address: 005ee710
// Address Range: [[005ee710, 005ee726]]
// Convention: __cdecl
// Signature: int core_weapon.cpp_CWeapon_FUN_005ee710(CWeapon * this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_FUN_005ee710(CWeapon *this_ptr)

{
  return (uint)((*(uint *)(this_ptr->field7_0x2f4 + 0xc) & 0x7fffffff) == 0);
}
