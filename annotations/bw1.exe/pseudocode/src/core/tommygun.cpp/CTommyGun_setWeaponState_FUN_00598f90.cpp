// Name: core_tommygun.cpp_CTommyGun_setWeaponState_FUN_00598f90
// Address: 00598f90
// Address Range: [[00598f90, 00598fb7]]
// Convention: __cdecl
// Signature: void __cdecl core_tommygun_cpp_CTommyGun_setWeaponState_FUN_00598f90(CTommyGun *this_ptr,int weapon_state)

#include "nocturne.h"

void __cdecl core_tommygun_cpp_CTommyGun_setWeaponState_FUN_00598f90(CTommyGun *this_ptr,int weapon_state)

{
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handles[0]);
  core_weapon_cpp_CWeapon_setWeaponState_FUN_005add50(&this_ptr->base,weapon_state);
  return;
}
