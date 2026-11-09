// Name: support_codec.cpp_CAsciiUnarmor_dtor_FUN_00435450
// Address: 00435450
// Address Range: [[00435450, 0043549d]]
// Convention: unknown
// Signature: CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_dtor_FUN_00435450(CAsciiUnarmor *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_dtor_FUN_00435450(CAsciiUnarmor *this_ptr,uint flags)

{
  CAsciiUnarmor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CAsciiUnarmorTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CAsciiUnarmor *)support_codec_cpp_CCodec_dtor_FUN_00433e90((CCodec *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
