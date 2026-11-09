// Name: support_codec.cpp_FUN_00441970
// Address: 00441970
// Address Range: [[00441970, 00441995]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00441970(int param_1)

#include "nocturne.h"

uint support_codec_cpp_FUN_00441970(int param_1)

{
  if ((*(int *)(param_1 + 0x10) != 0) && (0 < *(int *)(param_1 + 0x1c))) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    return 1;
  }
  return 0;
}
