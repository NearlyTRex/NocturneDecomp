// Name: core_tommygun.cpp_CTommyGun_setWeaponState_FUN_00576370
// Address: 00576370
// Address Range: [[00576370, 00576397]]
// Convention: __cdecl
// Signature: void __cdecl core_tommygun_cpp_CTommyGun_setWeaponState_FUN_00576370(CTommyGun *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_tommygun_cpp_CTommyGun_setWeaponState_FUN_00576370(CTommyGun *this_ptr,int weapon_state)

{
  sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handles[0]);
  core_weapon_cpp_CWeapon_setWeaponState_FUN_0058a200(&this_ptr->base,weapon_state);
  return;
}
