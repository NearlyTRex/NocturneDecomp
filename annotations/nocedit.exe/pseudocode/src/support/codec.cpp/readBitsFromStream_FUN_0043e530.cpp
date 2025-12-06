// Name: support_codec.cpp_readBitsFromStream_FUN_0043e530
// Address: 0043e530
// Address Range: [[0043e530, 0043e6b8]]
// Convention: __cdecl
// Signature: int support_codec.cpp_readBitsFromStream_FUN_0043e530(SBitBuffer * bit_buffer, int bit_count, FILE * file_stream, int * bytes_remaining)

#include "nocturne.h"

int __cdecl
support_codec_cpp_readBitsFromStream_FUN_0043e530
          (SBitBuffer *bit_buffer,int bit_count,FILE *file_stream,int *bytes_remaining)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  uint uVar6;
  uchar local_18 [4];
  byte local_14 [4];
  
  if (bit_count < bit_buffer->bits_available) {
    uVar6 = bit_buffer->accumulated_bits;
    bit_buffer->accumulated_bits = uVar6 >> ((byte)bit_count & 0x1f);
    uVar6 = ~(-1 << ((byte)bit_count & 0x1f)) & uVar6;
    bit_buffer->bits_available = bit_buffer->bits_available - bit_count;
  }
  else if (bit_count == bit_buffer->bits_available) {
    bit_buffer->bits_available = 0;
    uVar6 = bit_buffer->accumulated_bits;
    bit_buffer->accumulated_bits = 0;
  }
  else {
    iVar2 = bit_buffer->bits_available;
    uVar6 = bit_buffer->accumulated_bits;
    iVar1 = bit_buffer->bits_available;
    bit_buffer->bits_available = 0;
    bit_buffer->accumulated_bits = 0;
    piVar4 = (int *)(bit_count - iVar1);
    uVar6 = ~(-1 << ((byte)iVar2 & 0x1f)) & uVar6;
    iVar2 = iVar1;
    while( true ) {
      iVar5 = iVar1;
      if ((int)piVar4 < 8) {
        if (0 < (int)piVar4) {
          if ((*bytes_remaining < 1) ||
             (crt_stdio_c_fgetc_FUN_005ff245(file_stream,local_18),
             *(int *)((int)&file_stream->_handle + *(int *)(file_stream->_ptr + 4)) != 0)) {
            uVar3 = 0xffffffff;
          }
          else {
            *bytes_remaining = *bytes_remaining + -1;
            uVar3 = (uint)local_14[0];
          }
          piVar4[1] = uVar3;
          if ((int)uVar3 < 0) {
            piVar4[1] = uVar6;
            *piVar4 = iVar5;
            return -1;
          }
          uVar6 = uVar6 | (~(-1 << ((byte)file_stream & 0x1f)) & piVar4[1]) << ((byte)iVar5 & 0x1f);
          piVar4[1] = (uint)piVar4[1] >> ((byte)file_stream & 0x1f);
          *piVar4 = 8 - (int)file_stream;
        }
        return uVar6;
      }
      if ((*bytes_remaining < 1) ||
         (crt_stdio_c_fgetc_FUN_005ff245(file_stream,local_14),
         *(int *)((int)&file_stream->_handle + *(int *)(file_stream->_ptr + 4)) != 0)) break;
      *bytes_remaining = *bytes_remaining + -1;
      uVar6 = uVar6 | (uint)local_14[0] << ((byte)iVar2 & 0x1f);
      piVar4 = piVar4 + -2;
      iVar5 = iVar2 + 8;
      iVar2 = iVar5;
    }
    bit_buffer->accumulated_bits = uVar6;
    bit_buffer->bits_available = iVar2;
    uVar6 = 0xffffffff;
  }
  return uVar6;
}
