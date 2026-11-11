// Name: support_codec.cpp_CAsciiUnarmor_ctor_FUN_00443990
// Address: 00443990
// Address Range: [[00443990, 004439a3]]
// Convention: unknown
// Signature: CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_ctor_FUN_00443990(CAsciiUnarmor *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_ctor_FUN_00443990(CAsciiUnarmor *this_ptr)

{
  CAsciiUnarmor *pCVar1;
  
  pCVar1 = (CAsciiUnarmor *)support_codec_cpp_CCodec_ctor_FUN_00442ba0(&this_ptr->base);
  (pCVar1->base).vtable = &g_CAsciiUnarmorVTable;
  return pCVar1;
}
