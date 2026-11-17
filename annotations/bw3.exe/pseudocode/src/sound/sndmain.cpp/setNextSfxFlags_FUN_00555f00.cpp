// Name: sound_sndmain.cpp_setNextSfxFlags_FUN_00555f00
// Address: 00555f00
// Address Range: [[00555f00, 00555f1c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxFlags_FUN_00555f00(uint flags)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxFlags_FUN_00555f00(uint flags)

{
  g_CSfxOptions_ARRAY_02ceb920[g_SfxLastSlot].flags = flags;
  return;
}
