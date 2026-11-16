// Name: support_codec.cpp_CInStreamPipe_ungetChar_FUN_00434ff0
// Address: 00434ff0
// Address Range: [[00434ff0, 00435015]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CInStreamPipe_ungetChar_FUN_00434ff0(CInStreamPipe *this_ptr,int ch)

#include "nocturne.h"

int __cdecl support_codec_cpp_CInStreamPipe_ungetChar_FUN_00434ff0(CInStreamPipe *this_ptr,int ch)

{
  if ((this_ptr->buffer != (char *)0x0) && (0 < this_ptr->position)) {
    this_ptr->position = this_ptr->position + -1;
    return 1;
  }
  return 0;
}
