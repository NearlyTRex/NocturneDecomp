// Name: core_baron.cpp_CBaronWeapon_process_FUN_00410960
// Address: 00410960
// Address Range: [[00410960, 0041097e]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_process_FUN_00410960(CBaronWeapon *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_process_FUN_00410960(CBaronWeapon *this_ptr,float delta_time)

{
  core_baron_cpp_CBaronWeapon_findOrCreateBaron_FUN_00410ac0(this_ptr);
  core_weapon_cpp_CWeapon_process_FUN_00589c80(&this_ptr->base,delta_time);
  return;
}
