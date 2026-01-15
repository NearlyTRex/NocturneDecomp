// Name: support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490
// Address: 0043f490
// Address Range: [[0043f490, 0043f4c0]]
// Convention: __cdecl
// Signature: CLZWDecompress * support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490(CLZWDecompress * this_ptr, int buffer_size, int initial_bits)

#include "nocturne.h"

CLZWDecompress * __cdecl
support_codec_cpp_CLZWDecompress_ctor_FUN_0043f490
          (CLZWDecompress *this_ptr,int buffer_size,int initial_bits)

{
  CCodec *pCVar1;
  CLZWDictionary *pCVar2;
  int *piVar3;
  
  pCVar1 = support_codec_cpp_CCodec_ctor_FUN_0043e9a0(&this_ptr->base_codec);
  pCVar2 = support_codec_cpp_CLZWDictionary_ctor_FUN_0043edd0((CLZWDictionary *)(pCVar1 + 1));
  piVar3 = &pCVar2[-1].bit_state.accumulated_bits;
  *piVar3 = (int)&g_CLZWDecompressVTable;
  pCVar2[1].dict_size = buffer_size;
  pCVar2[1].num_bits = initial_bits;
  return (CLZWDecompress *)piVar3;
}
