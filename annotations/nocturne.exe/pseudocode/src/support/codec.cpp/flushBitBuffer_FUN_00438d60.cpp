// Name: support_codec.cpp_flushBitBuffer_FUN_00438d60
// Address: 00438d60
// Address Range: [[00438d60, 00438dbd]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_flushBitBuffer_FUN_00438d60(SBitBuffer *bit_buffer,_ostream *ostream)

#include "nocturne.h"

void __cdecl support_codec_cpp_flushBitBuffer_FUN_00438d60(SBitBuffer *bit_buffer,_ostream *ostream)

{
  int iVar1;
  
  iVar1 = bit_buffer->bits_available;
  while (7 < iVar1) {
    crt_iostream_cpp_ostream_put_FUN_00564ce5(ostream,(uint)(byte)bit_buffer->accumulated_bits);
    iVar1 = bit_buffer->bits_available + -8;
    bit_buffer->accumulated_bits = bit_buffer->accumulated_bits >> 8;
    bit_buffer->bits_available = iVar1;
  }
  if (bit_buffer->bits_available < 1) {
    return;
  }
  crt_iostream_cpp_ostream_put_FUN_00564ce5(ostream,(uint)(byte)bit_buffer->accumulated_bits);
  bit_buffer->accumulated_bits = 0;
  bit_buffer->bits_available = 0;
  return;
}
