// Name: core_firestff.cpp_CFirestaff_setWeaponState_FUN_004a5770
// Address: 004a5770
// Address Range: [[004a5770, 004a57b1]]
// Convention: __cdecl
// Signature: void __cdecl core_firestff_cpp_CFirestaff_setWeaponState_FUN_004a5770(CFirestaff *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_firestff_cpp_CFirestaff_setWeaponState_FUN_004a5770(CFirestaff *this_ptr,int weapon_state)

{
  if (((this_ptr->base).weapon_state == WEAPON_STATE_IN_HAND) && (weapon_state == 1)) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
    this_ptr->sfx_handle = 0;
  }
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0(&this_ptr->base,weapon_state);
  return;
}
