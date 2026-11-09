// Name: support_codec.cpp_FUN_004427a0
// Address: 004427a0
// Address Range: [[004427a0, 004427df]]
// Convention: unknown
// Signature: int support_codec_cpp_FUN_004427a0(int *param_1,int *param_2)

#include "nocturne.h"

int support_codec_cpp_FUN_004427a0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 < 8) {
      return 0;
    }
    iVar1 = (**(code **)(*param_2 + 4))(param_2,(char)param_1[1]);
    if (iVar1 < 0) break;
    iVar1 = *param_1 + -8;
    param_1[1] = (uint)param_1[1] >> 8;
    *param_1 = iVar1;
  }
  return iVar1;
}
