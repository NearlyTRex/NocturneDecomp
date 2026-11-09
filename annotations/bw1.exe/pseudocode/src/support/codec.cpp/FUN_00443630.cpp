// Name: support_codec.cpp_FUN_00443630
// Address: 00443630
// Address Range: [[00443630, 004436a6]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00443630(int param_1,undefined4 param_2)

#include "nocturne.h"

uint support_codec_cpp_FUN_00443630(int param_1,uint param_2)

{
  int iVar1;
  
  if (-1 < *(int *)(param_1 + 0x30)) {
    iVar1 = support_codec_cpp_FUN_00443290
                      (param_1 + 4,*(int *)(param_1 + 0x30),param_1 + 0x18,param_2);
    if (iVar1 != 0) {
      if (iVar1 == -1) {
        return 2;
      }
      if (iVar1 == -2) {
        *(uint *)(param_1 + 0x30) = 0xffffffff;
        return 2;
      }
      return 0;
    }
  }
  iVar1 = support_codec_cpp_FUN_004427e0(param_1 + 0x18,param_2);
  if ((iVar1 != 0) && (iVar1 == -1)) {
    return 2;
  }
  return 1;
}
