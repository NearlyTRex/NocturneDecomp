// Name: support_codec.cpp_FUN_00443730
// Address: 00443730
// Address Range: [[00443730, 00443789]]
// Convention: unknown
// Signature: int support_codec_cpp_FUN_00443730(int *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

int support_codec_cpp_FUN_00443730(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  do {
    if (param_1[0xb] < 0) {
      iVar1 = support_codec_cpp_FUN_004431b0(param_1 + 1,param_1 + 6,param_2);
      if (iVar1 < 0) {
        if (iVar1 == -1) {
          return 1;
        }
        return 0;
      }
      param_1[0xb] = iVar1;
    }
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,param_3);
  } while (iVar1 == 1);
  return iVar1;
}
