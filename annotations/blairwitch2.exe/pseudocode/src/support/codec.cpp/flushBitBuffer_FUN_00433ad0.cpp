// Name: support_codec.cpp_flushBitBuffer_FUN_00433ad0
// Address: 00433ad0
// Address Range: [[00433ad0, 00433b16]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_flushBitBuffer_FUN_00433ad0(SBitBuffer *bit_buffer,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_flushBitBuffer_FUN_00433ad0(SBitBuffer *bit_buffer,void *ostream)

{
  int iVar1;
  
  iVar1 = support_codec_cpp_FUN_00433a90(bit_buffer,ostream);
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
