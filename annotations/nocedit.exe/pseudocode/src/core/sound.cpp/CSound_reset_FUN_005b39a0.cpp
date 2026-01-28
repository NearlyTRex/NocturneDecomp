// Name: core_sound.cpp_CSound_reset_FUN_005b39a0
// Address: 005b39a0
// Address Range: [[005b39a0, 005b39a9]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_reset_FUN_005b39a0(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_reset_FUN_005b39a0(CSound *this_ptr)

{
  sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
  sound_sndmain_cpp_freeAllSamples_FUN_005aa660();
  return;
}
