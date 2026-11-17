// Name: sound_sndmain.cpp_clearNextSfxFlagBits_FUN_00572a30
// Address: 00572a30
// Address Range: [[00572a30, 00572a4e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_00572a30(uint flag_mask)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_00572a30(uint flag_mask)

{
  g_CSfxOptions_ARRAY_02c78cf0[g_INT_02c78cec].flags =
       g_CSfxOptions_ARRAY_02c78cf0[g_INT_02c78cec].flags & ~flag_mask;
  return;
}
