// Name: support_codec.cpp_CCodec_dtor_FUN_0043e9b0
// Address: 0043e9b0
// Address Range: [[0043e9b0, 0043e9cf] [0043e9d1, 0043e9f8]]
// Convention: __cdecl
// Signature: CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_0043e9b0(CCodec *this_ptr,uint flags)

#include "nocturne.h"

CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_0043e9b0(CCodec *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CCodecTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CCodecVTable;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(this_ptr);
  return this_ptr;
}
