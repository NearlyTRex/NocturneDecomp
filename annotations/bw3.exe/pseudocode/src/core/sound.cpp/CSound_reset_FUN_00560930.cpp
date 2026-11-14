// Name: core_sound.cpp_CSound_reset_FUN_00560930
// Address: 00560930
// Address Range: [[00560930, 00560939]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_reset_FUN_00560930(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_reset_FUN_00560930(CSound *this_ptr)

{
  sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
  sound_sndmain_cpp_freeAllSamples_FUN_00557800();
  return;
}
