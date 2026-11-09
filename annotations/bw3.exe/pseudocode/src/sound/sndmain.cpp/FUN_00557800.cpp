// Name: sound_sndmain.cpp_FUN_00557800
// Address: 00557800
// Address Range: [[00557800, 00557831]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00557800(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_FUN_00557800(void)

{
  CSfxSample *this_ptr;
  
  sound_sndmain_cpp_FUN_00558e90();
  this_ptr = g_SfxSamples;
  sound_sndmain_cpp_FUN_00556c60();
  do {
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CSfxSample *)0x2cf2824);
  sound_sndmain_cpp_FUN_00556fd0();
  return;
}
