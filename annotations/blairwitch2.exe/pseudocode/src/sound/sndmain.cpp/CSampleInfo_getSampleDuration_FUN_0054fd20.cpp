// Name: sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_0054fd20
// Address: 0054fd20
// Address Range: [[0054fd20, 0054fd64]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_0054fd20(CSampleInfo *this_ptr)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_0054fd20(CSampleInfo *this_ptr)

{
  if (0 < this_ptr->sample_rate) {
    return (double)this_ptr->sample_count / (double)this_ptr->sample_rate;
  }
  return 0.0;
}
