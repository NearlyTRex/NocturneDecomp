// Name: sound_sndmain.cpp_setNextSfxVolume_FUN_00555df0
// Address: 00555df0
// Address Range: [[00555df0, 00555e0c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_00555df0(float volume)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_00555df0(float volume)

{
  g_CSfxOptions_ARRAY_02ceb920[g_SfxLastSlot].current_volume = volume;
  return;
}
