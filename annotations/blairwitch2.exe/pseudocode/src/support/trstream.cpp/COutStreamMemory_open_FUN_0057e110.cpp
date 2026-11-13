// Name: support_trstream.cpp_COutStreamMemory_open_FUN_0057e110
// Address: 0057e110
// Address Range: [[0057e110, 0057e142]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_COutStreamMemory_open_FUN_0057e110(COutStreamMemory *this_ptr,int param_2,int param_3)

#include "nocturne.h"

void __cdecl support_trstream_cpp_COutStreamMemory_open_FUN_0057e110(COutStreamMemory *this_ptr,int param_2,int param_3)

{
  (**(code **)((int)(this_ptr->base).vtable + 0x14))(this_ptr);
  this_ptr->position = 0;
  this_ptr->length = 0;
  this_ptr->growable = 0;
  this_ptr->buffer = (char *)param_2;
  this_ptr->capacity = param_3;
  return;
}
