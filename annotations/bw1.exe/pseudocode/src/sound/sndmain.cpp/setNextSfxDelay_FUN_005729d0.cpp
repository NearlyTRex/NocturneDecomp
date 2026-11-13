// Name: sound_sndmain.cpp_setNextSfxDelay_FUN_005729d0
// Address: 005729d0
// Address Range: [[005729d0, 005729ec]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_005729d0(float delay_seconds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_005729d0(float delay_seconds)

{
  *(float *)(_DAT_02c78cec * 0x60 + 0x2c78d30) = delay_seconds;
  return;
}
