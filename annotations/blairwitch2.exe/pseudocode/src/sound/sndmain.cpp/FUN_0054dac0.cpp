// Name: sound_sndmain.cpp_FUN_0054dac0
// Address: 0054dac0
// Address Range: [[0054dac0, 0054dae5]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_0054dac0(CSfxSample *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_FUN_0054dac0(CSfxSample *this_ptr)

{
  if (*(int *)&this_ptr->field_0x120 == 0) {
    return;
  }
  FUN_005b86a0(*(int *)&this_ptr->field_0x120);
  *(uint *)&this_ptr->field_0x120 = 0;
  return;
}
