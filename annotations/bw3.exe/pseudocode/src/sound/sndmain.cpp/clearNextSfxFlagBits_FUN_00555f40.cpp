// Name: sound_sndmain.cpp_clearNextSfxFlagBits_FUN_00555f40
// Address: 00555f40
// Address Range: [[00555f40, 00555f5e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_00555f40(uint flag_mask)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_00555f40(uint flag_mask)

{
  uint *puVar1;
  
  puVar1 = (uint *)(_DAT_02ceb91c * 0x60 + 0x2ceb96c);
  *puVar1 = *puVar1 & ~flag_mask;
  return;
}
