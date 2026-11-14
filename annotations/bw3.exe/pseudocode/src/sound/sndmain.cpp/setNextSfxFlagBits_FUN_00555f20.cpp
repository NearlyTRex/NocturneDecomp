// Name: sound_sndmain.cpp_setNextSfxFlagBits_FUN_00555f20
// Address: 00555f20
// Address Range: [[00555f20, 00555f3c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_00555f20(uint flag_mask)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_00555f20(uint flag_mask)

{
  uint *puVar1;
  
  puVar1 = (uint *)(_DAT_02ceb91c * 0x60 + 0x2ceb96c);
  *puVar1 = *puVar1 | flag_mask;
  return;
}
