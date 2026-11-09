// Name: support_codec.cpp_FUN_004416b0
// Address: 004416b0
// Address Range: [[004416b0, 004416d4]]
// Convention: unknown
// Signature: void support_codec_cpp_FUN_004416b0(int param_1,uint param_2)

#include "nocturne.h"

void support_codec_cpp_FUN_004416b0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = param_2 & 0xffffff;
  support_codec_cpp_FUN_004417d0(param_1);
  support_codec_cpp_FUN_004417d0(param_1);
  return;
}
