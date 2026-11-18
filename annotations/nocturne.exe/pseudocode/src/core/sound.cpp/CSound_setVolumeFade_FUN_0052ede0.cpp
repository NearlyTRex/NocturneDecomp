// Name: core_sound.cpp_CSound_setVolumeFade_FUN_0052ede0
// Address: 0052ede0
// Address Range: [[0052ede0, 0052edf2]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_0052ede0(CSound *this_ptr,float target_volume,float fade_time)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_0052ede0(CSound *this_ptr,float target_volume,float fade_time)

{
  g_TargetVolumeMultiplier = target_volume;
  g_VolumeFadeTimeRemaining = fade_time;
  return;
}
