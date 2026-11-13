// Name: support_trstream.cpp_CInStreamMemory_tell_FUN_005a13b0
// Address: 005a13b0
// Address Range: [[005a13b0, 005a13bf] [005a13c6, 005a13c9]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamMemory_tell_FUN_005a13b0(CInStreamMemory *this_ptr)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamMemory_tell_FUN_005a13b0(CInStreamMemory *this_ptr)

{
  if (this_ptr->data == (char *)0x0) {
    return -1;
  }
  return this_ptr->position;
}
