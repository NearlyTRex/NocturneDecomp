// Name: support_codec.cpp_FUN_004419a0
// Address: 004419a0
// Address Range: [[004419a0, 004419db]]
// Convention: unknown
// Signature: uint support_codec_cpp_FUN_004419a0(int param_1)

#include "nocturne.h"

uint support_codec_cpp_FUN_004419a0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x1c)) {
    uVar1 = support_codec_cpp_FUN_00441c80(param_1);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  return (uint)*(byte *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c));
}
