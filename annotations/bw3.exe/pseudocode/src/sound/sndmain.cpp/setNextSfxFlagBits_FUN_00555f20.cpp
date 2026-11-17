// Name: sound_sndmain.cpp_setNextSfxFlagBits_FUN_00555f20
// Address: 00555f20
// Address Range: [[00555f20, 00555f3c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_00555f20(uint flag_mask)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_00555f20(uint flag_mask)

{
  g_CSfxOptions_ARRAY_02ceb920[g_INT_02ceb91c].flags =
       g_CSfxOptions_ARRAY_02ceb920[g_INT_02ceb91c].flags | flag_mask;
  return;
}
