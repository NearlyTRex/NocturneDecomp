// Name: support_trstream.cpp_CInStreamMemory_openOwned_FUN_00574470
// Address: 00574470
// Address Range: [[00574470, 0057449b]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_CInStreamMemory_openOwned_FUN_00574470(CInStreamMemory *this_ptr,int data,int size)

#include "nocturne.h"

void __cdecl support_trstream_cpp_CInStreamMemory_openOwned_FUN_00574470(CInStreamMemory *this_ptr,int data,int size)

{
  (**(code **)((int)(this_ptr->base).vtable + 0x24))(this_ptr);
  this_ptr->position = 0;
  this_ptr->owns_data = 1;
  this_ptr->data = (char *)data;
  this_ptr->size = size;
  return;
}
