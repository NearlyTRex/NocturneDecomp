// Name: sound_sndmain.cpp_getFirstActiveSfx_FUN_005a9ef0
// Address: 005a9ef0
// MANUAL RECONSTRUCTION
// Address Range: [[005a9ef0, 005a9f22]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_getFirstActiveSfx_FUN_005a9ef0(void)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_getFirstActiveSfx_FUN_005a9ef0(void)

{
  int state;
  uint uVar3;

  for (uVar3 = 0; uVar3 < 64; uVar3 = uVar3 + 1) {
    state = g_SfxSlots[uVar3].playback_state;
    if (g_SfxSlots[uVar3].sample != (CSfxSample *)0x0 && state != 0) {
      return (uint)state << 6 | uVar3;
    }
  }
  return 0;
}
