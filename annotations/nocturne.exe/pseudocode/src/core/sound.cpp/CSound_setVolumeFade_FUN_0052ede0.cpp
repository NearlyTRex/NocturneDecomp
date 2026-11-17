// Name: core_sound.cpp_CSound_setVolumeFade_FUN_0052ede0
// Address: 0052ede0
// Address Range: [[0052ede0, 0052edf2]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_0052ede0(CSound *this_ptr,float target_volume,float fade_time)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_0052ede0(CSound *this_ptr,float target_volume,float fade_time)

{
  g_FLOAT_02dc9c9c = target_volume;
  g_FLOAT_02dc9ca0 = fade_time;
  return;
}
