// Name: sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_00555e10
// Address: 00555e10
// Address Range: [[00555e10, 00555e2c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00555e10(float base_frequency)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00555e10(float base_frequency)

{
  g_CSfxOptions_ARRAY_02ceb920[g_SfxLastSlot].base_frequency = base_frequency;
  return;
}
