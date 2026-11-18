// Name: support_trstream.cpp_CInStreamMemory_openOwned_FUN_0057d830
// Address: 0057d830
// Address Range: [[0057d830, 0057d85b]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_CInStreamMemory_openOwned_FUN_0057d830(CInStreamMemory *this_ptr,int data,int size)

#include "nocturne.h"

void __cdecl support_trstream_cpp_CInStreamMemory_openOwned_FUN_0057d830(CInStreamMemory *this_ptr,int data,int size)

{
  (**(code **)((int)(this_ptr->base).vtable + 0x24))(this_ptr);
  this_ptr->position = 0;
  this_ptr->owns_data = 1;
  this_ptr->data = (char *)data;
  this_ptr->size = size;
  return;
}
