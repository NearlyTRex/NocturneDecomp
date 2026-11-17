// Name: core_sound.cpp_CSound_setVolumeFade_FUN_0055b1b0
// Address: 0055b1b0
// Address Range: [[0055b1b0, 0055b1c2]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_0055b1b0(CSound *this_ptr,float target_volume,float fade_time)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_0055b1b0(CSound *this_ptr,float target_volume,float fade_time)

{
  g_FLOAT_0264badc = target_volume;
  g_FLOAT_0264bae0 = fade_time;
  return;
}
