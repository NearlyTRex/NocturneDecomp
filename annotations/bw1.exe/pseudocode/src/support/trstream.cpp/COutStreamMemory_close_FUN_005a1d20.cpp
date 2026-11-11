// Name: support_trstream.cpp_COutStreamMemory_close_FUN_005a1d20
// Address: 005a1d20
// Address Range: [[005a1d20, 005a1d5a]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_COutStreamMemory_close_FUN_005a1d20(COutStreamMemory *this_ptr)

#include "nocturne.h"

void __cdecl support_trstream_cpp_COutStreamMemory_close_FUN_005a1d20(COutStreamMemory *this_ptr)

{
  if (this_ptr->buffer != (char *)0x0) {
    if (this_ptr->growable != 0) {
      FUN_005c09f0(this_ptr->buffer);
    }
    this_ptr->buffer = (char *)0x0;
  }
  this_ptr->position = 0;
  this_ptr->growable = 1;
  this_ptr->capacity = 0;
  return;
}
