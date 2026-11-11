// Name: support_trstream.cpp_COutStreamMemory_seek_FUN_0057e070
// Address: 0057e070
// Address Range: [[0057e070, 0057e0b2]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_COutStreamMemory_seek_FUN_0057e070(COutStreamMemory *this_ptr,int param_2,uint param_3)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_COutStreamMemory_seek_FUN_0057e070(COutStreamMemory *this_ptr,int param_2,uint param_3)

{
  if (param_3 != 0) {
    if (param_3 < 2) {
      param_2 = param_2 + this_ptr->position;
    }
    else {
      if (param_3 != 2) {
        return 0;
      }
      param_2 = param_2 + this_ptr->capacity;
    }
  }
  if ((-1 < param_2) && ((param_2 <= this_ptr->capacity || (this_ptr->growable != 0)))) {
    this_ptr->position = param_2;
    return 1;
  }
  return 0;
}
