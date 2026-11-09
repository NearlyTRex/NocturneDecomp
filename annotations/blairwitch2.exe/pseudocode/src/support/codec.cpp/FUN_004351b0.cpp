// Name: support_codec.cpp_FUN_004351b0
// Address: 004351b0
// Address Range: [[004351b0, 004351de]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_004351b0(int param_1)

#include "nocturne.h"

uint support_codec_cpp_FUN_004351b0(int param_1)

{
  if (((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 4) != 0)) &&
     (*(int *)(param_1 + 8) != 0)) {
    if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x18)) {
      return 0;
    }
    return *(uint *)(param_1 + 0x20);
  }
  return 0xffffffff;
}
