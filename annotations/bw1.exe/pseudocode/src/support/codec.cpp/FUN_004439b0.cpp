// Name: support_codec.cpp_FUN_004439b0
// Address: 004439b0
// Address Range: [[004439b0, 004439f3]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_004439b0(int param_1,int *param_2,undefined4 param_3)

#include "nocturne.h"

uint support_codec_cpp_FUN_004439b0(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (**(code **)(*param_2 + 4))(param_2);
    if (iVar1 < 0) break;
    iVar1 = support_codec_cpp_FUN_00443830(iVar1);
    if (-1 < iVar1) {
      support_codec_cpp_FUN_00442600(param_1 + 4,6,iVar1,param_3);
    }
  }
  return 1;
}
