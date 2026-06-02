// Name: support_codec.cpp_readBitsFromStream_FUN_0043e530
// Address: 0043e530
// MANUAL RECONSTRUCTION
// Address Range: [[0043e530, 0043e6b8]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_readBitsFromStream_FUN_0043e530(SBitBuffer *bit_buffer,int bit_count,_istream *istream,int *bytes_remaining)

#include "nocturne.h"
#include "stream_compat.h"

int __cdecl support_codec_cpp_readBitsFromStream_FUN_0043e530(SBitBuffer *bit_buffer,int bit_count,_istream *istream,int *bytes_remaining)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte local_18 [4];
  byte local_14 [4];
  int iVar1;
  
  if (bit_count < bit_buffer->bits_available) {
    uVar1 = bit_buffer->accumulated_bits;
    bit_buffer->accumulated_bits = uVar1 >> ((byte)bit_count & 0x1f);
    uVar1 = ~(0xffffffffU << ((byte)bit_count & 0x1f)) & uVar1;
    bit_buffer->bits_available = bit_buffer->bits_available - bit_count;
  }
  else if (bit_count == bit_buffer->bits_available) {
    bit_buffer->bits_available = 0;
    uVar1 = bit_buffer->accumulated_bits;
    bit_buffer->accumulated_bits = 0;
  }
  else {
    iVar1 = bit_buffer->bits_available;
    uVar1 = bit_buffer->accumulated_bits;
    iVar4 = bit_buffer->bits_available;
    bit_buffer->bits_available = 0;
    bit_buffer->accumulated_bits = 0;
    iVar3 = bit_count - iVar4;
    uVar5 = ~(0xffffffffU << ((byte)iVar1 & 0x1f)) & uVar1;
    while( true ) {
      if (iVar3 < 8) {
        if (0 < iVar3) {
          if ((*bytes_remaining < 1) ||
             (crt_iostream_cpp_istream_get_FUN_005ff245(istream,(char *)local_18),
             std_istream_from(istream).fail())) {
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
          bit_count = iVar3;
          uVar5 = uVar5 | (~(0xffffffffU << ((byte)bit_count & 0x1f)) & bit_buffer->accumulated_bits) <<
                          ((byte)iVar4 & 0x1f);
          bit_buffer->accumulated_bits = bit_buffer->accumulated_bits >> ((byte)bit_count & 0x1f);
          bit_buffer->bits_available = 8 - iVar3;
        }
        return uVar5;
      }
      if ((*bytes_remaining < 1) ||
         (crt_iostream_cpp_istream_get_FUN_005ff245(istream,(char *)local_14),
         std_istream_from(istream).fail())) break;
      *bytes_remaining = *bytes_remaining + -1;
      uVar5 = uVar5 | (uint)local_14[0] << ((byte)iVar4 & 0x1f);
      iVar3 = iVar3 + -8;
      iVar4 = iVar4 + 8;
    }
    bit_buffer->accumulated_bits = uVar5;
    bit_buffer->bits_available = iVar4;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
