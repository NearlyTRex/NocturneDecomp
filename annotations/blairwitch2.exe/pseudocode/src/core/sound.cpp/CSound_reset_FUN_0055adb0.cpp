// Name: core_sound.cpp_CSound_reset_FUN_0055adb0
// Address: 0055adb0
// Address Range: [[0055adb0, 0055adb9]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_reset_FUN_0055adb0(CSound *this_ptr)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_reset_FUN_0055adb0(CSound *this_ptr)

{
  sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
  sound_sndmain_cpp_freeAllSamples_FUN_00551c70();
  return;
}
