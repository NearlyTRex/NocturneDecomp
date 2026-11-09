// Name: support_codec.cpp_CLZWCompress_dtor_FUN_00444270
// Address: 00444270
// Address Range: [[00444270, 004442ce]]
// Convention: __cdecl
// Signature: CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_dtor_FUN_00444270(CLZWCompress *this_ptr,uint flags)

#include "nocturne.h"

CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_dtor_FUN_00444270(CLZWCompress *this_ptr,uint flags)

{
  CLZWDictionary *pCVar1;
  CLZWCompress *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CLZWCompressTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = support_codec_cpp_CLZWDictionary_dtor_FUN_00442f90
                     ((CLZWDictionary *)&this_ptr->field_0x4,0);
  pCVar2 = (CLZWCompress *)support_codec_cpp_CCodec_dtor_FUN_00442bb0((CCodec *)(pCVar1 + -4),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005c0344(pCVar2);
  return pCVar2;
}
