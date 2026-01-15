// Name: core_baron.cpp_CBaronWeapon_process_FUN_00413dc0
// Address: 00413dc0
// Address Range: [[00413dc0, 00413dde]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaronWeapon_process_FUN_00413dc0(CBaronWeapon * this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_process_FUN_00413dc0(CBaronWeapon *this_ptr)

{
  core_baron_cpp_FUN_00413f20();
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base_weapon);
  return;
}
