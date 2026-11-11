// Name: core_burncrss.cpp_CBurncross_setWeaponState_FUN_00425300
// Address: 00425300
// Address Range: [[00425300, 00425355]]
// Convention: __cdecl
// Signature: void __cdecl core_burncrss_cpp_CBurncross_setWeaponState_FUN_00425300(CBurncross *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_burncrss_cpp_CBurncross_setWeaponState_FUN_00425300(CBurncross *this_ptr,int weapon_state)

{
  if (((this_ptr->base).weapon_state == WEAPON_STATE_IN_HAND) && (weapon_state == 1)) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
    this_ptr->sfx_handle = 0;
    this_ptr->firing = 0;
    this_ptr->was_firing = 0;
  }
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0(&this_ptr->base,weapon_state);
  return;
}
