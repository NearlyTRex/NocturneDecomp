// Name: support_codec.cpp_writeWholeBytesToStream_FUN_00433a90
// Address: 00433a90
// Address Range: [[00433a90, 00433acf]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_writeWholeBytesToStream_FUN_00433a90(SBitBuffer *bit_buffer,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_writeWholeBytesToStream_FUN_00433a90(SBitBuffer *bit_buffer,void *ostream)

{
  int iVar1;
  
  iVar1 = bit_buffer->bits_available;
  while( true ) {
    if (iVar1 < 8) {
      return 0;
    }
    iVar1 = (**(code **)(*(int *)ostream + 4))(ostream,(char)bit_buffer->accumulated_bits);
    if (iVar1 < 0) break;
    iVar1 = bit_buffer->bits_available + -8;
    bit_buffer->accumulated_bits = bit_buffer->accumulated_bits >> 8;
    bit_buffer->bits_available = iVar1;
  }
  return iVar1;
}
