// Name: support_codec.cpp_FUN_00434d30
// Address: 00434d30
// Address Range: [[00434d30, 00434d54]]
// Convention: unknown
// Signature: void support_codec_cpp_FUN_00434d30(int param_1,uint param_2)

#include "nocturne.h"

void support_codec_cpp_FUN_00434d30(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = param_2 & 0xffffff;
  support_codec_cpp_FUN_00434e50(param_1);
  support_codec_cpp_FUN_00434e50(param_1);
  return;
}
