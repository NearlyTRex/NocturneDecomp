// Name: core_sound.cpp_CSound_dtor_FUN_005b2d60
// Address: 005b2d60
// Address Range: [[005b2d60, 005b2d64]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_dtor_FUN_005b2d60(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_dtor_FUN_005b2d60(CSound *this_ptr)

{
  sound_sndmain_cpp_shutdownSoundSystem_FUN_005aaeb0();
  return;
}
