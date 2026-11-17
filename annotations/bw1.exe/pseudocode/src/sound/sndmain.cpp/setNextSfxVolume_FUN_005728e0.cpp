// Name: sound_sndmain.cpp_setNextSfxVolume_FUN_005728e0
// Address: 005728e0
// Address Range: [[005728e0, 005728fc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_005728e0(float volume)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_005728e0(float volume)

{
  g_CSfxOptions_ARRAY_02c78cf0[g_SfxLastSlot].current_volume = volume;
  return;
}
