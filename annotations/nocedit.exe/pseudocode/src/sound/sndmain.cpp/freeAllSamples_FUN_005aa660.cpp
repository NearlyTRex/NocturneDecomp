// Name: sound_sndmain.cpp_freeAllSamples_FUN_005aa660
// Address: 005aa660
// Address Range: [[005aa660, 005aa691]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeAllSamples_FUN_005aa660(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeAllSamples_FUN_005aa660(void)

{
  CSfxSample *this_ptr;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  this_ptr = g_SfxSamples;
  sound_sndmain_cpp_killAllSfx_FUN_005a9cc0();
  do {
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSfxSample *)&g_SfxSamplesEnd);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return;
}
