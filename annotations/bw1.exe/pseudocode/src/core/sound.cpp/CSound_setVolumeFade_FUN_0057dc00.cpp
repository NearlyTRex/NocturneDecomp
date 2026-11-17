// Name: core_sound.cpp_CSound_setVolumeFade_FUN_0057dc00
// Address: 0057dc00
// Address Range: [[0057dc00, 0057dc12]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_0057dc00(CSound *this_ptr,float target_volume,float fade_time)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_0057dc00(CSound *this_ptr,float target_volume,float fade_time)

{
  g_FLOAT_02c832ac = target_volume;
  g_FLOAT_02c832b0 = fade_time;
  return;
}
