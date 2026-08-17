// Name: sound_sndmain.cpp_setNextSfxBaseFrequency_FUN_00526120
// Address: 00526120
// Address Range: [[00526120, 00526143]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00526120(float base_frequency)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_00526120(float base_frequency)

{
  g_CSfxOptions_ARRAY_02dc1b78[_DAT_02dc1b74].base_frequency = base_frequency;
  return;
}
