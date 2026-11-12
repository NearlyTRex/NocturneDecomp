// Name: sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005503c0
// Address: 005503c0
// Address Range: [[005503c0, 005503de]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005503c0(uint flag_mask)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005503c0(uint flag_mask)

{
  uint *puVar1;
  
  puVar1 = (uint *)(_DAT_0264161c * 0x60 + 0x264166c);
  *puVar1 = *puVar1 & ~flag_mask;
  return;
}
