// Name: core_sound.cpp_CSound_setVolumeFade_FUN_00560d30
// Address: 00560d30
// Address Range: [[00560d30, 00560d42]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_00560d30(CSound *this_ptr,float target_volume,float fade_time)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_00560d30(CSound *this_ptr,float target_volume,float fade_time)

{
  g_TargetVolumeMultiplier = target_volume;
  g_VolumeFadeTimeRemaining = fade_time;
  return;
}
