// Name: support_trstream.cpp_COutStreamMemory_open_FUN_005a1d60
// Address: 005a1d60
// Address Range: [[005a1d60, 005a1d92]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_COutStreamMemory_open_FUN_005a1d60(COutStreamMemory *this_ptr,int param_2,int param_3)

#include "nocturne.h"

void __cdecl support_trstream_cpp_COutStreamMemory_open_FUN_005a1d60(COutStreamMemory *this_ptr,int param_2,int param_3)

{
  (**(code **)((int)(this_ptr->base).vtable + 0x14))(this_ptr);
  this_ptr->position = 0;
  this_ptr->length = 0;
  this_ptr->growable = 0;
  this_ptr->buffer = (char *)param_2;
  this_ptr->capacity = param_3;
  return;
}
