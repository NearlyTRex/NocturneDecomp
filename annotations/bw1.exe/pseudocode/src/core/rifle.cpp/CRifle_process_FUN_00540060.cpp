// Name: core_rifle.cpp_CRifle_process_FUN_00540060
// Address: 00540060
// Address Range: [[00540060, 0054007b]]
// Convention: __cdecl
// Signature: void __cdecl core_rifle_cpp_CRifle_process_FUN_00540060(CRifle *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_rifle_cpp_CRifle_process_FUN_00540060(CRifle *this_ptr,float delta_time)

{
  this_ptr->processed = 1;
  core_weapon_cpp_CWeapon_process_FUN_005ad770(&this_ptr->base,delta_time);
  return;
}
