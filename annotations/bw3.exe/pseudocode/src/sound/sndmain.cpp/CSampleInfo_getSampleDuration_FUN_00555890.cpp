// Name: sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_00555890
// Address: 00555890
// Address Range: [[00555890, 005558d4]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_00555890(CSampleInfo *this_ptr)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_00555890(CSampleInfo *this_ptr)

{
  if (0 < this_ptr->sample_rate) {
    return (double)this_ptr->sample_count / (double)this_ptr->sample_rate;
  }
  return 0.0;
}
