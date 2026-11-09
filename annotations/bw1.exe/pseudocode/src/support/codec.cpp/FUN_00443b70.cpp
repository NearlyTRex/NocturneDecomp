// Name: support_codec.cpp_FUN_00443b70
// Address: 00443b70
// Address Range: [[00443b70, 00443b84]]
// Convention: unknown
// Signature: void support_codec_cpp_FUN_00443b70(int param_1)

#include "nocturne.h"

void support_codec_cpp_FUN_00443b70(int param_1)

{
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) * 0x2ff0bd + 1U & 0xffffff;
  return;
}
