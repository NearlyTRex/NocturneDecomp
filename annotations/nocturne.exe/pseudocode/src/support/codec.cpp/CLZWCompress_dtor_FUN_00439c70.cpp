// Name: support_codec.cpp_CLZWCompress_dtor_FUN_00439c70
// Address: 00439c70
// Address Range: [[00439c70, 00439cce]]
// Convention: __cdecl
// Signature: CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_dtor_FUN_00439c70(CLZWCompress *this_ptr,uint flags)

#include "nocturne.h"

CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_dtor_FUN_00439c70(CLZWCompress *this_ptr,uint flags)

{
  CLZWDictionary *pCVar1;
  CLZWCompress *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CLZWCompressTypeInfo_0059b530);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = support_codec_cpp_CLZWDictionary_dtor_FUN_00439370(&this_ptr->dictionary,0);
  pCVar2 = (CLZWCompress *)
           support_codec_cpp_CCodec_dtor_FUN_00438f30
                     ((CCodec *)&pCVar1[-1].bit_state.accumulated_bits,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
