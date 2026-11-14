// Name: core_rifle.cpp_CRifle_process_FUN_00527d50
// Address: 00527d50
// Address Range: [[00527d50, 00527d6b]]
// Convention: __cdecl
// Signature: void __cdecl core_rifle_cpp_CRifle_process_FUN_00527d50(CRifle *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_rifle_cpp_CRifle_process_FUN_00527d50(CRifle *this_ptr,float delta_time)

{
  this_ptr->processed = 1;
  core_weapon_cpp_CWeapon_process_FUN_0057b160(&this_ptr->base,delta_time);
  return;
}
