// Name: support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_00440e10
// Address: 00440e10
// Address Range: [[00440e10, 00440ee8]]
// Convention: __cdecl
// Signature: uint __cdecl support_codec_cpp_CLZWDictionary_readCodeFromStream_FUN_00440e10(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,void *istream)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CLZWDictionary_readCodeFromStream_FUN_00440e10(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,void *istream)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_14;
  
  iVar6 = 0;
  uVar7 = 0;
  iVar1 = this_ptr->entry_count;
  local_14 = 0;
  uVar5 = 0;
  uVar4 = 1 << ((char)this_ptr->current_num_bits - 1U & 0x1f);
  while (uVar2 = uVar4, uVar2 != 0) {
    uVar5 = (int)uVar2 >> 1;
    uVar4 = uVar5;
    if ((iVar1 - 1U & uVar2) != 0) {
      uVar3 = support_codec_cpp_readBitsFromStream_FUN_004400f0(bit_buffer,1,istream);
      if ((int)uVar3 < 0) {
        support_codec_cpp_FUN_00440210(bit_buffer,iVar6,uVar7);
        return uVar3;
      }
      iVar6 = iVar6 + 1;
      uVar7 = uVar7 * 2 | uVar3;
      if (uVar3 == 0) break;
      local_14 = local_14 | uVar2;
    }
  }
  if (uVar5 == 0) {
    return local_14;
  }
  do {
    uVar4 = support_codec_cpp_readBitsFromStream_FUN_004400f0(bit_buffer,1,istream);
    if ((int)uVar4 < 0) {
      support_codec_cpp_FUN_00440210(bit_buffer,iVar6,uVar7);
      return 0xffffffff;
    }
    iVar6 = iVar6 + 1;
    uVar7 = uVar7 * 2 | uVar4;
    if (uVar4 != 0) {
      local_14 = local_14 | uVar5;
    }
    uVar5 = (int)uVar5 >> 1;
  } while (uVar5 != 0);
  return local_14;
}
