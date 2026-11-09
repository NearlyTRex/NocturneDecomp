// Name: sound_sndmain.cpp_FUN_00570130
// Address: 00570130
// Address Range: [[00570130, 00570155]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00570130(CSfxSample *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_FUN_00570130(CSfxSample *this_ptr)

{
  if (*(int *)&this_ptr->field_0x120 == 0) {
    return;
  }
  FUN_005c09f0(*(int *)&this_ptr->field_0x120);
  *(uint *)&this_ptr->field_0x120 = 0;
  return;
}
