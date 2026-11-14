// Name: support_trstream.cpp_CInStreamMemory_tell_FUN_0057d760
// Address: 0057d760
// Address Range: [[0057d760, 0057d76f] [0057d776, 0057d779]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamMemory_tell_FUN_0057d760(CInStreamMemory *this_ptr)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamMemory_tell_FUN_0057d760(CInStreamMemory *this_ptr)

{
  if (this_ptr->data == (char *)0x0) {
    return -1;
  }
  return this_ptr->position;
}
