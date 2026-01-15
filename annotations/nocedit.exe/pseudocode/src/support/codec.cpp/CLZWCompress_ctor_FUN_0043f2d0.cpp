// Name: support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0
// Address: 0043f2d0
// Address Range: [[0043f2d0, 0043f312]]
// Convention: __cdecl
// Signature: CLZWCompress * support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0(CLZWCompress * this_ptr)

#include "nocturne.h"

CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_ctor_FUN_0043f2d0(CLZWCompress *this_ptr)

{
  int iVar1;
  CCodec *pCVar2;
  CLZWDictionary *pCVar3;
  int *piVar4;
  uint uVar5;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  pCVar2 = support_codec_cpp_CCodec_ctor_FUN_0043e9a0(&this_ptr->base_codec);
  pCVar3 = support_codec_cpp_CLZWDictionary_ctor_FUN_0043edd0((CLZWDictionary *)(pCVar2 + 1));
  piVar4 = &pCVar3[-1].bit_state.accumulated_bits;
  pCVar3[1].dict_size = in_stack_00000008;
  pCVar3[1].num_bits = in_stack_0000000c;
  iVar1 = pCVar3[1].num_bits;
  *piVar4 = (int)&g_CLZWCompressVTable;
  uVar5 = -1 << ((byte)iVar1 & 0x1f);
  pCVar3[1].current_num_bits = uVar5;
  pCVar3[1].current_num_bits = ~uVar5;
  return (CLZWCompress *)piVar4;
}
