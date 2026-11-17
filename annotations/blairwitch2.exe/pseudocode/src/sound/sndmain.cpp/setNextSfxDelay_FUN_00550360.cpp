// Name: sound_sndmain.cpp_setNextSfxDelay_FUN_00550360
// Address: 00550360
// Address Range: [[00550360, 0055037c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_00550360(double delay_seconds)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_00550360(double delay_seconds)

{
  g_CSfxOptions_ARRAY_02641620[g_INT_0264161c].delay_remaining = delay_seconds._0_4_;
  return;
}
