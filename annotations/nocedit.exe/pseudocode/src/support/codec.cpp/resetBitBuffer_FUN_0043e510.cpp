// Name: support_codec.cpp_resetBitBuffer_FUN_0043e510
// Address: 0043e510
// Address Range: [[0043e510, 0043e521]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_resetBitBuffer_FUN_0043e510(SBitBuffer *bit_buffer)

#include "nocturne.h"

void __cdecl support_codec_cpp_resetBitBuffer_FUN_0043e510(SBitBuffer *bit_buffer)

{
  bit_buffer->accumulated_bits = 0;
  bit_buffer->bits_available = 0;
  return;
}
