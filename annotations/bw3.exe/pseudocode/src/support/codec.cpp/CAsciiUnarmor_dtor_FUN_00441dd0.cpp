// Name: support_codec.cpp_CAsciiUnarmor_dtor_FUN_00441dd0
// Address: 00441dd0
// Address Range: [[00441dd0, 00441e1d]]
// Convention: unknown
// Signature: CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_dtor_FUN_00441dd0(CAsciiUnarmor *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_dtor_FUN_00441dd0(CAsciiUnarmor *this_ptr,uint flags)

{
  CAsciiUnarmor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CAsciiUnarmorTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CAsciiUnarmor *)support_codec_cpp_CCodec_dtor_FUN_00440810((CCodec *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
