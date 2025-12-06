// Name: sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_005a6400
// Address: 005a6400
// Address Range: [[005a6400, 005a642f]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_005a6400(CSfxSample * this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_005a6400(CSfxSample *this_ptr)

{
  if (this_ptr->sample_data == (void *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->sample_data,"..\\sound\\sndmain.cpp",0x744);
  this_ptr->sample_data = (void *)0x0;
  return;
}
