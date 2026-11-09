// Name: core_baron.cpp_CBaronWeapon_process_FUN_004104e0
// Address: 004104e0
// Address Range: [[004104e0, 004104fe]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaronWeapon_process_FUN_004104e0(CBaronWeapon *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_process_FUN_004104e0(CBaronWeapon *this_ptr,float delta_time)

{
  core_baron_cpp_FUN_00410640(this_ptr);
  core_weapon_cpp_CWeapon_process_FUN_005ad770((CWeapon *)this_ptr,delta_time);
  return;
}
