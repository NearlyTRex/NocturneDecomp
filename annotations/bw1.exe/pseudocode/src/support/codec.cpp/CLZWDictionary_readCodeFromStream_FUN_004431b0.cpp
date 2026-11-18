// Name: support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_004431b0
// Address: 004431b0
// Address Range: [[004431b0, 00443288]]
// Convention: __cdecl
// Signature: uint __cdecl support_codec_cpp_CLZWDictionary_readCodeFromStream_FUN_004431b0(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,void *istream)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CLZWDictionary_readCodeFromStream_FUN_004431b0(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,void *istream)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int bit_count;
  uint bits;
  uint local_14;
  
  bit_count = 0;
  bits = 0;
  iVar1 = this_ptr->entry_count;
  local_14 = 0;
  uVar5 = 0;
  uVar4 = 1 << ((char)this_ptr->current_num_bits - 1U & 0x1f);
  while (uVar2 = uVar4, uVar2 != 0) {
    uVar5 = (int)uVar2 >> 1;
    uVar4 = uVar5;
    if ((iVar1 - 1U & uVar2) != 0) {
      uVar3 = support_codec_cpp_readBitsFromStream_FUN_00442490(bit_buffer,1,istream);
      if ((int)uVar3 < 0) {
        support_codec_cpp_ungetBits_FUN_004425b0(bit_buffer,bit_count,bits);
        return uVar3;
      }
      bit_count = bit_count + 1;
      bits = bits * 2 | uVar3;
      if (uVar3 == 0) break;
      local_14 = local_14 | uVar2;
    }
  }
  if (uVar5 == 0) {
    return local_14;
  }
  do {
    uVar4 = support_codec_cpp_readBitsFromStream_FUN_00442490(bit_buffer,1,istream);
    if ((int)uVar4 < 0) {
      support_codec_cpp_ungetBits_FUN_004425b0(bit_buffer,bit_count,bits);
      return 0xffffffff;
    }
    bit_count = bit_count + 1;
    bits = bits * 2 | uVar4;
    if (uVar4 != 0) {
      local_14 = local_14 | uVar5;
    }
    uVar5 = (int)uVar5 >> 1;
  } while (uVar5 != 0);
  return local_14;
}
