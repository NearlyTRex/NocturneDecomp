// Name: support_codec.cpp_CLZWDecompress_dtor_FUN_0043f6b0
// Address: 0043f6b0
// Address Range: [[0043f6b0, 0043f70e]]
// Convention: __cdecl
// Signature: CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_dtor_FUN_0043f6b0(CLZWDecompress *this_ptr,uint flags)

#include "nocturne.h"

CLZWDecompress * __cdecl
support_codec_cpp_CLZWDecompress_dtor_FUN_0043f6b0(CLZWDecompress *this_ptr,uint flags)

{
  CLZWDictionary *pCVar1;
  CLZWDecompress *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CLZWDecompressTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&this_ptr->lzw_dict,0);
  ptr = (CLZWDecompress *)
        support_codec_cpp_CCodec_dtor_FUN_0043e9b0
                  ((CCodec *)&pCVar1[-1].bit_state.accumulated_bits,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
