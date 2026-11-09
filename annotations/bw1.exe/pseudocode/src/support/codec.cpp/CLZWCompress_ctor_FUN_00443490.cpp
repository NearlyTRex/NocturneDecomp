// Name: support_codec.cpp_CLZWCompress_ctor_FUN_00443490
// Address: 00443490
// Address Range: [[00443490, 004434d2]]
// Convention: __cdecl
// Signature: CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_ctor_FUN_00443490(CLZWCompress *this_ptr,int buffer_size,int num_bits)

#include "nocturne.h"

CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_ctor_FUN_00443490(CLZWCompress *this_ptr,int buffer_size,int num_bits)

{
  CCodec *pCVar1;
  CLZWDictionary *pCVar2;
  uint uVar3;
  
  pCVar1 = support_codec_cpp_CCodec_ctor_FUN_00442ba0((CCodec *)this_ptr);
  pCVar2 = support_codec_cpp_CLZWDictionary_ctor_FUN_00442f70((CLZWDictionary *)(pCVar1 + 1));
  *(int *)(pCVar2 + 0x1c) = buffer_size;
  *(int *)(pCVar2 + 0x20) = num_bits;
  *(byte ***)(pCVar2 + -4) = &PTR_support_codec_cpp_CLZWCompress_dtor_FUN_00444270_005fd984;
  uVar3 = -1 << ((byte)pCVar2[0x20] & 0x1f);
  *(uint *)(pCVar2 + 0x24) = uVar3;
  *(uint *)(pCVar2 + 0x24) = ~uVar3;
  return (CLZWCompress *)(pCVar2 + -4);
}
