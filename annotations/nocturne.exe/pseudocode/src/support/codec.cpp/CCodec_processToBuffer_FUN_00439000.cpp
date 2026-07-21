// Name: support_codec.cpp_CCodec_processToBuffer_FUN_00439000
// Address: 00439000
// Address Range: [[00439000, 004390a0]]
// Convention: unknown
// Signature: int support_codec_cpp_CCodec_processToBuffer_FUN_00439000(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,int param_6)

#include "nocturne.h"

int support_codec_cpp_CCodec_processToBuffer_FUN_00439000(int *param_1,uint param_2,uint param_3,uint param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  byte local_90 [72];
  byte local_48 [56];
  
  crt_strstream_cpp_ostrstream_ctor_FUN_00564d92(local_90,0,param_4,*param_5,2);
  iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,param_3,local_48);
  if ((iVar1 != 0) && (param_6 != 0)) {
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,local_48);
  }
  iVar2 = crt_strstream_cpp_ostrstream_tellp_FUN_00564e6b(local_48);
  *param_5 = *param_5 - iVar2;
  crt_strstream_cpp_ostrstream_dtor_FUN_00564e98(local_90,0);
  return iVar1;
}
