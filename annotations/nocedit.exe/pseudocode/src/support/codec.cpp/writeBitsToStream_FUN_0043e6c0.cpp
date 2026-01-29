// Name: support_codec.cpp_writeBitsToStream_FUN_0043e6c0
// Address: 0043e6c0
// Address Range: [[0043e6c0, 0043e7d4]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_writeBitsToStream_FUN_0043e6c0 (SBitBuffer *bit_buffer,int bit_count,int bit_value,_FILE *output_stream)

#include "nocturne.h"

void __cdecl
support_codec_cpp_writeBitsToStream_FUN_0043e6c0
          (SBitBuffer *bit_buffer,int bit_count,int bit_value,_FILE *output_stream)

{
  int iVar1;
  byte local_14;
  
  iVar1 = bit_buffer->bits_available;
  while (7 < iVar1) {
    _fputc(output_stream,(uint)(byte)bit_buffer->accumulated_bits);
    iVar1 = bit_buffer->bits_available + -8;
    bit_buffer->accumulated_bits = (uint)bit_buffer->accumulated_bits >> 8;
    bit_buffer->bits_available = iVar1;
  }
  if (0 < bit_buffer->bits_available) {
    iVar1 = 8 - bit_buffer->bits_available;
    if (bit_count < iVar1) {
      iVar1 = bit_buffer->bits_available;
      bit_buffer->bits_available = bit_buffer->bits_available + bit_count;
      bit_buffer->accumulated_bits =
           bit_buffer->accumulated_bits | bit_value << ((byte)iVar1 & 0x1f);
    }
    else {
      if (bit_count != iVar1) {
        _fputc(output_stream,
                   (uint)(byte)((char)bit_value << ((byte)bit_buffer->bits_available & 0x1f) |
                               (byte)bit_buffer->accumulated_bits));
        bit_buffer->bits_available = 0;
        local_14 = (byte)iVar1;
        bit_buffer->accumulated_bits = 0;
        bit_value = (uint)bit_value >> (local_14 & 0x1f);
        bit_count = bit_count - iVar1;
        goto LAB_0043e753;
      }
      bit_buffer->accumulated_bits =
           bit_buffer->accumulated_bits | bit_value << ((byte)bit_buffer->bits_available & 0x1f);
      _fputc(output_stream,(uint)(byte)bit_buffer->accumulated_bits);
      bit_buffer->bits_available = 0;
      bit_buffer->accumulated_bits = 0;
    }
    return;
  }
LAB_0043e753:
  for (; 7 < bit_count; bit_count = bit_count + -8) {
    _fputc(output_stream,bit_value & 0xff);
    bit_value = (uint)bit_value >> 8;
  }
  bit_buffer->bits_available = bit_count;
  bit_buffer->accumulated_bits = bit_value;
  return;
}
