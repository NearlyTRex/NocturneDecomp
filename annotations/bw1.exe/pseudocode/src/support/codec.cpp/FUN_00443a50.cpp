// Name: support_codec.cpp_FUN_00443a50
// Address: 00443a50
// Address Range: [[00443a50, 00443a74]]
// Convention: unknown
// Signature: void support_codec_cpp_FUN_00443a50(int param_1,uint param_2)

#include "nocturne.h"

void support_codec_cpp_FUN_00443a50(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = param_2 & 0xffffff;
  support_codec_cpp_FUN_00443b70(param_1);
  support_codec_cpp_FUN_00443b70(param_1);
  return;
}
