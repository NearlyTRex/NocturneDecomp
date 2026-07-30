// Name: sound_sndmain.cpp_freeAllSamples_FUN_00527c30
// Address: 00527c30
// Address Range: [[00527c30, 00527c61]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_freeAllSamples_FUN_00527c30(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_freeAllSamples_FUN_00527c30(void)

{
  CSfxSample *this_ptr;
  
  sound_sndmain_cpp_lockSound_FUN_00528800();
  this_ptr = (CSfxSample *)&DAT_02dc1edc;
  sound_sndmain_cpp_killAllSfx_FUN_005272b0();
  do {
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(this_ptr);
    this_ptr = (CSfxSample *)&this_ptr->stream_write_position;
  } while (this_ptr != (CSfxSample *)0x2dc78dc);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return;
}
