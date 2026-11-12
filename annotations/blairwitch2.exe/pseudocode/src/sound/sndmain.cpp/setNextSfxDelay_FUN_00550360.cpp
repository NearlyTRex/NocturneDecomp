// Name: sound_sndmain.cpp_setNextSfxDelay_FUN_00550360
// Address: 00550360
// Address Range: [[00550360, 0055037c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_00550360(double delay_seconds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_00550360(double delay_seconds)

{
  *(uint *)(_DAT_0264161c * 0x60 + 0x2641660) = delay_seconds._0_4_;
  return;
}
