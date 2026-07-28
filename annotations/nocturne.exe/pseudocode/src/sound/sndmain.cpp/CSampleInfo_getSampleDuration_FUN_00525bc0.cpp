// Name: sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_00525bc0
// Address: 00525bc0
// Address Range: [[00525bc0, 00525c04]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_00525bc0(CSampleInfo *this_ptr)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_00525bc0(CSampleInfo *this_ptr)

{
  if (0 < this_ptr->sample_rate) {
    return (double)this_ptr->sample_count / (double)this_ptr->sample_rate;
  }
  return 0.0;
}
