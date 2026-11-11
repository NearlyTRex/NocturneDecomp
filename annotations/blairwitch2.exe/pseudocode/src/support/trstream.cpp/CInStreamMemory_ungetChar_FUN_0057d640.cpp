// Name: support_trstream.cpp_CInStreamMemory_ungetChar_FUN_0057d640
// Address: 0057d640
// Address Range: [[0057d640, 0057d674]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_CInStreamMemory_ungetChar_FUN_0057d640(CInStreamMemory *this_ptr,int param_2)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamMemory_ungetChar_FUN_0057d640(CInStreamMemory *this_ptr,int param_2)

{
  if ((((-1 < param_2) && (param_2 < 0x100)) && (this_ptr->data != (char *)0x0)) &&
     (0 < this_ptr->position)) {
    this_ptr->position = this_ptr->position + -1;
    return 1;
  }
  return 0;
}
