// Name: sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_0054dac0
// Address: 0054dac0
// Address Range: [[0054dac0, 0054dae5]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_0054dac0(CSfxSample *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_0054dac0(CSfxSample *this_ptr)

{
  if (this_ptr->sample_data == (short *)0x0) {
    return;
  }
  FUN_005b86a0(this_ptr->sample_data);
  this_ptr->sample_data = (short *)0x0;
  return;
}
