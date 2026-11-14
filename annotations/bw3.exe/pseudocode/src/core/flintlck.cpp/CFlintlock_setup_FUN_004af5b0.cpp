// Name: core_flintlck.cpp_CFlintlock_setup_FUN_004af5b0
// Address: 004af5b0
// Address Range: [[004af5b0, 004af625]]
// Convention: __cdecl
// Signature: void __cdecl core_flintlck_cpp_CFlintlock_setup_FUN_004af5b0(CFlintlock *this_ptr)

#include "nocturne.h"

void __cdecl core_flintlck_cpp_CFlintlock_setup_FUN_004af5b0(CFlintlock *this_ptr)

{
  core_weapon_cpp_CWeapon_setup_FUN_0057af40(&this_ptr->base);
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_noammo.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230((char *)0x5c1d67);
  sound_sndmain_cpp_preloadSfx_FUN_00556230((char *)0x5c1d74);
  sound_sndmain_cpp_preloadSfx_FUN_00556230((char *)0x5c1d81);
  sound_sndmain_cpp_preloadSfx_FUN_00556230((char *)0x5c1d8e);
  sound_sndmain_cpp_preloadSfx_FUN_00556230((char *)0x5c1d9b);
  sound_sndmain_cpp_preloadSfx_FUN_00556230("RIC-DT.WAV");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_flintlock.wav");
  return;
}
