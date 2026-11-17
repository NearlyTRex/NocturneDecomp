// Name: sound_sndmain.cpp_clearNextSfxFlagBits_FUN_00555f40
// Address: 00555f40
// Address Range: [[00555f40, 00555f5e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_00555f40(uint flag_mask)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_00555f40(uint flag_mask)

{
  g_CSfxOptions_ARRAY_02ceb920[g_INT_02ceb91c].flags =
       g_CSfxOptions_ARRAY_02ceb920[g_INT_02ceb91c].flags & ~flag_mask;
  return;
}
