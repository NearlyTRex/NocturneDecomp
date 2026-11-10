// Name: sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_00572390
// Address: 00572390
// Address Range: [[00572390, 005723d4]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_00572390(CSampleInfo *this_ptr)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_00572390(CSampleInfo *this_ptr)

{
  if (0 < this_ptr->sample_rate) {
    return (double)this_ptr->sample_count / (double)this_ptr->sample_rate;
  }
  return 0.0;
}
