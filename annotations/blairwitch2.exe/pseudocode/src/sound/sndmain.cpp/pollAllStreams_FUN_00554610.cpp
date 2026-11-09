// Name: sound_sndmain.cpp_pollAllStreams_FUN_00554610
// Address: 00554610
// Address Range: [[00554610, 00554693]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAllStreams_FUN_00554610(int paused_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_pollAllStreams_FUN_00554610(int paused_mode)

{
  double dVar1;
  CSfxSample *pCVar2;
  float local_18;
  float local_14;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  local_18 = 0x40000000 + (float)_DAT_005e942e;
  dVar1 = _DAT_005e9426;
  if (paused_mode != 0) {
    local_18 = 0x40000000;
    dVar1 = _DAT_005e9436;
  }
  local_14 = 0x40000000 + (float)dVar1;
  pCVar2 = g_SfxSamples;
  do {
    sound_sndmain_cpp_FUN_0054ddf0(pCVar2,local_14,local_18);
    pCVar2 = pCVar2 + 1;
  } while (pCVar2 != (CSfxSample *)0x2648424);
  sound_sndmain_cpp_FUN_00551440();
  return;
}
