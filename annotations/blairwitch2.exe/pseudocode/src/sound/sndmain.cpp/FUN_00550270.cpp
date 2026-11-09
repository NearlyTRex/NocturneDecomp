// Name: sound_sndmain.cpp_FUN_00550270
// Address: 00550270
// Address Range: [[00550270, 0055028c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00550270(float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00550270(float volume)

{
  *(float *)(_DAT_0264161c * 0x60 + 0x2641658) = volume;
  return;
}
