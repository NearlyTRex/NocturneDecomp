// Name: support_codec.cpp_CCheesyCipher_ctor_FUN_00441660
// Address: 00441660
// Address Range: [[00441660, 00441697]]
// Convention: __cdecl
// Signature: CCodec * __cdecl support_codec_cpp_CCheesyCipher_ctor_FUN_00441660(CCheesyCipher *this_ptr,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

CCodec * __cdecl support_codec_cpp_CCheesyCipher_ctor_FUN_00441660(CCheesyCipher *this_ptr,uint param_2,uint param_3)

{
  CCheesyCipher *this_ptr_00;
  uint in_stack_00000014;
  
  this_ptr_00 = (CCheesyCipher *)support_codec_cpp_CCodec_ctor_FUN_00440800(&this_ptr->base);
  (this_ptr_00->base).vtable = (void *)0x5dd524;
  support_codec_cpp_CCheesyCipher_setMode_FUN_004416a0(this_ptr_00,param_2);
  support_codec_cpp_CCheesyCipher_setKey_FUN_004416b0(this_ptr_00,in_stack_00000014);
  return &this_ptr_00->base;
}
