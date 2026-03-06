// Name: support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490
// Address: 0043f490
// Address Range: [[0043f490, 0043f4c0]]
// Convention: __cdecl
// Signature: CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_0043f490(CLZWDecompress *this_ptr,int buffer_size,int initial_bits)

#include "nocturne.h"

CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_0043f490(CLZWDecompress *this_ptr,int buffer_size,int initial_bits)

{
  CLZWDecompress *pCVar1;
  CLZWDecompress_ptr_4 pCVar2;
  
  pCVar1 = (CLZWDecompress *)support_codec_cpp_CCodec_ctor_FUN_0043e9a0(&this_ptr->base);
  pCVar2 = support_codec_cpp_CLZWDictionary_ctor_FUN_0043edd0(&pCVar1->lzw_dict);
  ADJ(pCVar2)->base.vtable = &g_CLZWDecompressVTable;
  ADJ(pCVar2)->buffer_size = buffer_size;
  ADJ(pCVar2)->num_bits = initial_bits;
  return ADJ(pCVar2);
}
