// Name: sound_sndmain.cpp_clearNextSfxFlagBits_FUN_00572a30
// Address: 00572a30
// Address Range: [[00572a30, 00572a4e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_00572a30(uint flag_mask)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_00572a30(uint flag_mask)

{
  uint *puVar1;
  
  puVar1 = (uint *)(_DAT_02c78cec * 0x60 + 0x2c78d3c);
  *puVar1 = *puVar1 & ~flag_mask;
  return;
}
