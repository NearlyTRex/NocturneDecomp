// Name: sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_00572900
// Address: 00572900
// Address Range: [[00572900, 0057291c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00572900(float base_frequency)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00572900(float base_frequency)

{
  *(float *)(_DAT_02c78cec * 0x60 + 0x2c78d2c) = base_frequency;
  return;
}
