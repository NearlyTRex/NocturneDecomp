// Name: core_tommygun.cpp_CTommyGun_setWeaponState_FUN_0056bf80
// Address: 0056bf80
// Address Range: [[0056bf80, 0056bfa7]]
// Convention: __cdecl
// Signature: void __cdecl core_tommygun_cpp_CTommyGun_setWeaponState_FUN_0056bf80(CTommyGun *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_tommygun_cpp_CTommyGun_setWeaponState_FUN_0056bf80(CTommyGun *this_ptr,int weapon_state)

{
  sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handles[0]);
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0057b7f0(&this_ptr->base,weapon_state);
  return;
}
