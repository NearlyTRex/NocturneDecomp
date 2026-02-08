// Name: support_codec.cpp_flushBitBuffer_FUN_0043e7e0
// Address: 0043e7e0
// Address Range: [[0043e7e0, 0043e83d]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_flushBitBuffer_FUN_0043e7e0(SBitBuffer *bit_buffer,_FILE *output_stream)

#include "nocturne.h"

void __cdecl
support_codec_cpp_flushBitBuffer_FUN_0043e7e0(SBitBuffer *bit_buffer,_FILE *output_stream)

{
  int iVar1;
  
  iVar1 = bit_buffer->bits_available;
  while (7 < iVar1) {
    crt_iostream_cpp_ostream_put_FUN_005ff2d7
              ((ostream *)output_stream,(uint)(byte)bit_buffer->accumulated_bits);
    iVar1 = bit_buffer->bits_available + -8;
    bit_buffer->accumulated_bits = (uint)bit_buffer->accumulated_bits >> 8;
    bit_buffer->bits_available = iVar1;
  }
  if (bit_buffer->bits_available < 1) {
    return;
  }
  crt_iostream_cpp_ostream_put_FUN_005ff2d7
            ((ostream *)output_stream,(uint)(byte)bit_buffer->accumulated_bits);
  bit_buffer->accumulated_bits = 0;
  bit_buffer->bits_available = 0;
  return;
}
