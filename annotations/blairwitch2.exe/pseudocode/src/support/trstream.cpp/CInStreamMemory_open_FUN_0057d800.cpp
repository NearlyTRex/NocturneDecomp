// Name: support_trstream.cpp_CInStreamMemory_open_FUN_0057d800
// Address: 0057d800
// Address Range: [[0057d800, 0057d82b]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_CInStreamMemory_open_FUN_0057d800(CInStreamMemory *this_ptr,int param_2,int param_3)

#include "nocturne.h"

void __cdecl support_trstream_cpp_CInStreamMemory_open_FUN_0057d800(CInStreamMemory *this_ptr,int param_2,int param_3)

{
  (**(code **)((int)this_ptr->vtable + 0x24))(this_ptr);
  this_ptr->position = 0;
  this_ptr->owns_data = 0;
  this_ptr->data = (char *)param_2;
  this_ptr->size = param_3;
  return;
}
