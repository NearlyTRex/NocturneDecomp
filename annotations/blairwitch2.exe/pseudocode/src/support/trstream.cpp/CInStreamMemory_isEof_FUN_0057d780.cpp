// Name: support_trstream.cpp_CInStreamMemory_isEof_FUN_0057d780
// Address: 0057d780
// Address Range: [[0057d780, 0057d7a4]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_CInStreamMemory_isEof_FUN_0057d780(CInStreamMemory *this_ptr)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamMemory_isEof_FUN_0057d780(CInStreamMemory *this_ptr)

{
  if (this_ptr->data == (char *)0x0) {
    return 0xffffffff;
  }
  if (this_ptr->size <= this_ptr->position) {
    return 1;
  }
  return 0;
}
