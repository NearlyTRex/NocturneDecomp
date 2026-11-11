// Name: support_codec.cpp_CAsciiUnarmor_ctor_FUN_00434c70
// Address: 00434c70
// Address Range: [[00434c70, 00434c83]]
// Convention: unknown
// Signature: CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_ctor_FUN_00434c70(CAsciiUnarmor *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_ctor_FUN_00434c70(CAsciiUnarmor *this_ptr)

{
  CAsciiUnarmor *pCVar1;
  
  pCVar1 = (CAsciiUnarmor *)support_codec_cpp_CCodec_ctor_FUN_00433e80(&this_ptr->base);
  (pCVar1->base).vtable = &g_CAsciiUnarmorVTable;
  return pCVar1;
}
