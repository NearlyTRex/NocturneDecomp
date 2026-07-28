// Name: support_codec.cpp_resetBitBuffer_FUN_00438a90
// Address: 00438a90
// Address Range: [[00438a90, 00438aa1]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_resetBitBuffer_FUN_00438a90(SBitBuffer *bit_buffer)

#include "nocturne.h"

void __cdecl support_codec_cpp_resetBitBuffer_FUN_00438a90(SBitBuffer *bit_buffer)

{
  bit_buffer->accumulated_bits = 0;
  bit_buffer->bits_available = 0;
  return;
}
