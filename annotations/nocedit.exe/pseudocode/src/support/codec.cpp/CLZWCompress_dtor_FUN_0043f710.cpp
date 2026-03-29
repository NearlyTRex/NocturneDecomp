// Name: support_codec.cpp_CLZWCompress_dtor_FUN_0043f710
// Address: 0043f710
// Address Range: [[0043f710, 0043f76e]]
// Convention: __cdecl
// Signature: CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_dtor_FUN_0043f710(CLZWCompress *this_ptr,uint flags)

#include "nocturne.h"

CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_dtor_FUN_0043f710(CLZWCompress *this_ptr,uint flags)

{
  CLZWCompress_ptr_4 pCVar1;
  CLZWCompress *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    __vec_delete(this_ptr,&g_CLZWCompressTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&this_ptr->dictionary,0);
  ptr = (CLZWCompress *)support_codec_cpp_CCodec_dtor_FUN_0043e9b0(&ADJ(pCVar1)->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  return ptr;
}
