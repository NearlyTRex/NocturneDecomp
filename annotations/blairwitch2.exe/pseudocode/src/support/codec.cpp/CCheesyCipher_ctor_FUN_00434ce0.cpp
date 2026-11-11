// Name: support_codec.cpp_CCheesyCipher_ctor_FUN_00434ce0
// Address: 00434ce0
// Address Range: [[00434ce0, 00434d17]]
// Convention: __cdecl
// Signature: CCodec * __cdecl support_codec_cpp_CCheesyCipher_ctor_FUN_00434ce0(CCheesyCipher *this_ptr,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

CCodec * __cdecl support_codec_cpp_CCheesyCipher_ctor_FUN_00434ce0(CCheesyCipher *this_ptr,uint param_2,uint param_3)

{
  CCheesyCipher *this_ptr_00;
  uint in_stack_00000014;
  
  this_ptr_00 = (CCheesyCipher *)support_codec_cpp_CCodec_ctor_FUN_00433e80(&this_ptr->base);
  (this_ptr_00->base).vtable = &PTR_support_codec_cpp_CCheesyCipher_dtor_FUN_00435400_005f4314;
  support_codec_cpp_CCheesyCipher_setMode_FUN_00434d20(this_ptr_00,param_2);
  support_codec_cpp_CCheesyCipher_setKey_FUN_00434d30(this_ptr_00,in_stack_00000014);
  return &this_ptr_00->base;
}
