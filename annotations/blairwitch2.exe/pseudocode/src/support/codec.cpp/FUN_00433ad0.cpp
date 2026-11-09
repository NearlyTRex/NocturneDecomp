// Name: support_codec.cpp_FUN_00433ad0
// Address: 00433ad0
// Address Range: [[00433ad0, 00433b16]]
// Convention: unknown
// Signature: int support_codec_cpp_FUN_00433ad0(int *param_1,int *param_2)

#include "nocturne.h"

int support_codec_cpp_FUN_00433ad0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = support_codec_cpp_FUN_00433a90(param_1,param_2);
  if (-1 < iVar1) {
    if (*param_1 < 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(*param_2 + 4))(param_2,(char)param_1[1]);
      if (-1 < iVar1) {
        *param_1 = 0;
        param_1[1] = 0;
        return 0;
      }
    }
  }
  return iVar1;
}
