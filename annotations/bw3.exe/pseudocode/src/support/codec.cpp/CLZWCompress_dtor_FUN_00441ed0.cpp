// Name: support_codec.cpp_CLZWCompress_dtor_FUN_00441ed0
// Address: 00441ed0
// Address Range: [[00441ed0, 00441f2e]]
// Convention: __cdecl
// Signature: CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_dtor_FUN_00441ed0(CLZWCompress *this_ptr,uint flags)

#include "nocturne.h"

CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_dtor_FUN_00441ed0(CLZWCompress *this_ptr,uint flags)

{
  CLZWDictionary *pCVar1;
  CLZWCompress *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CLZWCompressTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = support_codec_cpp_CLZWDictionary_dtor_FUN_00440bf0(&this_ptr->dictionary,0);
  pCVar2 = (CLZWCompress *)
           support_codec_cpp_CCodec_dtor_FUN_00440810
                     ((CCodec *)&pCVar1[-1].bit_state.accumulated_bits,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005a30c4(pCVar2);
  return pCVar2;
}
