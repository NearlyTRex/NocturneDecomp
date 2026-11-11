// Name: support_codec.cpp_CInStreamPipe_getChar_FUN_00434fa0
// Address: 00434fa0
// Address Range: [[00434fa0, 00434fe3]]
// Convention: __cdecl
// Signature: uint __cdecl support_codec_cpp_CInStreamPipe_getChar_FUN_00434fa0(CInStreamPipe *this_ptr)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CInStreamPipe_getChar_FUN_00434fa0(CInStreamPipe *this_ptr)

{
  byte bVar1;
  uint uVar2;
  
  if (this_ptr->buffer == (char *)0x0) {
    return 0xfffffffe;
  }
  if (this_ptr->buffer_length <= this_ptr->position) {
    uVar2 = support_codec_cpp_CInStreamPipe_fillBuffer_FUN_00435300(this_ptr);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  bVar1 = this_ptr->buffer[this_ptr->position];
  this_ptr->position = this_ptr->position + 1;
  return (uint)bVar1;
}
