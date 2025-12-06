// Name: sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_005a8a80
// Address: 005a8a80
// Address Range: [[005a8a80, 005a8a99]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_005a8a80(float base_frequency)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_005a8a80(float base_frequency)

{
  g_SfxOptions[g_SfxLastSlot].base_frequency = base_frequency;
  return;
}
