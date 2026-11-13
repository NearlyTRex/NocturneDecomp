// Name: core_disease.cpp_CDisease_setup_FUN_0045c0d0
// Address: 0045c0d0
// Address Range: [[0045c0d0, 0045c108]]
// Convention: __cdecl
// Signature: void __cdecl core_disease_cpp_CDisease_setup_FUN_0045c0d0(CDisease *this_ptr)

#include "nocturne.h"

void __cdecl core_disease_cpp_CDisease_setup_FUN_0045c0d0(CDisease *this_ptr)

{
  core_weapon_cpp_CWeapon_setup_FUN_0057af40(&this_ptr->base);
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_nomana.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_disease_throw.wav");
  core_fire_cpp_CFireEffect_preloadTossAssets_FUN_004a4340(0x01C73654,2);
  return;
}
