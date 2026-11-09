// Name: support_codec.cpp_FUN_00434fa0
// Address: 00434fa0
// Address Range: [[00434fa0, 00434fe3]]
// Convention: unknown
// Signature: uint support_codec_cpp_FUN_00434fa0(int param_1)

#include "nocturne.h"

uint support_codec_cpp_FUN_00434fa0(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x1c)) {
    uVar2 = support_codec_cpp_FUN_00435300(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c));
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return (uint)bVar1;
}
