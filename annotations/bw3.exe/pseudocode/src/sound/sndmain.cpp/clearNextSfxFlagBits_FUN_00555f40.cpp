// Name: sound_sndmain.cpp_clearNextSfxFlagBits_FUN_00555f40
// Address: 00555f40
// Address Range: [[00555f40, 00555f5e]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_clearNextSfxFlagBits_FUN_00555f40(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_clearNextSfxFlagBits_FUN_00555f40(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(_DAT_02ceb91c * 0x60 + 0x2ceb96c);
  *puVar1 = *puVar1 & ~param_1;
  return;
}
