// Name: sound_sndmain.cpp_freeAllSamples_FUN_00551c70
// Address: 00551c70
// Address Range: [[00551c70, 00551ca1]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeAllSamples_FUN_00551c70(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeAllSamples_FUN_00551c70(void)

{
  CSfxSample *this_ptr;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  this_ptr = g_SfxSamples;
  sound_sndmain_cpp_killAllSfx_FUN_005510d0();
  do {
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSfxSample *)0x2648424);
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return;
}
