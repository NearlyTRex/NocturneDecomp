// Name: support_codec.cpp_CAsciiArmor_dtor_FUN_004441c0
// Address: 004441c0
// Address Range: [[004441c0, 0044420d]]
// Convention: __cdecl
// Signature: CAsciiArmor * __cdecl support_codec_cpp_CAsciiArmor_dtor_FUN_004441c0(CAsciiArmor *this_ptr,uint flags)

#include "nocturne.h"

CAsciiArmor * __cdecl support_codec_cpp_CAsciiArmor_dtor_FUN_004441c0(CAsciiArmor *this_ptr,uint flags)

{
  CAsciiArmor *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CAsciiArmorTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CAsciiArmor *)support_codec_cpp_CCodec_dtor_FUN_00442bb0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
