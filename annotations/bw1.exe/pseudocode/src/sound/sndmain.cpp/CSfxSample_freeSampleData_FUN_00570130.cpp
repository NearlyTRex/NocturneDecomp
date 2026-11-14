// Name: sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00570130
// Address: 00570130
// Address Range: [[00570130, 00570155]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00570130(CSfxSample *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00570130(CSfxSample *this_ptr)

{
  if (this_ptr->sample_data == (short *)0x0) {
    return;
  }
  FUN_005c09f0(this_ptr->sample_data);
  this_ptr->sample_data = (short *)0x0;
  return;
}
