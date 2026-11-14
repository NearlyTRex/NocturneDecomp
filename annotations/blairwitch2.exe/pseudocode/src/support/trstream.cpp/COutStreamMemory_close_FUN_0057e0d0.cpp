// Name: support_trstream.cpp_COutStreamMemory_close_FUN_0057e0d0
// Address: 0057e0d0
// Address Range: [[0057e0d0, 0057e10a]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_COutStreamMemory_close_FUN_0057e0d0(COutStreamMemory *this_ptr)

#include "nocturne.h"

void __cdecl support_trstream_cpp_COutStreamMemory_close_FUN_0057e0d0(COutStreamMemory *this_ptr)

{
  if (this_ptr->buffer != (char *)0x0) {
    if (this_ptr->growable != 0) {
      FUN_005b86a0(this_ptr->buffer);
    }
    this_ptr->buffer = (char *)0x0;
  }
  this_ptr->position = 0;
  this_ptr->growable = 1;
  this_ptr->capacity = 0;
  return;
}
