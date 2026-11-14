// Name: support_codec.cpp_CInStreamPipe_peekChar_FUN_00443d40
// Address: 00443d40
// Address Range: [[00443d40, 00443d7b]]
// Convention: __cdecl
// Signature: uint __cdecl support_codec_cpp_CInStreamPipe_peekChar_FUN_00443d40(CInStreamPipe *this_ptr)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CInStreamPipe_peekChar_FUN_00443d40(CInStreamPipe *this_ptr)

{
  uint uVar1;
  
  if (this_ptr->buffer == (char *)0x0) {
    return 0xfffffffe;
  }
  if (this_ptr->buffer_length <= this_ptr->position) {
    uVar1 = support_codec_cpp_CInStreamPipe_fillBuffer_FUN_00444020(this_ptr);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  return (uint)(byte)this_ptr->buffer[this_ptr->position];
}
