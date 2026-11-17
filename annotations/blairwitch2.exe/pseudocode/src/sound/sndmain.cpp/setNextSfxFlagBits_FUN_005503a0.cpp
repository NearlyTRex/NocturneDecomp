// Name: sound_sndmain.cpp_setNextSfxFlagBits_FUN_005503a0
// Address: 005503a0
// Address Range: [[005503a0, 005503bc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_005503a0(uint flag_mask)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_005503a0(uint flag_mask)

{
  g_CSfxOptions_ARRAY_02641620[g_SfxLastSlot].flags =
       g_CSfxOptions_ARRAY_02641620[g_SfxLastSlot].flags | flag_mask;
  return;
}
