// Name: sound_sndmain.cpp_setNextSfxDelay_FUN_00526210
// Address: 00526210
// Address Range: [[00526210, 0052623d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_00526210(double delay_seconds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_00526210(double delay_seconds)

{
  g_CSfxOptions_ARRAY_02dc1b78[_DAT_02dc1b74].delay_remaining = delay_seconds;
  return;
}
