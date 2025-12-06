// Name: sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0
// Address: 005a8bb0
// Address Range: [[005a8bb0, 005a8bd3]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0(uint flag_mask)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005a8bb0(uint flag_mask)

{
  g_SfxOptions[g_SfxLastSlot].flags = g_SfxOptions[g_SfxLastSlot].flags & ~flag_mask;
  return;
}
