// Name: support_trstream.cpp_CInStreamMemory_close_FUN_005743f0
// Address: 005743f0
// Address Range: [[005743f0, 00574431]]
// Convention: __cdecl
// Signature: void __cdecl support_trstream_cpp_CInStreamMemory_close_FUN_005743f0(CInStreamMemory *this_ptr)

#include "nocturne.h"

void __cdecl support_trstream_cpp_CInStreamMemory_close_FUN_005743f0(CInStreamMemory *this_ptr)

{
  if (this_ptr->data != (char *)0x0) {
    if (this_ptr->owns_data != 0) {
      FUN_005a3770(this_ptr->data);
    }
    this_ptr->data = (char *)0x0;
  }
  this_ptr->size = 0;
  this_ptr->position = 0;
  this_ptr->owns_data = 0;
  this_ptr->data = (char *)0x0;
  return;
}
