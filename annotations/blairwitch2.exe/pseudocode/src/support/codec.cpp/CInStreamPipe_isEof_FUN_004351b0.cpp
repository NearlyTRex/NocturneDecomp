// Name: support_codec.cpp_CInStreamPipe_isEof_FUN_004351b0
// Address: 004351b0
// Address Range: [[004351b0, 004351de]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_codec_cpp_CInStreamPipe_isEof_FUN_004351b0(CInStreamPipe *this_ptr)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CInStreamPipe_isEof_FUN_004351b0(CInStreamPipe *this_ptr)

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
