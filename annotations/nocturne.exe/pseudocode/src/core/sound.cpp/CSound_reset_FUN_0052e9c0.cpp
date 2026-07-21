// Name: core_sound.cpp_CSound_reset_FUN_0052e9c0
// Address: 0052e9c0
// Address Range: [[0052e9c0, 0052e9c9]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_reset_FUN_0052e9c0(void)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_reset_FUN_0052e9c0(void)

{
  sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
  sound_sndmain_cpp_freeAllSamples_FUN_00527c30();
  return;
}
