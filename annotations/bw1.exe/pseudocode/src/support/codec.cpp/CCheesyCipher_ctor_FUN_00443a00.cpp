// Name: support_codec.cpp_CCheesyCipher_ctor_FUN_00443a00
// Address: 00443a00
// Address Range: [[00443a00, 00443a37]]
// Convention: __cdecl
// Signature: CCheesyCipher * __cdecl support_codec_cpp_CCheesyCipher_ctor_FUN_00443a00(CCheesyCipher *this_ptr,int mode,uint key)

#include "nocturne.h"

CCheesyCipher * __cdecl support_codec_cpp_CCheesyCipher_ctor_FUN_00443a00(CCheesyCipher *this_ptr,int mode,uint key)

{
  CCheesyCipher *this_ptr_00;
  uint in_stack_00000014;
  
  this_ptr_00 = (CCheesyCipher *)support_codec_cpp_CCodec_ctor_FUN_00442ba0(&this_ptr->base);
  (this_ptr_00->base).vtable = " AD";
  support_codec_cpp_CCheesyCipher_setMode_FUN_00443a40(this_ptr_00,mode);
  support_codec_cpp_CCheesyCipher_setKey_FUN_00443a50(this_ptr_00,in_stack_00000014);
  return this_ptr_00;
}
