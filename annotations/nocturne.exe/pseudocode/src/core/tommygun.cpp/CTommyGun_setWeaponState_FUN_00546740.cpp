// Name: core_tommygun.cpp_CTommyGun_setWeaponState_FUN_00546740
// Address: 00546740
// Address Range: [[00546740, 00546767]]
// Convention: __cdecl
// Signature: void __cdecl core_tommygun_cpp_CTommyGun_setWeaponState_FUN_00546740(CTommyGun *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_tommygun_cpp_CTommyGun_setWeaponState_FUN_00546740(CTommyGun *this_ptr,int weapon_state)

{
  sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handles[0]);
  core_weapon_cpp_CWeapon_setWeaponState_FUN_00554560(&this_ptr->base,weapon_state);
  return;
}
