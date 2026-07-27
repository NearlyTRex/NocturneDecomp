// Name: support_codec.cpp_CLZWDictionary_init_FUN_004393d0
// Address: 004393d0
// Address Range: [[004393d0, 00439447]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_CLZWDictionary_init_FUN_004393d0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDictionary_init_FUN_004393d0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != *param_1) || (param_1[4] == 0)) {
    *param_1 = param_2;
    iVar1 = realloc(param_1[4],param_2 << 4);
    param_1[4] = iVar1;
    if (iVar1 == 0) {
      PTR_01cc4800 = "..\\support\\codec.cpp";
      INT_01cc4804 = 0x2c7;
      core_main_c_FUN_004c8440("CLZWDictionary::init - out of memory");
      param_1[1] = param_3;
      support_codec_cpp_CLZWDictionary_initTable_FUN_00439450(param_1);
      return;
    }
  }
  param_1[1] = param_3;
  support_codec_cpp_CLZWDictionary_initTable_FUN_00439450(param_1);
  return;
}
