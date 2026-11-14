// Name: support_trstream.cpp_CInStreamMemory_getChar_FUN_0057d600
// Address: 0057d600
// Address Range: [[0057d600, 0057d63e]]
// Convention: __cdecl
// Signature: uint __cdecl support_trstream_cpp_CInStreamMemory_getChar_FUN_0057d600(CInStreamMemory *this_ptr)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamMemory_getChar_FUN_0057d600(CInStreamMemory *this_ptr)

{
  byte bVar1;
  
  if (this_ptr->data == (char *)0x0) {
    return 0xfffffffe;
  }
  if (this_ptr->size <= this_ptr->position) {
    return 0xffffffff;
  }
  bVar1 = this_ptr->data[this_ptr->position];
  this_ptr->position = this_ptr->position + 1;
  return (uint)bVar1;
}
