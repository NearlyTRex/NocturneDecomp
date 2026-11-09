// Name: support_codec.cpp_CCodec_dtor_FUN_00433e90
// Address: 00433e90
// Address Range: [[00433e90, 00433eaf] [00433eb1, 00433ed8]]
// Convention: __cdecl
// Signature: CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_00433e90(CCodec *this_ptr,uint flags)

#include "nocturne.h"

CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_00433e90(CCodec *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CCodecTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  *this_ptr = (CCodec)&g_CCodecVTable;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005b7fdc(this_ptr);
  return this_ptr;
}
