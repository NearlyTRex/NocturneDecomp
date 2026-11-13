// Name: sound_sndmain.cpp_setNextSfxVolume_FUN_00555df0
// Address: 00555df0
// Address Range: [[00555df0, 00555e0c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_00555df0(float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_00555df0(float volume)

{
  *(float *)(_DAT_02ceb91c * 0x60 + 0x2ceb958) = volume;
  return;
}
