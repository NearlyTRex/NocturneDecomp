// Name: support_codec.cpp_CLZWDecompress_dtor_FUN_00441e70
// Address: 00441e70
// Address Range: [[00441e70, 00441ece]]
// Convention: __cdecl
// Signature: CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_dtor_FUN_00441e70(CLZWDecompress *this_ptr,uint flags)

#include "nocturne.h"

CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_dtor_FUN_00441e70(CLZWDecompress *this_ptr,uint flags)

{
  CLZWDictionary *pCVar1;
  CLZWDecompress *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CLZWDecompressTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = support_codec_cpp_CLZWDictionary_dtor_FUN_00440bf0
                     ((CLZWDictionary *)&this_ptr->field_0x4,0);
  pCVar2 = (CLZWDecompress *)
           support_codec_cpp_CCodec_dtor_FUN_00440810
                     ((CCodec *)&pCVar1[-1].bit_state.accumulated_bits,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005a30c4(pCVar2);
  return pCVar2;
}
