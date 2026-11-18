// Name: sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0
// Address: 005260f0
// Address Range: [[005260f0, 00526113]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(float volume)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(float volume)

{
  g_CSfxOptions_ARRAY_02dc1b78[g_SfxLastSlot].current_volume = volume;
  return;
}
