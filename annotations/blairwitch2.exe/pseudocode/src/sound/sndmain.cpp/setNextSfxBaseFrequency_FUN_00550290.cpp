// Name: sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_00550290
// Address: 00550290
// Address Range: [[00550290, 005502ac]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00550290(float base_frequency)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00550290(float base_frequency)

{
  *(float *)(_DAT_0264161c * 0x60 + 0x264165c) = base_frequency;
  return;
}
