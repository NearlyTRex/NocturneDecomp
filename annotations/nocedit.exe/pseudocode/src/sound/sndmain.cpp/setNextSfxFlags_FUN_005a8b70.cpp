// Name: sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70
// Address: 005a8b70
// Address Range: [[005a8b70, 005a8b89]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(uint flags)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(uint flags)

{
  g_SfxOptions[g_SfxLastSlot].flags = flags;
  return;
}
