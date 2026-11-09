// Name: sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_00572390
// Address: 00572390
// Address Range: [[00572390, 005723d4]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_00572390(CSampleInfo *this_ptr)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_00572390(CSampleInfo *this_ptr)

{
  if (0 < *(int *)(this_ptr + 0x10c)) {
    return (double)*(int *)(this_ptr + 0x110) / (double)*(int *)(this_ptr + 0x10c);
  }
  return 0.0;
}
