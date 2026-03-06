// Name: support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0
// Address: 0043f2d0
// Address Range: [[0043f2d0, 0043f312]]
// Convention: __cdecl
// Signature: CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_ctor_FUN_0043f2d0(CLZWCompress *this_ptr,int buffer_size,int num_bits)

#include "nocturne.h"

CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_ctor_FUN_0043f2d0(CLZWCompress *this_ptr,int buffer_size,int num_bits)

{
  int iVar1;
  CLZWCompress *pCVar2;
  CLZWCompress_ptr_4 pCVar3;
  uint uVar2;
  
  pCVar2 = (CLZWCompress *)support_codec_cpp_CCodec_ctor_FUN_0043e9a0(&this_ptr->base);
  pCVar3 = support_codec_cpp_CLZWDictionary_ctor_FUN_0043edd0(&pCVar2->dictionary);
  ADJ(pCVar3)->buffer_size = buffer_size;
  ADJ(pCVar3)->num_bits = num_bits;
  iVar1 = ADJ(pCVar3)->num_bits;
  ADJ(pCVar3)->base.vtable = &g_CLZWCompressVTable;
  uVar2 = -1 << ((byte)iVar1 & 0x1f);
  (ADJ(pCVar3)->char_mask).dword = uVar2;
  (ADJ(pCVar3)->char_mask).dword = ~uVar2;
  return ADJ(pCVar3);
}
