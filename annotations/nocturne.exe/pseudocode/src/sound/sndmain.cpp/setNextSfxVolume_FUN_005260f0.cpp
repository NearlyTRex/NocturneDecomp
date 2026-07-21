// Name: sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0
// Address: 005260f0
// Address Range: [[005260f0, 00526113]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0(uint param_1)

{
  *(uint *)(_DAT_02dc1b74 * 0x6c + 0x2dc1bbc) = param_1;
  return;
}
