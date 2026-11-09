// Name: support_codec.cpp_FUN_00441660
// Address: 00441660
// Address Range: [[00441660, 00441697]]
// Convention: unknown
// Signature: CCodec * support_codec_cpp_FUN_00441660(CCodec *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

CCodec * support_codec_cpp_FUN_00441660(CCodec *param_1,uint param_2,uint param_3)

{
  CCodec *pCVar1;
  
  pCVar1 = support_codec_cpp_CCodec_ctor_FUN_00440800(param_1);
  *pCVar1 = (CCodec)0x5dd524;
  support_codec_cpp_FUN_004416a0(pCVar1,param_2);
  support_codec_cpp_FUN_004416b0(pCVar1,param_3);
  return pCVar1;
}
