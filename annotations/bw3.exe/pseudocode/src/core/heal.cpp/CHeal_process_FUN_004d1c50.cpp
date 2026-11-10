// Name: core_heal.cpp_CHeal_process_FUN_004d1c50
// Address: 004d1c50
// Address Range: [[004d1c50, 004d1c79]]
// Convention: __cdecl
// Signature: void __cdecl core_heal_cpp_CHeal_process_FUN_004d1c50(CHeal *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_heal_cpp_CHeal_process_FUN_004d1c50(CHeal *this_ptr,float delta_time)

{
  uint uVar1;
  
  core_weapon_cpp_CWeapon_process_FUN_0057b160((CWeapon *)this_ptr,delta_time);
  uVar1 = *(uint *)&this_ptr->field_0x594;
  *(uint *)&this_ptr->field_0x594 = 0;
  *(uint *)&this_ptr->field_0x598 = uVar1;
  return;
}
