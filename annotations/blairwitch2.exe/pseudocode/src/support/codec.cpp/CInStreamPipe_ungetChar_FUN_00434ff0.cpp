// Name: support_codec.cpp_CInStreamPipe_ungetChar_FUN_00434ff0
// Address: 00434ff0
// Address Range: [[00434ff0, 00435015]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_codec_cpp_CInStreamPipe_ungetChar_FUN_00434ff0(CInStreamPipe *this_ptr)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CInStreamPipe_ungetChar_FUN_00434ff0(CInStreamPipe *this_ptr)

{
  if ((this_ptr->buffer != (char *)0x0) && (0 < this_ptr->position)) {
    this_ptr->position = this_ptr->position + -1;
    return 1;
  }
  return 0;
}
