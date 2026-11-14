// Name: sound_sndmain.cpp_freeAllSamples_FUN_005746a0
// Address: 005746a0
// Address Range: [[005746a0, 005746d1]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeAllSamples_FUN_005746a0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeAllSamples_FUN_005746a0(void)

{
  CSfxSample *this_ptr;
  
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  this_ptr = g_SfxSamples;
  sound_sndmain_cpp_killAllSfx_FUN_00573b00();
  do {
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSfxSample *)0x2c7fbf4);
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return;
}
