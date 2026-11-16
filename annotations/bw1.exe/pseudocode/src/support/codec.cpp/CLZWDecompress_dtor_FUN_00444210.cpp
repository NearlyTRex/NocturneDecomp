// Name: support_codec.cpp_CLZWDecompress_dtor_FUN_00444210
// Address: 00444210
// Address Range: [[00444210, 0044426e]]
// Convention: __cdecl
// Signature: CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_dtor_FUN_00444210(CLZWDecompress *this_ptr,uint flags)

#include "nocturne.h"

CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_dtor_FUN_00444210(CLZWDecompress *this_ptr,uint flags)

{
  CLZWDictionary *pCVar1;
  CLZWDecompress *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CLZWDecompressTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = support_codec_cpp_CLZWDictionary_dtor_FUN_00442f90(&this_ptr->lzw_dict,0);
  ptr = (CLZWDecompress *)
        support_codec_cpp_CCodec_dtor_FUN_00442bb0
                  ((CCodec *)&pCVar1[-1].bit_state.accumulated_bits,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
