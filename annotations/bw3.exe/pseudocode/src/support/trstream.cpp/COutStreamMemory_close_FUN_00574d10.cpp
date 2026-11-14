// Name: support_trstream.cpp_COutStreamMemory_close_FUN_00574d10
// Address: 00574d10
// Address Range: [[00574d10, 00574d4a]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_COutStreamMemory_close_FUN_00574d10(COutStreamMemory *this_ptr)

#include "nocturne.h"

void __cdecl support_trstream_cpp_COutStreamMemory_close_FUN_00574d10(COutStreamMemory *this_ptr)

{
  if (this_ptr->buffer != (char *)0x0) {
    if (this_ptr->growable != 0) {
      FUN_005a3770(this_ptr->buffer);
    }
    this_ptr->buffer = (char *)0x0;
  }
  this_ptr->position = 0;
  this_ptr->growable = 1;
  this_ptr->capacity = 0;
  return;
}
