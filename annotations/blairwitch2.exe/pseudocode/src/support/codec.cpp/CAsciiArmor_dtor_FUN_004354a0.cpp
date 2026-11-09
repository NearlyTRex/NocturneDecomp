// Name: support_codec.cpp_CAsciiArmor_dtor_FUN_004354a0
// Address: 004354a0
// Address Range: [[004354a0, 004354ed]]
// Convention: unknown
// Signature: CAsciiArmor * support_codec_cpp_CAsciiArmor_dtor_FUN_004354a0(CAsciiArmor *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAsciiArmor * support_codec_cpp_CAsciiArmor_dtor_FUN_004354a0(CAsciiArmor *this_ptr,uint flags)

{
  CAsciiArmor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CAsciiArmorTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CAsciiArmor *)support_codec_cpp_CCodec_dtor_FUN_00433e90((CCodec *)this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
