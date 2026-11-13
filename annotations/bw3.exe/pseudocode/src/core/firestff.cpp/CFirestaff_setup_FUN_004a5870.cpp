// Name: core_firestff.cpp_CFirestaff_setup_FUN_004a5870
// Address: 004a5870
// Address Range: [[004a5870, 004a58bf]]
// Convention: __cdecl
// Signature: void __cdecl core_firestff_cpp_CFirestaff_setup_FUN_004a5870(CFirestaff *this_ptr)

#include "nocturne.h"

void __cdecl core_firestff_cpp_CFirestaff_setup_FUN_004a5870(CFirestaff *this_ptr)

{
  uint uStack00000008;
  
  core_weapon_cpp_CWeapon_setup_FUN_0057af40(&this_ptr->base);
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_nomana.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_firestaff.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_firestaff_loop.wav");
  core_fire_cpp_CFireEffect_preloadRingAssets_FUN_004a42c0(0x01C73654,0);
  uStack00000008 = 0;
  core_flame_cpp_FUN_004a5ad0();
  return;
}
