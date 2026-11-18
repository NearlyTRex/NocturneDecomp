// Name: core_exorcism.cpp_CExorcism_setWeaponState_FUN_0048b640
// Address: 0048b640
// Address Range: [[0048b640, 0048b68d]]
// Convention: __cdecl
// Signature: void __cdecl core_exorcism_cpp_CExorcism_setWeaponState_FUN_0048b640(CExorcism *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_exorcism_cpp_CExorcism_setWeaponState_FUN_0048b640(CExorcism *this_ptr,int weapon_state)

{
  if (((this_ptr->base).weapon_state == WEAPON_STATE_IN_HAND) && (weapon_state == 1)) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(g_UINT_01c6e35c);
    this_ptr->is_firing = 0;
    g_UINT_01c6e35c = 0;
    this_ptr->was_firing_prev_frame = 0;
  }
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0(&this_ptr->base,weapon_state);
  return;
}
