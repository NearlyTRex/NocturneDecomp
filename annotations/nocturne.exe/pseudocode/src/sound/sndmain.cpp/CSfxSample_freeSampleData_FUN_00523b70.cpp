// Name: sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00523b70
// Address: 00523b70
// Address Range: [[00523b70, 00523b95]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00523b70(CSfxSample *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00523b70(CSfxSample *this_ptr)

{
  if (this_ptr->sample_data == (short *)0x0) {
    return;
  }
  free(this_ptr->sample_data);
  this_ptr->sample_data = (short *)0x0;
  return;
}
