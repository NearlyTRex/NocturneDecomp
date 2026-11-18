// Name: sound_sndmain.cpp_setNextSfxVolume_FUN_00550270
// Address: 00550270
// Address Range: [[00550270, 0055028c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(float volume)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_00550270(float volume)

{
  g_CSfxOptions_ARRAY_02641620[g_SfxLastSlot].current_volume = volume;
  return;
}
