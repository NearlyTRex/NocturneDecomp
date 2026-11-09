// Name: support_codec.cpp_CAsciiUnarmor_ctor_FUN_004415f0
// Address: 004415f0
// Address Range: [[004415f0, 00441603]]
// Convention: unknown
// Signature: CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_ctor_FUN_004415f0(CAsciiUnarmor *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAsciiUnarmor * support_codec_cpp_CAsciiUnarmor_ctor_FUN_004415f0(CAsciiUnarmor *this_ptr)

{
  CAsciiUnarmor *pCVar1;
  
  pCVar1 = (CAsciiUnarmor *)support_codec_cpp_CCodec_ctor_FUN_00440800((CCodec *)this_ptr);
  *(byte ***)pCVar1 = &g_CAsciiUnarmorVTable;
  return pCVar1;
}
