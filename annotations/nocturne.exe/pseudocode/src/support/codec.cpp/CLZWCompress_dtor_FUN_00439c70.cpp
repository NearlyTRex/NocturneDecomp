// Name: support_codec.cpp_CLZWCompress_dtor_FUN_00439c70
// Address: 00439c70
// Address Range: [[00439c70, 00439cce]]
// Convention: unknown
// Signature: CCodec * support_codec_cpp_CLZWCompress_dtor_FUN_00439c70(CCodec *param_1,byte param_2)

#include "nocturne.h"

CCodec * support_codec_cpp_CLZWCompress_dtor_FUN_00439c70(CCodec *param_1,byte param_2)

{
  CLZWDictionary *pCVar1;
  CCodec *pCVar2;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CLZWCompressTypeInfo_0059b530);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = support_codec_cpp_CLZWDictionary_dtor_FUN_00439370((CLZWDictionary *)(param_1 + 1),0);
  pCVar2 = support_codec_cpp_CCodec_dtor_FUN_00438f30
                     ((CCodec *)&pCVar1[-1].bit_state.accumulated_bits,1);
  if ((param_2 & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
