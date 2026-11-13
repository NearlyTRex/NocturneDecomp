// Name: sound_sndmain.cpp_setNextSfxFlagBits_FUN_00572a10
// Address: 00572a10
// Address Range: [[00572a10, 00572a2c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_00572a10(uint flag_mask)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_00572a10(uint flag_mask)

{
  uint *puVar1;
  
  puVar1 = (uint *)(_DAT_02c78cec * 0x60 + 0x2c78d3c);
  *puVar1 = *puVar1 | flag_mask;
  return;
}
