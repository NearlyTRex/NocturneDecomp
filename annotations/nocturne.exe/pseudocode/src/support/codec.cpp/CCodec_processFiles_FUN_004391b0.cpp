// Name: support_codec.cpp_CCodec_processFiles_FUN_004391b0
// Address: 004391b0
// Address Range: [[004391b0, 004392c1]]
// Convention: unknown
// Signature: int support_codec_cpp_CCodec_processFiles_FUN_004391b0(int *param_1,char *param_2,char *param_3)

#include "nocturne.h"

int support_codec_cpp_CCodec_processFiles_FUN_004391b0(int *param_1,char *param_2,char *param_3)

{
  int iVar1;
  byte local_110 [68];
  byte auStack_cc [32];
  int local_ac;
  byte local_90 [68];
  byte auStack_4c [28];
  int local_30;
  uint uStack_14;
  
  crt_fstream_cpp_ifstream_ctor_FUN_00565072(local_110,0,param_2,0x101,0x000001A4);
  if (local_ac == 0) {
    crt_fstream_cpp_ofstream_ctor_FUN_0056511e(local_90,0,param_3,0x112,0x000001A4);
    if (local_30 == 0) {
      (**(code **)(*param_1 + 4))(param_1);
      uStack_14 = 0x7fffffff;
      iVar1 = (**(code **)(*param_1 + 8))(param_1,auStack_cc,&uStack_14,auStack_4c);
      if (iVar1 != 0) {
        (**(code **)(*param_1 + 0xc))(param_1,auStack_4c);
      }
      crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_90,0);
    }
    else {
      crt_fstream_cpp_ofstream_dtor_FUN_005651ca(local_90,0);
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  crt_fstream_cpp_ifstream_dtor_FUN_00565264(local_110,0);
  return iVar1;
}
