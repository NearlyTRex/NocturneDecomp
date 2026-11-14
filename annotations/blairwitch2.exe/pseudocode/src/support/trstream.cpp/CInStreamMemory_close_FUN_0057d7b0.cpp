// Name: support_trstream.cpp_CInStreamMemory_close_FUN_0057d7b0
// Address: 0057d7b0
// Address Range: [[0057d7b0, 0057d7f1]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_CInStreamMemory_close_FUN_0057d7b0(CInStreamMemory *this_ptr)

#include "nocturne.h"

void __cdecl support_trstream_cpp_CInStreamMemory_close_FUN_0057d7b0(CInStreamMemory *this_ptr)

{
  if (this_ptr->data != (char *)0x0) {
    if (this_ptr->owns_data != 0) {
      FUN_005b86a0(this_ptr->data);
    }
    this_ptr->data = (char *)0x0;
  }
  this_ptr->size = 0;
  this_ptr->position = 0;
  this_ptr->owns_data = 0;
  this_ptr->data = (char *)0x0;
  return;
}
