// Name: sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005262a0
// Address: 005262a0
// Address Range: [[005262a0, 005262cd]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005262a0(uint flag_mask)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005262a0(uint flag_mask)

{
  g_CSfxOptions_ARRAY_02dc1b78[g_INT_02dc1b74].flags =
       g_CSfxOptions_ARRAY_02dc1b78[g_INT_02dc1b74].flags & ~flag_mask;
  return;
}
