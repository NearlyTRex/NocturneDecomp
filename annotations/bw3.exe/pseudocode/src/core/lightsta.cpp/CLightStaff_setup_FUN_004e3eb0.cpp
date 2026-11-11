// Name: core_lightsta.cpp_CLightStaff_setup_FUN_004e3eb0
// Address: 004e3eb0
// Address Range: [[004e3eb0, 004e3f0c]]
// Convention: __cdecl
// Signature: void __cdecl core_lightsta_cpp_CLightStaff_setup_FUN_004e3eb0(CLightStaff *this_ptr)

#include "nocturne.h"

void __cdecl core_lightsta_cpp_CLightStaff_setup_FUN_004e3eb0(CLightStaff *this_ptr)

{
  core_weapon_cpp_CWeapon_setup_FUN_0057af40(&this_ptr->base);
  sound_sndmain_cpp_FUN_00556230();
  sound_sndmain_cpp_FUN_00556230();
  sound_sndmain_cpp_FUN_00556230();
  sound_sndmain_cpp_FUN_00556230();
  core_fire_cpp_FUN_004a4130(0x01C73654);
  core_charactr_cpp_FUN_0042f280();
  return;
}
