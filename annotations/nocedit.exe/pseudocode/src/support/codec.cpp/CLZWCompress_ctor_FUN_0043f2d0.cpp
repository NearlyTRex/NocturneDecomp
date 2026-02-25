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
  CLZWDictionary *pCVar3;
  uint *puVar4;
  uint uVar5;
  
  pCVar2 = (CLZWCompress *)support_codec_cpp_CCodec_ctor_FUN_0043e9a0(&this_ptr->base);
  pCVar3 = support_codec_cpp_CLZWDictionary_ctor_FUN_0043edd0(&pCVar2->dictionary);
  puVar4 = &pCVar3[-1].bit_state.accumulated_bits;
  pCVar3[1].table_capacity = buffer_size;
  pCVar3[1].num_bits = num_bits;
  iVar1 = pCVar3[1].num_bits;
  *puVar4 = (uint)&g_CLZWCompressVTable;
  uVar5 = -1 << ((byte)iVar1 & 0x1f);
  pCVar3[1].current_num_bits = uVar5;
  pCVar3[1].current_num_bits = ~uVar5;
  return (CLZWCompress *)puVar4;
}
