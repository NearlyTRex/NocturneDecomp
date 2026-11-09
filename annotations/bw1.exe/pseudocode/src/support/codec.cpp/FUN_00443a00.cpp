// Name: support_codec.cpp_FUN_00443a00
// Address: 00443a00
// Address Range: [[00443a00, 00443a37]]
// Convention: unknown
// Signature: CCodec * support_codec_cpp_FUN_00443a00(CCodec *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

CCodec * support_codec_cpp_FUN_00443a00(CCodec *param_1,uint param_2,uint param_3)

{
  CCodec *pCVar1;
  
  pCVar1 = support_codec_cpp_CCodec_ctor_FUN_00442ba0(param_1);
  *pCVar1 = (CCodec)0x5fda44;
  support_codec_cpp_FUN_00443a40(pCVar1,param_2);
  support_codec_cpp_FUN_00443a50(pCVar1,param_3);
  return pCVar1;
}
