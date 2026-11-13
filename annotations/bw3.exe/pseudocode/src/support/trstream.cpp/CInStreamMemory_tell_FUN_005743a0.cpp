// Name: support_trstream.cpp_CInStreamMemory_tell_FUN_005743a0
// Address: 005743a0
// Address Range: [[005743a0, 005743af] [005743b6, 005743b9]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamMemory_tell_FUN_005743a0(CInStreamMemory *this_ptr)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamMemory_tell_FUN_005743a0(CInStreamMemory *this_ptr)

{
  if (this_ptr->data == (char *)0x0) {
    return -1;
  }
  return this_ptr->position;
}
