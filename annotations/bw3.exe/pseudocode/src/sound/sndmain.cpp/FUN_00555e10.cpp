// Name: sound_sndmain.cpp_FUN_00555e10
// Address: 00555e10
// Address Range: [[00555e10, 00555e2c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00555e10(float base_frequency)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00555e10(float base_frequency)

{
  *(float *)(_DAT_02ceb91c * 0x60 + 0x2ceb95c) = base_frequency;
  return;
}
