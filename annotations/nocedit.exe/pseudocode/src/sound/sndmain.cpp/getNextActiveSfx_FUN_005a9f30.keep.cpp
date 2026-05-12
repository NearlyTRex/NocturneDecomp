// Name: sound_sndmain.cpp_getNextActiveSfx_FUN_005a9f30
// Address: 005a9f30
// MANUAL RECONSTRUCTION
// Address Range: [[005a9f30, 005a9f7b]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_getNextActiveSfx_FUN_005a9f30(uint current_sfx_handle)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_getNextActiveSfx_FUN_005a9f30(uint current_sfx_handle)

{
  int state;
  uint uVar3;

  for (uVar3 = (current_sfx_handle & 0x3f) + 1; uVar3 < 0x40; uVar3 = uVar3 + 1) {
    state = g_SfxSlots[uVar3].playback_state;
    if (g_SfxSlots[uVar3].sample != (CSfxSample *)0x0 && state != 0) {
      return (uint)state << 6 | uVar3;
    }
  }
  return 0;
}
