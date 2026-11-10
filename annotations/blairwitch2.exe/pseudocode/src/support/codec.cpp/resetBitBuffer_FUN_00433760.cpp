// Name: support_codec.cpp_resetBitBuffer_FUN_00433760
// Address: 00433760
// Address Range: [[00433760, 00433771]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_resetBitBuffer_FUN_00433760(SBitBuffer *bit_buffer)

#include "nocturne.h"

void __cdecl support_codec_cpp_resetBitBuffer_FUN_00433760(SBitBuffer *bit_buffer)

{
  bit_buffer->accumulated_bits = 0;
  bit_buffer->bits_available = 0;
  return;
}
