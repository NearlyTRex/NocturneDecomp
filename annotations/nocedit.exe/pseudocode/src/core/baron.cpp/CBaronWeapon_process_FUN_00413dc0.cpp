// Name: core_baron.cpp_CBaronWeapon_process_FUN_00413dc0
// Address: 00413dc0
// Address Range: [[00413dc0, 00413dde]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_process_FUN_00413dc0(CBaronWeapon *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl
core_baron_cpp_CBaronWeapon_process_FUN_00413dc0(CBaronWeapon *this_ptr,float delta_time)

{
  core_baron_cpp_CBaronWeapon_FUN_00413f20(this_ptr);
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  return;
}
