// Name: sound_sndmain.cpp_CSampleInfo_getSampleDuration_FUN_005a84d0
// Address: 005a84d0
// Address Range: [[005a84d0, 005a8514]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_005a84d0(CSampleInfo *this_ptr)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_005a84d0(CSampleInfo *this_ptr)

{
  int in_stack_00000004;
  
  if (0 < *(int *)(in_stack_00000004 + 0x10c)) {
    return (double)*(int *)(in_stack_00000004 + 0x110) / (double)*(int *)(in_stack_00000004 + 0x10c)
    ;
  }
  return 0.0;
}
