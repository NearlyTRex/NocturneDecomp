// Name: support_codec.cpp_CCheesyCipher_dtor_FUN_00435400
// Address: 00435400
// Address Range: [[00435400, 0043544d]]
// Convention: unknown
// Signature: CCheesyCipher * support_codec_cpp_CCheesyCipher_dtor_FUN_00435400(CCheesyCipher *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCheesyCipher * support_codec_cpp_CCheesyCipher_dtor_FUN_00435400(CCheesyCipher *this_ptr,uint flags)

{
  CCheesyCipher *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CCheesyCipherTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CCheesyCipher *)support_codec_cpp_CCodec_dtor_FUN_00433e90(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
