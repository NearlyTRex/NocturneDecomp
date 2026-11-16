// Name: support_codec.cpp_CCheesyCipher_dtor_FUN_00435400
// Address: 00435400
// Address Range: [[00435400, 0043544d]]
// Convention: __cdecl
// Signature: CCheesyCipher * __cdecl support_codec_cpp_CCheesyCipher_dtor_FUN_00435400(CCheesyCipher *this_ptr,uint flags)

#include "nocturne.h"

CCheesyCipher * __cdecl support_codec_cpp_CCheesyCipher_dtor_FUN_00435400(CCheesyCipher *this_ptr,uint flags)

{
  CCheesyCipher *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CCheesyCipherTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CCheesyCipher *)support_codec_cpp_CCodec_dtor_FUN_00433e90(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
