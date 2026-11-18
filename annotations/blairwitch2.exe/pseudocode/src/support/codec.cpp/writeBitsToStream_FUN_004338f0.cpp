// Name: support_codec.cpp_writeBitsToStream_FUN_004338f0
// Address: 004338f0
// Address Range: [[004338f0, 00433a84]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_writeBitsToStream_FUN_004338f0(SBitBuffer *bit_buffer,int bit_count,uint bit_value,void *ostream)

#include "nocturne.h"

int __cdecl support_codec_cpp_writeBitsToStream_FUN_004338f0(SBitBuffer *bit_buffer,int bit_count,uint bit_value,void *ostream)

{
  int iVar1;
  int iVar2;
  byte local_14;
  
  iVar1 = support_codec_cpp_writeWholeBytesToStream_FUN_00433a90(bit_buffer,ostream);
  if (iVar1 < 0) {
    if (iVar1 != -1) {
      return -3;
    }
    if (0x1f < bit_buffer->bits_available + bit_count) {
      return -1;
    }
    iVar1 = bit_buffer->bits_available;
    bit_buffer->bits_available = bit_buffer->bits_available + bit_count;
    bit_buffer->accumulated_bits = bit_buffer->accumulated_bits | bit_value << ((byte)iVar1 & 0x1f);
    return -2;
  }
  if (0 < bit_buffer->bits_available) {
    iVar1 = 8 - bit_buffer->bits_available;
    if (bit_count < iVar1) {
      bit_buffer->accumulated_bits =
           bit_buffer->accumulated_bits | bit_value << ((byte)bit_buffer->bits_available & 0x1f);
      bit_buffer->bits_available = bit_buffer->bits_available + bit_count;
      return 0;
    }
    iVar2 = (**(code **)(*(int *)ostream + 4))
                      (ostream,(char)bit_value << ((byte)bit_buffer->bits_available & 0x1f) |
                               (byte)bit_buffer->accumulated_bits);
    if (iVar2 == -1) {
      if (0x1f < bit_buffer->bits_available + bit_count) {
        return -1;
      }
      iVar1 = bit_buffer->bits_available;
      bit_buffer->bits_available = bit_buffer->bits_available + bit_count;
      bit_buffer->accumulated_bits =
           bit_buffer->accumulated_bits | bit_value << ((byte)iVar1 & 0x1f);
      return -2;
    }
    if (iVar2 < 0) {
      return -3;
    }
    if (bit_count == iVar1) {
      bit_buffer->accumulated_bits = 0;
      bit_buffer->bits_available = 0;
      return 0;
    }
    local_14 = (byte)iVar1;
    bit_buffer->bits_available = 0;
    bit_buffer->accumulated_bits = 0;
    bit_value = bit_value >> (local_14 & 0x1f);
    bit_count = bit_count - iVar1;
  }
  iVar1 = 0;
  if (7 < bit_count) {
    while (iVar1 = (**(code **)(*(int *)ostream + 4))(ostream,bit_value & 0xff), iVar1 != -1) {
      if (iVar1 < 0) {
        bit_buffer->bits_available = bit_count;
        bit_buffer->accumulated_bits = bit_value;
        return -3;
      }
      bit_value = bit_value >> 8;
      bit_count = bit_count + -8;
      if (bit_count < 8) {
        bit_buffer->bits_available = bit_count;
        bit_buffer->accumulated_bits = bit_value;
        return iVar1;
      }
    }
    iVar1 = -2;
  }
  bit_buffer->bits_available = bit_count;
  bit_buffer->accumulated_bits = bit_value;
  return iVar1;
}
