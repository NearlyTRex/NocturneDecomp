// Name: support_trstream.cpp_CInStreamMemory_ungetChar_FUN_005a1290
// Address: 005a1290
// Address Range: [[005a1290, 005a12c4]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamMemory_ungetChar_FUN_005a1290(CInStreamMemory *this_ptr,int ch)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamMemory_ungetChar_FUN_005a1290(CInStreamMemory *this_ptr,int ch)

{
  if ((((-1 < ch) && (ch < 0x100)) && (this_ptr->data != (char *)0x0)) && (0 < this_ptr->position))
  {
    this_ptr->position = this_ptr->position + -1;
    return 1;
  }
  return 0;
}
