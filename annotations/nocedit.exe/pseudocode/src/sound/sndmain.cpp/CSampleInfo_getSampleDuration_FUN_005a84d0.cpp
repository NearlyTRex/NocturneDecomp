// Name: sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_005a84d0
// Address: 005a84d0
// Address Range: [[005a84d0, 005a8514]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_005a84d0(CSampleInfo *this_ptr)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_005a84d0(CSampleInfo *this_ptr)

{
  if (0 < this_ptr->sample_rate) {
    return (double)this_ptr->sample_count / (double)this_ptr->sample_rate;
  }
  return 0.0;
}
