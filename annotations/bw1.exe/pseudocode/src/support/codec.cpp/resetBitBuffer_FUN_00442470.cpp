// Name: support_codec.cpp_resetBitBuffer_FUN_00442470
// Address: 00442470
// Address Range: [[00442470, 00442481]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_resetBitBuffer_FUN_00442470(SBitBuffer *bit_buffer)

#include "nocturne.h"

void __cdecl support_codec_cpp_resetBitBuffer_FUN_00442470(SBitBuffer *bit_buffer)

{
  bit_buffer->accumulated_bits = 0;
  bit_buffer->bits_available = 0;
  return;
}
