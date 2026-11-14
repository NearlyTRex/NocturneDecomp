// Name: core_melee.cpp_CMelee_process_FUN_004eacf0
// Address: 004eacf0
// Address Range: [[004eacf0, 004ead01]]
// Convention: __cdecl
// Signature: void __cdecl core_melee_cpp_CMelee_process_FUN_004eacf0(CMelee *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_melee_cpp_CMelee_process_FUN_004eacf0(CMelee *this_ptr,float delta_time)

{
  core_weapon_cpp_CWeapon_process_FUN_00589c80(&this_ptr->base,delta_time);
  return;
}
