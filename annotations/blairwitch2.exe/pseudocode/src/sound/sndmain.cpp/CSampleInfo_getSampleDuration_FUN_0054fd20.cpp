// Name: sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_0054fd20
// Address: 0054fd20
// Address Range: [[0054fd20, 0054fd64]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_0054fd20(CSampleInfo *this_ptr)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_0054fd20(CSampleInfo *this_ptr)

{
  if (0 < *(int *)(this_ptr + 0x10c)) {
    return (double)*(int *)(this_ptr + 0x110) / (double)*(int *)(this_ptr + 0x10c);
  }
  return 0.0;
}
