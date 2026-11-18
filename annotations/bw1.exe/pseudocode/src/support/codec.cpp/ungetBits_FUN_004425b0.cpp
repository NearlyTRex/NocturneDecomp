// Name: support_codec.cpp_ungetBits_FUN_004425b0
// Address: 004425b0
// Address Range: [[004425b0, 004425d9]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_ungetBits_FUN_004425b0(SBitBuffer *bit_buffer,int bit_count,uint bits)

#include "nocturne.h"

void __cdecl support_codec_cpp_ungetBits_FUN_004425b0(SBitBuffer *bit_buffer,int bit_count,uint bits)

{
  uint uVar1;
  
  if (0 < bit_count) {
    uVar1 = bit_buffer->accumulated_bits << ((byte)bit_count & 0x1f);
    bit_buffer->accumulated_bits = uVar1;
    bit_buffer->bits_available = bit_buffer->bits_available + bit_count;
    bit_buffer->accumulated_bits = uVar1 | bits;
  }
  return;
}
