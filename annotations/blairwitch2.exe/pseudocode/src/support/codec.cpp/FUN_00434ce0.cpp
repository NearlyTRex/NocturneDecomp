// Name: support_codec.cpp_FUN_00434ce0
// Address: 00434ce0
// Address Range: [[00434ce0, 00434d17]]
// Convention: unknown
// Signature: CCodec * support_codec_cpp_FUN_00434ce0(CCodec *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

CCodec * support_codec_cpp_FUN_00434ce0(CCodec *param_1,uint param_2,uint param_3)

{
  CCodec *pCVar1;
  
  pCVar1 = support_codec_cpp_CCodec_ctor_FUN_00433e80(param_1);
  *pCVar1 = (CCodec)&PTR_support_codec_cpp_CCheesyCipher_dtor_FUN_00435400_005f4314;
  support_codec_cpp_FUN_00434d20(pCVar1,param_2);
  support_codec_cpp_FUN_00434d30(pCVar1,param_3);
  return pCVar1;
}
