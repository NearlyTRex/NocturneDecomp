// Name: support_trstream.cpp_CInStreamMemory_openOwned_FUN_0057d830
// Address: 0057d830
// Address Range: [[0057d830, 0057d85b]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_CInStreamMemory_openOwned_FUN_0057d830(CInStreamMemory *this_ptr,int param_2,int param_3)

#include "nocturne.h"

void __cdecl support_trstream_cpp_CInStreamMemory_openOwned_FUN_0057d830(CInStreamMemory *this_ptr,int param_2,int param_3)

{
  (**(code **)((int)(this_ptr->base).vtable + 0x24))(this_ptr);
  this_ptr->position = 0;
  this_ptr->owns_data = 1;
  this_ptr->data = (char *)param_2;
  this_ptr->size = param_3;
  return;
}
