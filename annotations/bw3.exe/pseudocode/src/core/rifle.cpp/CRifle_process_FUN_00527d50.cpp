// Name: core_rifle.cpp_CRifle_process_FUN_00527d50
// Address: 00527d50
// Address Range: [[00527d50, 00527d6b]]
// Convention: __cdecl
// Signature: void __cdecl core_rifle_cpp_CRifle_process_FUN_00527d50(CRifle *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_rifle_cpp_CRifle_process_FUN_00527d50(CRifle *this_ptr,float delta_time)

{
  *(uint *)&this_ptr->field_0x598 = 1;
  core_weapon_cpp_CWeapon_process_FUN_0057b160((CWeapon *)this_ptr,delta_time);
  return;
}
