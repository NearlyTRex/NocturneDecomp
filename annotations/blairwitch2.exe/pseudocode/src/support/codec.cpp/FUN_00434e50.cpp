// Name: support_codec.cpp_FUN_00434e50
// Address: 00434e50
// Address Range: [[00434e50, 00434e64]]
// Convention: unknown
// Signature: void support_codec_cpp_FUN_00434e50(int param_1)

#include "nocturne.h"

void support_codec_cpp_FUN_00434e50(int param_1)

{
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) * 0x2ff0bd + 1U & 0xffffff;
  return;
}
