// Name: support_codec.cpp_CCodec_processFromBuffer_FUN_004390b0
// Address: 004390b0
// Address Range: [[004390b0, 0043911b]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_004390b0(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_004390b0(int *param_1,uint param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  byte local_90 [72];
  byte local_48 [60];
  
  crt_strstream_cpp_istrstream_ctor_FUN_00564f32(local_90,0,param_2,*param_3);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,local_48,param_3,param_4);
  crt_strstream_cpp_istrstream_dtor_FUN_00564fd8(local_90,0);
  return uVar1;
}
