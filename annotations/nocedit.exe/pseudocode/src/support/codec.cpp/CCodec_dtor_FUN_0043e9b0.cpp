// Name: support_codec.cpp_CCodec_dtor_FUN_0043e9b0
// Address: 0043e9b0
// Address Range: [[0043e9b0, 0043e9cf] [0043e9d1, 0043e9f8]]
// Convention: __cdecl
// Signature: CCodec * support_codec.cpp_CCodec_dtor_FUN_0043e9b0(CCodec * this_ptr, int d1)

#include "nocturne.h"

CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_0043e9b0(CCodec *this_ptr,int d1)

{
  void *ptr;
  
  if ((d1 & 4U) != 0) {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CCodecTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CCodecVTable;
  if ((d1 & 2U) == 0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  return this_ptr;
}
