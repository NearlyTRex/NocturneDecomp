// Name: support_codec.cpp_CLZWDecompress_ctor_FUN_004399f0
// Address: 004399f0
// Address Range: [[004399f0, 00439a20]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_004399f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_004399f0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = support_codec_cpp_CCodec_ctor_FUN_00438f20(param_1);
  iVar1 = support_codec_cpp_CLZWDictionary_ctor_FUN_00439350(iVar1 + 4);
  *(byte ***)(iVar1 + -4) = &PTR_support_codec_cpp_CLZWDecompress_dtor_FUN_00439c10_0059b444;
  *(uint *)(iVar1 + 0x1c) = param_2;
  *(uint *)(iVar1 + 0x20) = param_3;
  return;
}
