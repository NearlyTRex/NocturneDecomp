// Name: support_codec.cpp_CAsciiArmor_dtor_FUN_00441e20
// Address: 00441e20
// Address Range: [[00441e20, 00441e6d]]
// Convention: unknown
// Signature: CAsciiArmor * support_codec_cpp_CAsciiArmor_dtor_FUN_00441e20(CAsciiArmor *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAsciiArmor * support_codec_cpp_CAsciiArmor_dtor_FUN_00441e20(CAsciiArmor *this_ptr,uint flags)

{
  CAsciiArmor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CAsciiArmorTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CAsciiArmor *)support_codec_cpp_CCodec_dtor_FUN_00440810(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
