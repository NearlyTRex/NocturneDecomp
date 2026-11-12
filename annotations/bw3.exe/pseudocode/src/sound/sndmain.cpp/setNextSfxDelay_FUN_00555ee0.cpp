// Name: sound_sndmain.cpp_setNextSfxDelay_FUN_00555ee0
// Address: 00555ee0
// Address Range: [[00555ee0, 00555efc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_00555ee0(double delay_seconds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_00555ee0(double delay_seconds)

{
  *(uint *)(_DAT_02ceb91c * 0x60 + 0x2ceb960) = delay_seconds._0_4_;
  return;
}
