// Name: core_tommygun.cpp_CTommyGun_setWeaponState_FUN_005de5a0
// Address: 005de5a0
// Address Range: [[005de5a0, 005de5c7]]
// Convention: __cdecl
// Signature: void __cdecl core_tommygun_cpp_CTommyGun_setWeaponState_FUN_005de5a0(CTommyGun *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_tommygun_cpp_CTommyGun_setWeaponState_FUN_005de5a0(CTommyGun *this_ptr,int weapon_state)

{
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handles[0]);
  core_weapon_cpp_CWeapon_setWeaponState_FUN_005ee640(&this_ptr->base,weapon_state);
  return;
}
