// Name: support_codec.cpp_CLZWDecompress_dtor_FUN_00439c10
// Address: 00439c10
// Address Range: [[00439c10, 00439c6e]]
// Convention: unknown
// Signature: int support_codec_cpp_CLZWDecompress_dtor_FUN_00439c10(int param_1,byte param_2)

#include "nocturne.h"

int support_codec_cpp_CLZWDecompress_dtor_FUN_00439c10(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 & 4) != 0) {
    uVar2 = __vec_delete(param_1,&g_CLZWDecompressTypeInfo_0059b510);
    shape_memdbg_cpp_free_FUN_00564486(uVar2);
    return param_1;
  }
  iVar1 = support_codec_cpp_CLZWDictionary_dtor_FUN_00439370(param_1 + 4,0);
  iVar1 = support_codec_cpp_CCodec_dtor_FUN_00438f30(iVar1 + -4,1);
  if ((param_2 & 2) == 0) {
    return iVar1;
  }
  FUN_00564494(iVar1);
  return iVar1;
}
