// Name: core_exorcism.cpp_CExorcism_setup_FUN_0048b690
// Address: 0048b690
// Address Range: [[0048b690, 0048b6e5]]
// Convention: __cdecl
// Signature: void __cdecl core_exorcism_cpp_CExorcism_setup_FUN_0048b690(CExorcism *this_ptr)

#include "nocturne.h"

void __cdecl core_exorcism_cpp_CExorcism_setup_FUN_0048b690(CExorcism *this_ptr)

{
  core_weapon_cpp_CWeapon_setup_FUN_0057af40(&this_ptr->base);
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_nomana.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_exorcism.wav");
  core_fire_cpp_CFireEffect_preloadLightningBoltStyle_FUN_004a4130(0x01C73654,4);
  core_fire_cpp_CFireEffect_preloadGunFlameStyle_FUN_004a41d0(0x01C73654,2);
  core_charactr_cpp_FUN_0042f280(2);
  return;
}
