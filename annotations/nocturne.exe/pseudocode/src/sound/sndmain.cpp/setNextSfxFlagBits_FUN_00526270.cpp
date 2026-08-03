// Name: sound_sndmain.cpp_setNextSfxFlagBits_FUN_00526270
// Address: 00526270
// Address Range: [[00526270, 00526293]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_00526270(uint flag_mask)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_00526270(uint flag_mask)

{
  g_CSfxOptions_ARRAY_02dc1b78[_DAT_02dc1b74].flags =
       g_CSfxOptions_ARRAY_02dc1b78[_DAT_02dc1b74].flags | flag_mask;
  return;
}
