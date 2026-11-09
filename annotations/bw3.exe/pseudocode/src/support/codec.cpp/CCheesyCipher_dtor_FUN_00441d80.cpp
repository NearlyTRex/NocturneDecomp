// Name: support_codec.cpp_CCheesyCipher_dtor_FUN_00441d80
// Address: 00441d80
// Address Range: [[00441d80, 00441dcd]]
// Convention: unknown
// Signature: CCheesyCipher * support_codec_cpp_CCheesyCipher_dtor_FUN_00441d80(CCheesyCipher *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCheesyCipher * support_codec_cpp_CCheesyCipher_dtor_FUN_00441d80(CCheesyCipher *this_ptr,uint flags)

{
  CCheesyCipher *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CCheesyCipherTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CCheesyCipher *)support_codec_cpp_CCodec_dtor_FUN_00440810((CCodec *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
