// Name: sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00550010
// Address: 00550010
// Address Range: [[00550010, 00550049]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00550010(CSfxSample *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00550010(CSfxSample *this_ptr)

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
