// Name: support_codec.cpp_CCheesyCipher_ctor_FUN_00434ce0
// Address: 00434ce0
// Address Range: [[00434ce0, 00434d17]]
// Convention: __cdecl
// Signature: CCheesyCipher * __cdecl support_codec_cpp_CCheesyCipher_ctor_FUN_00434ce0(CCheesyCipher *this_ptr,int mode,uint key)

#include "nocturne.h"

CCheesyCipher * __cdecl support_codec_cpp_CCheesyCipher_ctor_FUN_00434ce0(CCheesyCipher *this_ptr,int mode,uint key)

{
  CCheesyCipher *this_ptr_00;
  uint in_stack_00000014;
  
  this_ptr_00 = (CCheesyCipher *)support_codec_cpp_CCodec_ctor_FUN_00433e80(&this_ptr->base);
  (this_ptr_00->base).vtable = &PTR_support_codec_cpp_CCheesyCipher_dtor_FUN_00435400_005f4314;
  support_codec_cpp_CCheesyCipher_setMode_FUN_00434d20(this_ptr_00,mode);
  support_codec_cpp_CCheesyCipher_setKey_FUN_00434d30(this_ptr_00,in_stack_00000014);
  return this_ptr_00;
}
