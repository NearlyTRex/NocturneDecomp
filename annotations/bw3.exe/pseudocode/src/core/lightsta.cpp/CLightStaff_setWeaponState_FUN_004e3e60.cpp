// Name: core_lightsta.cpp_CLightStaff_setWeaponState_FUN_004e3e60
// Address: 004e3e60
// Address Range: [[004e3e60, 004e3eab]]
// Convention: __cdecl
// Signature: void __cdecl core_lightsta_cpp_CLightStaff_setWeaponState_FUN_004e3e60(CLightStaff *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_lightsta_cpp_CLightStaff_setWeaponState_FUN_004e3e60(CLightStaff *this_ptr,int weapon_state)

{
  if ((*(int *)&this_ptr->field_0x2d4 == 2) && (weapon_state == 1)) {
    *(uint *)&this_ptr->field_0x594 = 0;
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0x5c4);
    *(uint *)&this_ptr->field_0x5c4 = 0;
  }
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0((CWeapon *)this_ptr,weapon_state);
  return;
}
