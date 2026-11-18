// Name: support_codec.cpp_takeBitBuffer_FUN_004338d0
// Address: 004338d0
// Address Range: [[004338d0, 004338ee]]
// Convention: __cdecl
// Signature: uint __cdecl support_codec_cpp_takeBitBuffer_FUN_004338d0(SBitBuffer *bit_buffer,int *bit_count_out)

#include "nocturne.h"

uint __cdecl support_codec_cpp_takeBitBuffer_FUN_004338d0(SBitBuffer *bit_buffer,int *bit_count_out)

{
  uint uVar1;
  
  uVar1 = bit_buffer->accumulated_bits;
  *bit_count_out = bit_buffer->bits_available;
  bit_buffer->accumulated_bits = 0;
  bit_buffer->bits_available = 0;
  return uVar1;
}
