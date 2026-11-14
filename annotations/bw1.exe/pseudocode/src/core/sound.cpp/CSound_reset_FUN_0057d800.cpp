// Name: core_sound.cpp_CSound_reset_FUN_0057d800
// Address: 0057d800
// Address Range: [[0057d800, 0057d809]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_reset_FUN_0057d800(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_reset_FUN_0057d800(CSound *this_ptr)

{
  sound_sndmain_cpp_resetSoundDevice_FUN_005750e0();
  sound_sndmain_cpp_freeAllSamples_FUN_005746a0();
  return;
}
