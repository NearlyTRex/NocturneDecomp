// Name: support_trstream.cpp_FUN_0057d240
// Address: 0057d240
// Address Range: [[0057d240, 0057d27b]]
// Convention: unknown
// Signature: void support_trstream_cpp_FUN_0057d240(int param_1)

#include "nocturne.h"

void support_trstream_cpp_FUN_0057d240(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_005b86a0(*(int *)(param_1 + 0x14));
    *(uint *)(param_1 + 0x14) = 0;
  }
  *(uint *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x24) = 0;
  *(uint *)(param_1 + 0x18) = 0;
  return;
}
