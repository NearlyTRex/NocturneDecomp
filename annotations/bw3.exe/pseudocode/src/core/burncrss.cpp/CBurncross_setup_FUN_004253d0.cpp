// Name: core_burncrss.cpp_CBurncross_setup_FUN_004253d0
// Address: 004253d0
// Address Range: [[004253d0, 0042541f]]
// Convention: __cdecl
// Signature: void __cdecl core_burncrss_cpp_CBurncross_setup_FUN_004253d0(CBurncross *this_ptr)

#include "nocturne.h"

void __cdecl core_burncrss_cpp_CBurncross_setup_FUN_004253d0(CBurncross *this_ptr)

{
  core_weapon_cpp_CWeapon_setup_FUN_0057af40(&this_ptr->base);
  sound_sndmain_cpp_FUN_00556230();
  sound_sndmain_cpp_FUN_00556230();
  sound_sndmain_cpp_FUN_00556230();
  core_fire_cpp_FUN_004a41d0(0x01C73654);
  core_flame_cpp_FUN_004a5ad0();
  return;
}
