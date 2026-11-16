// Name: support_codec.cpp_CInStreamPipe_ungetChar_FUN_00441970
// Address: 00441970
// Address Range: [[00441970, 00441995]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CInStreamPipe_ungetChar_FUN_00441970(CInStreamPipe *this_ptr,int ch)

#include "nocturne.h"

int __cdecl support_codec_cpp_CInStreamPipe_ungetChar_FUN_00441970(CInStreamPipe *this_ptr,int ch)

{
  if ((this_ptr->buffer != (char *)0x0) && (0 < this_ptr->position)) {
    this_ptr->position = this_ptr->position + -1;
    return 1;
  }
  return 0;
}
