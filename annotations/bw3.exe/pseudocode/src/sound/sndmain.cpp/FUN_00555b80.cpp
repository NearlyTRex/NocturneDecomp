// Name: sound_sndmain.cpp_FUN_00555b80
// Address: 00555b80
// Address Range: [[00555b80, 00555bc1]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_00555b80(CSfxSample *this_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_FUN_00555b80(CSfxSample *this_ptr)

{
  if (*(int *)&this_ptr->field_0x124 < 2) {
    if ((*(int *)&this_ptr->field_0x110 <= *(int *)&this_ptr->field_0x128) &&
       (*(int *)&this_ptr->field_0x13c < 1)) {
      if ((*(int *)&this_ptr->field_0x110 <= *(int *)&this_ptr->field_0x128) &&
         (*(int *)&this_ptr->field_0x13c == 0)) {
        return 1;
      }
      return 0;
    }
  }
  return 2;
}
