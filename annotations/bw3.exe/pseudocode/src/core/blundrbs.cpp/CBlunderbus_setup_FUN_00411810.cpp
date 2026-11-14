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
  sound_sndmain_cpp_preloadSfx_FUN_00556230((char *)0x5b6560);
  sound_sndmain_cpp_preloadSfx_FUN_00556230((char *)0x5b656d);
  sound_sndmain_cpp_preloadSfx_FUN_00556230((char *)0x5b657a);
  sound_sndmain_cpp_preloadSfx_FUN_00556230((char *)0x5b6587);
  sound_sndmain_cpp_preloadSfx_FUN_00556230((char *)0x5b6594);
  sound_sndmain_cpp_preloadSfx_FUN_00556230("RIC-DT.WAV");
  sound_sndmain_cpp_preloadSfx_FUN_00556230("wp_blunderbus.wav");
  return;
}
