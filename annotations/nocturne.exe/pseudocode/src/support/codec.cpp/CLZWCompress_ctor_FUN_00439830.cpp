// Name: support_codec.cpp_CLZWCompress_ctor_FUN_00439830
// Address: 00439830
// Address Range: [[00439830, 00439872]]
// Convention: __cdecl
// Signature: CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_ctor_FUN_00439830(CLZWCompress *this_ptr,int buffer_size,int num_bits)

#include "nocturne.h"

CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_ctor_FUN_00439830(CLZWCompress *this_ptr,int buffer_size,int num_bits)

{
  int iVar1;
  CCodec *pCVar2;
  CLZWDictionary *pCVar3;
  uint *puVar4;
  uint uVar5;
  
  pCVar2 = support_codec_cpp_CCodec_ctor_FUN_00438f20(&this_ptr->base);
  pCVar3 = support_codec_cpp_CLZWDictionary_ctor_FUN_00439350((CLZWDictionary *)(pCVar2 + 1));
  puVar4 = &pCVar3[-1].bit_state.accumulated_bits;
  pCVar3[1].table_capacity = buffer_size;
  pCVar3[1].num_bits = num_bits;
  iVar1 = pCVar3[1].num_bits;
  *puVar4 = (uint)&PTR_support_codec_cpp_CLZWCompress_dtor_FUN_00439c70_0059b414;
  uVar5 = -1 << ((byte)iVar1 & 0x1f);
  pCVar3[1].current_num_bits = uVar5;
  pCVar3[1].current_num_bits = ~uVar5;
  return (CLZWCompress *)puVar4;
}
