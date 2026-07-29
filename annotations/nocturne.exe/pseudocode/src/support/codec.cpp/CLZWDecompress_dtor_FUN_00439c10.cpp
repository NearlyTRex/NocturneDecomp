// Name: support_codec.cpp_CLZWDecompress_dtor_FUN_00439c10
// Address: 00439c10
// Address Range: [[00439c10, 00439c6e]]
// Convention: __cdecl
// Signature: CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_dtor_FUN_00439c10(CLZWDecompress *this_ptr,uint flags)

#include "nocturne.h"

CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_dtor_FUN_00439c10(CLZWDecompress *this_ptr,uint flags)

{
  CLZWDictionary *pCVar1;
  CLZWDecompress *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CLZWDecompressTypeInfo_0059b510);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = support_codec_cpp_CLZWDictionary_dtor_FUN_00439370(&this_ptr->lzw_dict,0);
  pCVar2 = (CLZWDecompress *)
           support_codec_cpp_CCodec_dtor_FUN_00438f30
                     ((CCodec *)&pCVar1[-1].bit_state.accumulated_bits,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
