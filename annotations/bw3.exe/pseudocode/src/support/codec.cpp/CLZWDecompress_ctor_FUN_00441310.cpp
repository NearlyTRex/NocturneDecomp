// Name: support_codec.cpp_CLZWDecompress_ctor_FUN_00441310
// Address: 00441310
// Address Range: [[00441310, 00441340]]
// Convention: __cdecl
// Signature: CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_00441310(CLZWDecompress *this_ptr,int buffer_size,int initial_bits)

#include "nocturne.h"

CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_00441310(CLZWDecompress *this_ptr,int buffer_size,int initial_bits)

{
  CCodec *pCVar1;
  CLZWDictionary *pCVar2;
  uint *puVar3;
  
  pCVar1 = support_codec_cpp_CCodec_ctor_FUN_00440800(&this_ptr->base);
  pCVar2 = support_codec_cpp_CLZWDictionary_ctor_FUN_00440bd0((CLZWDictionary *)(pCVar1 + 1));
  puVar3 = &pCVar2[-1].bit_state.accumulated_bits;
  *puVar3 = (uint)&PTR_support_codec_cpp_CLZWDecompress_dtor_FUN_00441e70_005dd494;
  pCVar2[1].table_capacity = buffer_size;
  pCVar2[1].num_bits = initial_bits;
  return (CLZWDecompress *)puVar3;
}
