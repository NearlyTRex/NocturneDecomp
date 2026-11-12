// Name: support_codec.cpp_CAsciiUnarmor_dtor_FUN_00444170
// Address: 00444170
// Address Range: [[00444170, 004441bd]]
// Convention: unknown
// Signature: CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_dtor_FUN_00444170(CAsciiUnarmor *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_dtor_FUN_00444170(CAsciiUnarmor *this_ptr,uint flags)

{
  CAsciiUnarmor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CAsciiUnarmorTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CAsciiUnarmor *)support_codec_cpp_CCodec_dtor_FUN_00442bb0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
