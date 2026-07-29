// Name: core_baron.cpp_CBaronWeapon_process_FUN_004113d0
// Address: 004113d0
// Address Range: [[004113d0, 004113ee]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_process_FUN_004113d0(CBaronWeapon *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_process_FUN_004113d0(CBaronWeapon *this_ptr,float delta_time)

{
  core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(this_ptr);
  core_weapon_cpp_CWeapon_process_FUN_00554030(&this_ptr->base,delta_time);
  return;
}
