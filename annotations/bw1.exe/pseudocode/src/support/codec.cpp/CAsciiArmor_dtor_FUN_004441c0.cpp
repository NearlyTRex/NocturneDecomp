// Name: support_codec.cpp_CAsciiArmor_dtor_FUN_004441c0
// Address: 004441c0
// Address Range: [[004441c0, 0044420d]]
// Convention: __cdecl
// Signature: CAsciiArmor * __cdecl support_codec_cpp_CAsciiArmor_dtor_FUN_004441c0(CAsciiArmor *this_ptr,uint flags)

#include "nocturne.h"

CAsciiArmor * __cdecl support_codec_cpp_CAsciiArmor_dtor_FUN_004441c0(CAsciiArmor *this_ptr,uint flags)

{
  CAsciiArmor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CAsciiArmorTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CAsciiArmor *)support_codec_cpp_CCodec_dtor_FUN_00442bb0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
