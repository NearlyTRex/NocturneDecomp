// Name: support_codec.cpp_flushBitBuffer_FUN_004427e0
// Address: 004427e0
// Address Range: [[004427e0, 00442826]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_flushBitBuffer_FUN_004427e0(SBitBuffer *bit_buffer,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_flushBitBuffer_FUN_004427e0(SBitBuffer *bit_buffer,void *ostream)

{
  int iVar1;
  
  iVar1 = support_codec_cpp_FUN_004427a0(bit_buffer,ostream);
  if (-1 < iVar1) {
    if (bit_buffer->bits_available < 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(*(int *)ostream + 4))(ostream,(char)bit_buffer->accumulated_bits);
      if (-1 < iVar1) {
        bit_buffer->bits_available = 0;
        bit_buffer->accumulated_bits = 0;
        return 0;
      }
    }
  }
  return iVar1;
}
