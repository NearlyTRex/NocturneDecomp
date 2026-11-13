// Name: support_trstream.cpp_COutStreamMemory_seek_FUN_005a1cc0
// Address: 005a1cc0
// Address Range: [[005a1cc0, 005a1d02]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamMemory_seek_FUN_005a1cc0(COutStreamMemory *this_ptr,int offset,int origin)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamMemory_seek_FUN_005a1cc0(COutStreamMemory *this_ptr,int offset,int origin)

{
  if (origin != 0) {
    if ((uint)origin < 2) {
      offset = offset + this_ptr->position;
    }
    else {
      if (origin != 2) {
        return 0;
      }
      offset = offset + this_ptr->capacity;
    }
  }
  if ((-1 < offset) && ((offset <= this_ptr->capacity || (this_ptr->growable != 0)))) {
    this_ptr->position = offset;
    return 1;
  }
  return 0;
}
