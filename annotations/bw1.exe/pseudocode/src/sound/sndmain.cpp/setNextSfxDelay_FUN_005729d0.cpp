// Name: sound_sndmain.cpp_setNextSfxDelay_FUN_005729d0
// Address: 005729d0
// Address Range: [[005729d0, 005729ec]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_005729d0(float delay_seconds)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_005729d0(float delay_seconds)

{
  g_CSfxOptions_ARRAY_02c78cf0[g_SfxLastSlot].delay_remaining = delay_seconds;
  return;
}
