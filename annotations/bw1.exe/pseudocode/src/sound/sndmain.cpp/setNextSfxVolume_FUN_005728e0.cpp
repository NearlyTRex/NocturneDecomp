// Name: sound_sndmain.cpp_setNextSfxVolume_FUN_005728e0
// Address: 005728e0
// Address Range: [[005728e0, 005728fc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_005728e0(float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_005728e0(float volume)

{
  *(float *)(_DAT_02c78cec * 0x60 + 0x2c78d28) = volume;
  return;
}
