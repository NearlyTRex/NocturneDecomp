// Name: support_codec.cpp_resetBitBuffer_FUN_004400d0
// Address: 004400d0
// Address Range: [[004400d0, 004400e1]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_resetBitBuffer_FUN_004400d0(SBitBuffer *bit_buffer)

#include "nocturne.h"

void __cdecl support_codec_cpp_resetBitBuffer_FUN_004400d0(SBitBuffer *bit_buffer)

{
  bit_buffer->accumulated_bits = 0;
  bit_buffer->bits_available = 0;
  return;
}
