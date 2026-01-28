// Name: sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90
// Address: 005a8b90
// Address Range: [[005a8b90, 005a8ba9]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(uint flag_mask)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(uint flag_mask)

{
  g_SfxOptions[g_SfxLastSlot].flags = g_SfxOptions[g_SfxLastSlot].flags | flag_mask;
  return;
}
