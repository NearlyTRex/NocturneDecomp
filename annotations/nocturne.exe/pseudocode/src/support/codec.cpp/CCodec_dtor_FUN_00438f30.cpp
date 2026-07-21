// Name: support_codec.cpp_CCodec_dtor_FUN_00438f30
// Address: 00438f30
// Address Range: [[00438f30, 00438f4f] [00438f51, 00438f78]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl support_codec_cpp_CCodec_dtor_FUN_00438f30(undefined4 *param_1,uint param_2)

#include "nocturne.h"

uint * __cdecl support_codec_cpp_CCodec_dtor_FUN_00438f30(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 4) != 0) {
    uVar1 = __vec_delete(param_1,&DAT_0059b470);
    shape_memdbg_cpp_free_FUN_00564486(uVar1);
    return param_1;
  }
  *param_1 = &PTR_support_codec_cpp_CCodec_dtor_FUN_00438f30_0059b3e4;
  if ((param_2 & 2) == 0) {
    return param_1;
  }
  FUN_00564494(param_1);
  return param_1;
}
