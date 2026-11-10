// Name: sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005503c0
// Address: 005503c0
// Address Range: [[005503c0, 005503de]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005503c0(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005503c0(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(_DAT_0264161c * 0x60 + 0x264166c);
  *puVar1 = *puVar1 & ~param_1;
  return;
}
