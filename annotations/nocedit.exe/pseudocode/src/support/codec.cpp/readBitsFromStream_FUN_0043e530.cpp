// Name: support_codec.cpp_readBitsFromStream_FUN_0043e530
// Address: 0043e530
// Address Range: [[0043e530, 0043e6b8]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_readBitsFromStream_FUN_0043e530 (SBitBuffer *bit_buffer,int bit_count,FILE *file_stream,int *bytes_remaining)

#include "nocturne.h"

int __cdecl
support_codec_cpp_readBitsFromStream_FUN_0043e530
          (SBitBuffer *bit_buffer,int bit_count,FILE *file_stream,int *bytes_remaining)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte local_18 [4];
  byte local_14 [4];
  
  if (bit_count < bit_buffer->bits_available) {
    uVar5 = bit_buffer->accumulated_bits;
    bit_buffer->accumulated_bits = uVar5 >> ((byte)bit_count & 0x1f);
    uVar5 = ~(-1 << ((byte)bit_count & 0x1f)) & uVar5;
    bit_buffer->bits_available = bit_buffer->bits_available - bit_count;
  }
  else if (bit_count == bit_buffer->bits_available) {
    bit_buffer->bits_available = 0;
    uVar5 = bit_buffer->accumulated_bits;
    bit_buffer->accumulated_bits = 0;
  }
  else {
    iVar1 = bit_buffer->bits_available;
    uVar5 = bit_buffer->accumulated_bits;
    iVar4 = bit_buffer->bits_available;
    bit_buffer->bits_available = 0;
    bit_buffer->accumulated_bits = 0;
    iVar3 = bit_count - iVar4;
    uVar5 = ~(-1 << ((byte)iVar1 & 0x1f)) & uVar5;
    while( true ) {
      if (iVar3 < 8) {
        if (0 < iVar3) {
          if ((*bytes_remaining < 1) ||
             (crt_stdio_c_fgetc_outptr_FUN_005ff245(file_stream,local_18),
             *(int *)((int)&file_stream->_handle + *(int *)(file_stream->_ptr + 4)) != 0)) {
            uVar2 = 0xffffffff;
          }
          else {
            *bytes_remaining = *bytes_remaining + -1;
            uVar2 = (uint)local_18[0];
          }
          bit_buffer->accumulated_bits = uVar2;
          if ((int)uVar2 < 0) {
            bit_buffer->accumulated_bits = uVar5;
            bit_buffer->bits_available = iVar4;
            return -1;
          }
          bit_count._0_1_ = (byte)iVar3;
          uVar5 = uVar5 | (~(-1 << ((byte)bit_count & 0x1f)) & bit_buffer->accumulated_bits) <<
                          ((byte)iVar4 & 0x1f);
          bit_buffer->accumulated_bits =
               (uint)bit_buffer->accumulated_bits >> ((byte)bit_count & 0x1f);
          bit_buffer->bits_available = 8 - iVar3;
        }
        return uVar5;
      }
      if ((*bytes_remaining < 1) ||
         (crt_stdio_c_fgetc_outptr_FUN_005ff245(file_stream,local_14),
         *(int *)((int)&file_stream->_handle + *(int *)(file_stream->_ptr + 4)) != 0)) break;
      *bytes_remaining = *bytes_remaining + -1;
      uVar5 = uVar5 | (uint)local_14[0] << ((byte)iVar4 & 0x1f);
      iVar3 = iVar3 + -8;
      iVar4 = iVar4 + 8;
    }
    bit_buffer->accumulated_bits = uVar5;
    bit_buffer->bits_available = iVar4;
    uVar5 = 0xffffffff;
  }
  return uVar5;
}
