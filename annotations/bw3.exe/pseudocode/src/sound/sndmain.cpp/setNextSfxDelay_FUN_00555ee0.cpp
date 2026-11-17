// Name: sound_sndmain.cpp_setNextSfxDelay_FUN_00555ee0
// Address: 00555ee0
// Address Range: [[00555ee0, 00555efc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_00555ee0(double delay_seconds)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxDelay_FUN_00555ee0(double delay_seconds)

{
  g_CSfxOptions_ARRAY_02ceb920[g_INT_02ceb91c].delay_remaining = delay_seconds._0_4_;
  return;
}
