// Name: support_codec.cpp_CLZWDecompress_ctor_FUN_004399f0
// Address: 004399f0
// Address Range: [[004399f0, 00439a20]]
// Convention: __cdecl
// Signature: CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_004399f0(CLZWDecompress *this_ptr,int buffer_size,int initial_bits)

#include "nocturne.h"

CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_004399f0(CLZWDecompress *this_ptr,int buffer_size,int initial_bits)

{
  CCodec *pCVar1;
  CLZWDictionary *pCVar2;
  uint *puVar3;
  
  pCVar1 = support_codec_cpp_CCodec_ctor_FUN_00438f20(&this_ptr->base);
  pCVar2 = support_codec_cpp_CLZWDictionary_ctor_FUN_00439350((CLZWDictionary *)(pCVar1 + 1));
  puVar3 = &pCVar2[-1].bit_state.accumulated_bits;
  *puVar3 = (uint)&PTR_support_codec_cpp_CLZWDecompress_dtor_FUN_00439c10_0059b444;
  pCVar2[1].table_capacity = buffer_size;
  pCVar2[1].num_bits = initial_bits;
  return (CLZWDecompress *)puVar3;
}
