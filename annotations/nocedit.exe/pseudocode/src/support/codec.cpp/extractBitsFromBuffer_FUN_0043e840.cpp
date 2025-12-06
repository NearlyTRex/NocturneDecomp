// Name: support_codec.cpp_extractBitsFromBuffer_FUN_0043e840
// Address: 0043e840
// Address Range: [[0043e840, 0043e997]]
// Convention: __cdecl
// Signature: int support_codec.cpp_extractBitsFromBuffer_FUN_0043e840(SBitBuffer * bit_state, int bit_count, byte * * output_pos, int * bytes_remaining)

#include "nocturne.h"

int __cdecl
support_codec_cpp_extractBitsFromBuffer_FUN_0043e840
          (SBitBuffer *bit_state,int bit_count,byte **output_pos,int *bytes_remaining)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (bit_count < bit_state->bits_available) {
    uVar5 = bit_state->accumulated_bits;
    bit_state->accumulated_bits = (uint)bit_state->accumulated_bits >> ((byte)bit_count & 0x1f);
    bit_state->bits_available = bit_state->bits_available - bit_count;
    return ~(-1 << ((byte)bit_count & 0x1f)) & uVar5;
  }
  if (bit_count == bit_state->bits_available) {
    bit_state->bits_available = 0;
    iVar3 = bit_state->accumulated_bits;
    bit_state->accumulated_bits = 0;
    return iVar3;
  }
  uVar5 = bit_state->accumulated_bits & ~(-1 << ((byte)bit_state->bits_available & 0x1f));
  iVar3 = bit_state->bits_available;
  bit_state->bits_available = 0;
  iVar4 = bit_count - iVar3;
  bit_state->accumulated_bits = 0;
  for (; 7 < iVar4; iVar4 = iVar4 + -8) {
    if (*bytes_remaining < 1) goto LAB_0043e980;
    pbVar1 = *output_pos;
    *output_pos = pbVar1 + 1;
    uVar5 = uVar5 | (uint)*pbVar1 << ((byte)iVar3 & 0x1f);
    iVar3 = iVar3 + 8;
    *bytes_remaining = *bytes_remaining + -1;
  }
  if (0 < iVar4) {
    if (*bytes_remaining < 1) {
LAB_0043e980:
      bit_state->accumulated_bits = uVar5;
      bit_state->bits_available = iVar3;
      return -1;
    }
    pbVar1 = *output_pos;
    *output_pos = pbVar1 + 1;
    bit_state->accumulated_bits = (uint)*pbVar1;
    *bytes_remaining = *bytes_remaining + -1;
    uVar2 = bit_state->accumulated_bits;
    bit_state->accumulated_bits = (uint)bit_state->accumulated_bits >> ((byte)iVar4 & 0x1f);
    uVar5 = uVar5 | (uVar2 & ~(-1 << ((byte)iVar4 & 0x1f))) << ((byte)iVar3 & 0x1f);
    bit_state->bits_available = 8 - iVar4;
  }
  return uVar5;
}
