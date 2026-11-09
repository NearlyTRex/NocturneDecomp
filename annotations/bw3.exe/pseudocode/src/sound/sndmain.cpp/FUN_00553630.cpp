// Name: sound_sndmain.cpp_FUN_00553630
// Address: 00553630
// Address Range: [[00553630, 00553655]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00553630(CSfxSample *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_FUN_00553630(CSfxSample *this_ptr)

{
  if (*(int *)&this_ptr->field_0x120 == 0) {
    return;
  }
  FUN_005a3770(*(int *)&this_ptr->field_0x120);
  *(uint *)&this_ptr->field_0x120 = 0;
  return;
}
