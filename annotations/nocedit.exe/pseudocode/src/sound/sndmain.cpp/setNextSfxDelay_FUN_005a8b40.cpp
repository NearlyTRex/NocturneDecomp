// Name: sound_sndmain.cpp_setNextSfxDelay_FUN_005a8b40
// Address: 005a8b40
// Address Range: [[005a8b40, 005a8b63]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_005a8b40(double delay_seconds)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_005a8b40(double delay_seconds)

{
  g_SfxOptions[g_SfxLastSlot].delay_remaining = delay_seconds;
  return;
}
