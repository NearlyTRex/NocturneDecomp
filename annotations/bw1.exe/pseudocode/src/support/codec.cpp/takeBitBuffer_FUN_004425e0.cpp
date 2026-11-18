// Name: support_codec.cpp_takeBitBuffer_FUN_004425e0
// Address: 004425e0
// Address Range: [[004425e0, 004425fe]]
// Convention: __cdecl
// Signature: uint __cdecl support_codec_cpp_takeBitBuffer_FUN_004425e0(SBitBuffer *bit_buffer,int *bit_count_out)

#include "nocturne.h"

uint __cdecl support_codec_cpp_takeBitBuffer_FUN_004425e0(SBitBuffer *bit_buffer,int *bit_count_out)

{
  uint uVar1;
  
  uVar1 = bit_buffer->accumulated_bits;
  *bit_count_out = bit_buffer->bits_available;
  bit_buffer->accumulated_bits = 0;
  bit_buffer->bits_available = 0;
  return uVar1;
}
