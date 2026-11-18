// Name: sound_sndmain.cpp_pollAllStreams_FUN_00554610
// Address: 00554610
// Address Range: [[00554610, 00554693]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAllStreams_FUN_00554610(int paused_mode)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_pollAllStreams_FUN_00554610(int paused_mode)

{
  double dVar1;
  CSfxSample *this_ptr;
  float local_18;
  float local_14;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  local_18 = 2.0f + (float)-0.10000000000000001;
  dVar1 = -0.29999999999999999;
  if (paused_mode != 0) {
    local_18 = 2.0f;
    dVar1 = -0.20000000000000001;
  }
  local_14 = 2.0f + (float)dVar1;
  this_ptr = g_SfxSamples;
  do {
    sound_sndmain_cpp_CSfxSample_pollStream_FUN_0054ddf0(this_ptr,local_14,local_18);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSfxSample *)0x2648424);
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return;
}
