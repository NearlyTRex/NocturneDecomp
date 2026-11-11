// Name: support_trstream.cpp_CInStreamMemory_openOwned_FUN_005a1480
// Address: 005a1480
// Address Range: [[005a1480, 005a14ab]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_CInStreamMemory_openOwned_FUN_005a1480(CInStreamMemory *this_ptr,int param_2,int param_3)

#include "nocturne.h"

void __cdecl support_trstream_cpp_CInStreamMemory_openOwned_FUN_005a1480(CInStreamMemory *this_ptr,int param_2,int param_3)

{
  (**(code **)((int)this_ptr->vtable + 0x24))(this_ptr);
  this_ptr->position = 0;
  this_ptr->owns_data = 1;
  this_ptr->data = (char *)param_2;
  this_ptr->size = param_3;
  return;
}
