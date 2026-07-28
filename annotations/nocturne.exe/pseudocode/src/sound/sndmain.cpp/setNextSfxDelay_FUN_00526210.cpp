// Name: sound_sndmain.cpp_setNextSfxDelay_FUN_00526210
// Address: 00526210
// Address Range: [[00526210, 0052623d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_00526210(double delay_seconds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_00526210(double delay_seconds)

{
  *(double *)(_DAT_02dc1b74 * 0x6c + 0x2dc1bc4) = delay_seconds;
  return;
}
