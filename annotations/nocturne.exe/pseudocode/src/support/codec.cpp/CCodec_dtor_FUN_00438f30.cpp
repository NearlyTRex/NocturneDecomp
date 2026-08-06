// Name: support_codec.cpp_CCodec_dtor_FUN_00438f30
// Address: 00438f30
// Address Range: [[00438f30, 00438f4f] [00438f51, 00438f78]]
// Convention: __cdecl
// Signature: CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_00438f30(CCodec *this_ptr,uint flags)

#include "nocturne.h"

CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_00438f30(CCodec *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CCodecTypeInfo_0059b470);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CCodecVTable;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  operator_delete(this_ptr);
  return this_ptr;
}
