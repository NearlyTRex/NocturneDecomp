// Name: support_codec.cpp_CInStreamPipe_isEof_FUN_00441b30
// Address: 00441b30
// Address Range: [[00441b30, 00441b5e]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_codec_cpp_CInStreamPipe_isEof_FUN_00441b30(CInStreamPipe *this_ptr)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CInStreamPipe_isEof_FUN_00441b30(CInStreamPipe *this_ptr)

{
  if (((this_ptr->buffer != (char *)0x0) && (this_ptr->codec != (CCodec *)0x0)) &&
     (this_ptr->source != (void *)0x0)) {
    if (this_ptr->position < this_ptr->buffer_length) {
      return 0;
    }
    return this_ptr->codec_finished;
  }
  return 0xffffffff;
}
