// Name: core_firestff.cpp_CFirestaff_setup_FUN_004a5870
// Address: 004a5870
// Address Range: [[004a5870, 004a58bf]]
// Convention: __cdecl
// Signature: void __cdecl core_firestff_cpp_CFirestaff_setup_FUN_004a5870(CFirestaff *this_ptr)

#include "nocturne.h"

void __cdecl core_firestff_cpp_CFirestaff_setup_FUN_004a5870(CFirestaff *this_ptr)

{
  core_weapon_cpp_CWeapon_setup_FUN_0057af40(&this_ptr->base);
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_nomana.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_firestaff.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_firestaff_loop.wav");
  core_fire_cpp_CFireEffect_preloadRingAssets_FUN_004a42c0(g_CFireEffect_PTR_005fc5a0,0);
  core_flame_cpp_preloadFlameTextures_FUN_004a5ad0(0);
  return;
}
