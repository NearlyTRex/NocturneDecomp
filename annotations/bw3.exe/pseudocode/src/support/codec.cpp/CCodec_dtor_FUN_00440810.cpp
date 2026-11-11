// Name: support_codec.cpp_CCodec_dtor_FUN_00440810
// Address: 00440810
// Address Range: [[00440810, 00440858]]
// Convention: __cdecl
// Signature: CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_00440810(CCodec *this_ptr,uint flags)

#include "nocturne.h"

CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_00440810(CCodec *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CCodecTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &PTR_support_codec_cpp_CCodec_dtor_FUN_00440810_005dd434;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005a30c4(this_ptr);
  return this_ptr;
}
