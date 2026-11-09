// Name: support_codec.cpp_CLZWDecompress_dtor_FUN_00444210
// Address: 00444210
// Address Range: [[00444210, 0044426e]]
// Convention: __cdecl
// Signature: CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_dtor_FUN_00444210(CLZWDecompress *this_ptr,uint flags)

#include "nocturne.h"

CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_dtor_FUN_00444210(CLZWDecompress *this_ptr,uint flags)

{
  CLZWDictionary *pCVar1;
  CLZWDecompress *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CLZWDecompressTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = support_codec_cpp_CLZWDictionary_dtor_FUN_00442f90
                     ((CLZWDictionary *)&this_ptr->field_0x4,0);
  pCVar2 = (CLZWDecompress *)support_codec_cpp_CCodec_dtor_FUN_00442bb0((CCodec *)(pCVar1 + -4),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005c0344(pCVar2);
  return pCVar2;
}
