// Name: sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00553630
// Address: 00553630
// Address Range: [[00553630, 00553655]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00553630(CSfxSample *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00553630(CSfxSample *this_ptr)

{
  if (this_ptr->sample_data == (short *)0x0) {
    return;
  }
  FUN_005a3770(this_ptr->sample_data);
  this_ptr->sample_data = (short *)0x0;
  return;
}
