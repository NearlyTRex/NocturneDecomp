// Name: support_codec.cpp_CCheesyCipher_ctor_FUN_00443a00
// Address: 00443a00
// Address Range: [[00443a00, 00443a37]]
// Convention: __cdecl
// Signature: CCodec * __cdecl support_codec_cpp_CCheesyCipher_ctor_FUN_00443a00(CCheesyCipher *this_ptr,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

CCodec * __cdecl support_codec_cpp_CCheesyCipher_ctor_FUN_00443a00(CCheesyCipher *this_ptr,uint param_2,uint param_3)

{
  CCheesyCipher *this_ptr_00;
  uint in_stack_00000014;
  
  this_ptr_00 = (CCheesyCipher *)support_codec_cpp_CCodec_ctor_FUN_00442ba0(&this_ptr->base);
  (this_ptr_00->base).vtable = (void *)0x5fda44;
  support_codec_cpp_CCheesyCipher_setMode_FUN_00443a40(this_ptr_00,param_2);
  support_codec_cpp_CCheesyCipher_setKey_FUN_00443a50(this_ptr_00,in_stack_00000014);
  return &this_ptr_00->base;
}
