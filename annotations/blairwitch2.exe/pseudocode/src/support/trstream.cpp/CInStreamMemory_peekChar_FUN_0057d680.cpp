// Name: support_trstream.cpp_CInStreamMemory_peekChar_FUN_0057d680
// Address: 0057d680
// Address Range: [[0057d680, 0057d6ac]]
// Convention: __cdecl
// Signature: uint __cdecl support_trstream_cpp_CInStreamMemory_peekChar_FUN_0057d680(CInStreamMemory *this_ptr)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamMemory_peekChar_FUN_0057d680(CInStreamMemory *this_ptr)

{
  if (this_ptr->data == (char *)0x0) {
    return 0xfffffffe;
  }
  if (this_ptr->size <= this_ptr->position) {
    return 0xffffffff;
  }
  return (uint)(byte)this_ptr->data[this_ptr->position];
}
