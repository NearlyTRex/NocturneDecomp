// Name: sound_sndmain.cpp_resetCurrentSfxOptions_FUN_005a8c10
// Address: 005a8c10
// Address Range: [[005a8c10, 005a8c2d]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_resetCurrentSfxOptions_FUN_005a8c10(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_resetCurrentSfxOptions_FUN_005a8c10(void)

{
  sound_sndmain_cpp_CSfxOptions_reset_FUN_005a8830(g_SfxOptions + g_SfxLastSlot);
  return;
}
