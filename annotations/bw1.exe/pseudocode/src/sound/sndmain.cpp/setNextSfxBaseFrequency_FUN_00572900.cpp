// Name: sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_00572900
// Address: 00572900
// Address Range: [[00572900, 0057291c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00572900(float base_frequency)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00572900(float base_frequency)

{
  g_CSfxOptions_ARRAY_02c78cf0[g_INT_02c78cec].base_frequency = base_frequency;
  return;
}
