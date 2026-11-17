// Name: sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_00550290
// Address: 00550290
// Address Range: [[00550290, 005502ac]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00550290(float base_frequency)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00550290(float base_frequency)

{
  g_CSfxOptions_ARRAY_02641620[g_SfxLastSlot].base_frequency = base_frequency;
  return;
}
