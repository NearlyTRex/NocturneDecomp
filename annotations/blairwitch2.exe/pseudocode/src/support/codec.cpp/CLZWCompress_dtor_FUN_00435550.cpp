// Name: support_codec.cpp_CLZWCompress_dtor_FUN_00435550
// Address: 00435550
// Address Range: [[00435550, 004355ae]]
// Convention: __cdecl
// Signature: CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_dtor_FUN_00435550(CLZWCompress *this_ptr,uint flags)

#include "nocturne.h"

CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_dtor_FUN_00435550(CLZWCompress *this_ptr,uint flags)

{
  CLZWDictionary *pCVar1;
  CLZWCompress *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CLZWCompressTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = support_codec_cpp_CLZWDictionary_dtor_FUN_00434270(&this_ptr->dictionary,0);
  pCVar2 = (CLZWCompress *)
           support_codec_cpp_CCodec_dtor_FUN_00433e90
                     ((CCodec *)&pCVar1[-1].bit_state.accumulated_bits,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
