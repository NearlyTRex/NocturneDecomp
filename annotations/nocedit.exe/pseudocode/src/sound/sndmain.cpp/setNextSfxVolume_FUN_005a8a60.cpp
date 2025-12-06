// Name: sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
// Address: 005a8a60
// Address Range: [[005a8a60, 005a8a79]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60(float volume)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(float volume)

{
  g_SfxOptions[g_SfxLastSlot].current_volume = volume;
  return;
}
