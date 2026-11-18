// Name: sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005503c0
// Address: 005503c0
// Address Range: [[005503c0, 005503de]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005503c0(uint flag_mask)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005503c0(uint flag_mask)

{
  g_CSfxOptions_ARRAY_02641620[g_SfxLastSlot].flags =
       g_CSfxOptions_ARRAY_02641620[g_SfxLastSlot].flags & ~flag_mask;
  return;
}
