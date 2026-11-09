// Name: support_codec.cpp_FUN_00434ff0
// Address: 00434ff0
// Address Range: [[00434ff0, 00435015]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00434ff0(int param_1)

#include "nocturne.h"

uint support_codec_cpp_FUN_00434ff0(int param_1)

{
  if ((*(int *)(param_1 + 0x10) != 0) && (0 < *(int *)(param_1 + 0x1c))) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    return 1;
  }
  return 0;
}
