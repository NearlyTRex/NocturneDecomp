// Name: sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00572680
// Address: 00572680
// Address Range: [[00572680, 005726b9]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00572680(CSfxSample *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00572680(CSfxSample *this_ptr)

{
  if (((*(int *)&this_ptr->field_0x124 < 2) &&
      (*(int *)&this_ptr->field_0x110 == *(int *)&this_ptr->field_0x128)) &&
     (*(int *)&this_ptr->field_0x13c < 1)) {
    if (*(int *)&this_ptr->field_0x13c == 0) {
      return 1;
    }
    return 0;
  }
  return 2;
}
