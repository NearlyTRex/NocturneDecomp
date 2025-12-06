// Name: core_sound.cpp_CSound_setVolumeFade_FUN_005b3dc0
// Address: 005b3dc0
// Address Range: [[005b3dc0, 005b3dd2]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_setVolumeFade_FUN_005b3dc0(CSound * this_ptr, float target_volume, float fade_time)

#include "nocturne.h"

void __cdecl
core_sound_cpp_CSound_setVolumeFade_FUN_005b3dc0
          (CSound *this_ptr,float target_volume,float fade_time)

{
  g_TargetVolumeMultiplier = target_volume;
  g_VolumeFadeTimeRemaining = fade_time;
  return;
}
