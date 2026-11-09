// Name: support_codec.cpp_CCodec_dtor_FUN_00442bb0
// Address: 00442bb0
// Address Range: [[00442bb0, 00442bf8]]
// Convention: __cdecl
// Signature: CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_00442bb0(CCodec *this_ptr,uint flags)

#include "nocturne.h"

CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_00442bb0(CCodec *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CCodecTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  *this_ptr = (CCodec)&PTR_support_codec_cpp_CCodec_dtor_FUN_00442bb0_005fd954;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005c0344(this_ptr);
  return this_ptr;
}
