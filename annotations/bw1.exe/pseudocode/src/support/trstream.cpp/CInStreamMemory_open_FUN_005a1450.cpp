// Name: support_trstream.cpp_CInStreamMemory_open_FUN_005a1450
// Address: 005a1450
// Address Range: [[005a1450, 005a147b]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_CInStreamMemory_open_FUN_005a1450(CInStreamMemory *this_ptr,int data,int size)

#include "nocturne.h"

void __cdecl support_trstream_cpp_CInStreamMemory_open_FUN_005a1450(CInStreamMemory *this_ptr,int data,int size)

{
  (**(code **)((int)(this_ptr->base).vtable + 0x24))(this_ptr);
  this_ptr->position = 0;
  this_ptr->owns_data = 0;
  this_ptr->data = (char *)data;
  this_ptr->size = size;
  return;
}
