// Name: support_codec.cpp_CLZWDecompress_ctor_FUN_004436b0
// Address: 004436b0
// Address Range: [[004436b0, 004436e0]]
// Convention: __cdecl
// Signature: CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_004436b0(CLZWDecompress *this_ptr,int buffer_size,int initial_bits)

#include "nocturne.h"

CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_004436b0(CLZWDecompress *this_ptr,int buffer_size,int initial_bits)

{
  CCodec *pCVar1;
  CLZWDictionary *pCVar2;
  uint *puVar3;
  
  pCVar1 = support_codec_cpp_CCodec_ctor_FUN_00442ba0(&this_ptr->base);
  pCVar2 = support_codec_cpp_CLZWDictionary_ctor_FUN_00442f70((CLZWDictionary *)(pCVar1 + 1));
  puVar3 = &pCVar2[-1].bit_state.accumulated_bits;
  *puVar3 = (uint)&PTR_support_codec_cpp_CLZWDecompress_dtor_FUN_00444210_005fd9b4;
  pCVar2[1].table_capacity = buffer_size;
  pCVar2[1].num_bits = initial_bits;
  return (CLZWDecompress *)puVar3;
}
