// Name: support_trstream.cpp_CInStreamMemory_ungetChar_FUN_00574280
// Address: 00574280
// Address Range: [[00574280, 005742b4]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_CInStreamMemory_ungetChar_FUN_00574280(CInStreamMemory *this_ptr,int ch)

#include "nocturne.h"

int __cdecl support_trstream_cpp_CInStreamMemory_ungetChar_FUN_00574280(CInStreamMemory *this_ptr,int ch)

{
  if ((((-1 < ch) && (ch < 0x100)) && (this_ptr->data != (char *)0x0)) && (0 < this_ptr->position))
  {
    this_ptr->position = this_ptr->position + -1;
    return 1;
  }
  return 0;
}
