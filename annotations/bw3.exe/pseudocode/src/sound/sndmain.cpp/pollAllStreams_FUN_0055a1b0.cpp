// Name: sound_sndmain.cpp_pollAllStreams_FUN_0055a1b0
// Address: 0055a1b0
// Address Range: [[0055a1b0, 0055a233]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAllStreams_FUN_0055a1b0(int paused_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_pollAllStreams_FUN_0055a1b0(int paused_mode)

{
  double dVar1;
  CSfxSample *pCVar2;
  float local_18;
  float local_14;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  local_18 = 0x40000000 + (float)_DAT_005d3f22;
  dVar1 = _DAT_005d3f1a;
  if (paused_mode != 0) {
    local_18 = 0x40000000;
    dVar1 = _DAT_005d3f2a;
  }
  local_14 = 0x40000000 + (float)dVar1;
  pCVar2 = g_SfxSamples;
  do {
    sound_sndmain_cpp_FUN_00553960(pCVar2,local_14,local_18);
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CSfxSample *)0x2cf2824);
  sound_sndmain_cpp_FUN_00556fd0();
  return;
}
