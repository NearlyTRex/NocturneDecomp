// Name: core_sound.cpp_CSound_setVolumeFade_FUN_0057dc00
// Address: 0057dc00
// Address Range: [[0057dc00, 0057dc12]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_0057dc00(CSound *this_ptr,float target_volume,float fade_time)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_0057dc00(CSound *this_ptr,float target_volume,float fade_time)

{
  g_TargetVolumeMultiplier = target_volume;
  g_VolumeFadeTimeRemaining = fade_time;
  return;
}
