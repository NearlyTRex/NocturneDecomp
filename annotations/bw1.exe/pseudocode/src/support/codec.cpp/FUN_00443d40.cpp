// Name: support_codec.cpp_FUN_00443d40
// Address: 00443d40
// Address Range: [[00443d40, 00443d7b]]
// Convention: unknown
// Signature: uint support_codec_cpp_FUN_00443d40(int param_1)

#include "nocturne.h"

uint support_codec_cpp_FUN_00443d40(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x1c)) {
    uVar1 = support_codec_cpp_FUN_00444020(param_1);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  return (uint)*(byte *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c));
}
