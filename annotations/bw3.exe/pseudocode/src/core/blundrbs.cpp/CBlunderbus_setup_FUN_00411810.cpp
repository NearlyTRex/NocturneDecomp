// Name: core_blundrbs.cpp_CBlunderbus_setup_FUN_00411810
// Address: 00411810
// Address Range: [[00411810, 00411885]]
// Convention: __cdecl
// Signature: void __cdecl core_blundrbs_cpp_CBlunderbus_setup_FUN_00411810(CBlunderbus *this_ptr)

#include "nocturne.h"

void __cdecl core_blundrbs_cpp_CBlunderbus_setup_FUN_00411810(CBlunderbus *this_ptr)

{
  core_weapon_cpp_CWeapon_setup_FUN_0057af40(&this_ptr->base);
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_noammo.wav");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("RIC-CT0A.WAV");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("RIC-CT0B.WAV");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("RIC-CT0C.WAV");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("RIC-WD0B.WAV");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("RIC-WD0C.WAV");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("RIC-DT.WAV");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_blunderbus.wav");
  return;
}
