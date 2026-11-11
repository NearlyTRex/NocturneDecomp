// Name: core_bindevil.cpp_CBindEvil_setup_FUN_0040f900
// Address: 0040f900
// Address Range: [[0040f900, 0040f938]]
// Convention: __cdecl
// Signature: void __cdecl core_bindevil_cpp_CBindEvil_setup_FUN_0040f900(CBindEvil *this_ptr)

#include "nocturne.h"

void __cdecl core_bindevil_cpp_CBindEvil_setup_FUN_0040f900(CBindEvil *this_ptr)

{
  core_weapon_cpp_CWeapon_setup_FUN_0057af40(&this_ptr->base);
  sound_sndmain_cpp_FUN_00556230();
  sound_sndmain_cpp_FUN_00556230();
  core_fire_cpp_FUN_004a4340(0x01C73654);
  return;
}
