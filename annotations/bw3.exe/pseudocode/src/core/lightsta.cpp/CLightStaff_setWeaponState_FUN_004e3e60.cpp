// Name: core_lightsta.cpp_CLightStaff_setWeaponState_FUN_004e3e60
// Address: 004e3e60
// Address Range: [[004e3e60, 004e3eab]]
// Convention: __cdecl
// Signature: void __cdecl core_lightsta_cpp_CLightStaff_setWeaponState_FUN_004e3e60(CLightStaff *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_lightsta_cpp_CLightStaff_setWeaponState_FUN_004e3e60(CLightStaff *this_ptr,int weapon_state)

{
  if (((this_ptr->base).weapon_state == WEAPON_STATE_IN_HAND) && (weapon_state == 1)) {
    this_ptr->chain_active = 0;
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
    this_ptr->sfx_handle = 0;
  }
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0(&this_ptr->base,weapon_state);
  return;
}
