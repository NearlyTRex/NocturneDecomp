// Name: core_heal.cpp_CHeal_process_FUN_004d1c50
// Address: 004d1c50
// Address Range: [[004d1c50, 004d1c79]]
// Convention: __cdecl
// Signature: void __cdecl core_heal_cpp_CHeal_process_FUN_004d1c50(CHeal *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_heal_cpp_CHeal_process_FUN_004d1c50(CHeal *this_ptr,float delta_time)

{
  int iVar1;
  
  core_weapon_cpp_CWeapon_process_FUN_0057b160(&this_ptr->base,delta_time);
  iVar1 = this_ptr->is_firing;
  this_ptr->is_firing = 0;
  this_ptr->was_firing_prev_frame = iVar1;
  return;
}
