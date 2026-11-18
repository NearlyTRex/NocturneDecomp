// Name: support_codec.cpp_readBitsFromStream_FUN_004400f0
// Address: 004400f0
// Address Range: [[004400f0, 00440204]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_readBitsFromStream_FUN_004400f0(SBitBuffer *bit_buffer,int bit_count,void *istream)

#include "nocturne.h"

int __cdecl support_codec_cpp_readBitsFromStream_FUN_004400f0(SBitBuffer *bit_buffer,int bit_count,void *istream)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = bit_buffer->bits_available;
  if (bit_count < iVar4) {
    uVar5 = bit_buffer->accumulated_bits;
    bit_buffer->accumulated_bits = bit_buffer->accumulated_bits >> ((byte)bit_count & 0x1f);
    bit_buffer->bits_available = bit_buffer->bits_available - bit_count;
    return ~(-1 << ((byte)bit_count & 0x1f)) & uVar5;
  }
  if (bit_count == iVar4) {
    bit_buffer->bits_available = 0;
    uVar5 = bit_buffer->accumulated_bits;
    bit_buffer->accumulated_bits = 0;
    return uVar5;
  }
  iVar1 = bit_buffer->bits_available;
  iVar2 = bit_count - iVar4;
  uVar5 = bit_buffer->accumulated_bits;
  bit_buffer->bits_available = 0;
  bit_buffer->accumulated_bits = 0;
  uVar5 = ~(-1 << ((byte)iVar1 & 0x1f)) & uVar5;
  for (; 7 < iVar2; iVar2 = iVar2 + -8) {
    uVar3 = (**(code **)(*(int *)istream + 4))(istream);
    if ((int)uVar3 < 0) goto LAB_004401b2;
    uVar5 = uVar5 | uVar3 << ((byte)iVar4 & 0x1f);
    iVar4 = iVar4 + 8;
  }
  if (iVar2 < 1) {
    return uVar5;
  }
  uVar3 = (**(code **)(*(int *)istream + 4))(istream);
  if (-1 < (int)uVar3) {
    bit_count._0_1_ = (byte)iVar2;
    bit_buffer->accumulated_bits = uVar3;
    uVar3 = bit_buffer->accumulated_bits;
    bit_buffer->accumulated_bits = uVar3 >> ((byte)bit_count & 0x1f);
    bit_buffer->bits_available = 8 - iVar2;
    return uVar5 | (~(-1 << ((byte)bit_count & 0x1f)) & uVar3) << ((byte)iVar4 & 0x1f);
  }
LAB_004401b2:
  bit_buffer->accumulated_bits = uVar5;
  bit_buffer->bits_available = iVar4;
  return uVar3;
}
