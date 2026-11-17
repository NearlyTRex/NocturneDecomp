// Name: support_trstream.cpp_COutStreamMemory_open_FUN_00574d50
// Address: 00574d50
// Address Range: [[00574d50, 00574d82]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_COutStreamMemory_open_FUN_00574d50(COutStreamMemory *this_ptr,int buffer,int capacity)

#include "nocturne.h"

void __cdecl support_trstream_cpp_COutStreamMemory_open_FUN_00574d50(COutStreamMemory *this_ptr,int buffer,int capacity)

{
  (**(code **)((int)(this_ptr->base).vtable + 0x14))(this_ptr);
  this_ptr->position = 0;
  this_ptr->length = 0;
  this_ptr->growable = 0;
  this_ptr->buffer = (char *)buffer;
  this_ptr->capacity = capacity;
  return;
}
