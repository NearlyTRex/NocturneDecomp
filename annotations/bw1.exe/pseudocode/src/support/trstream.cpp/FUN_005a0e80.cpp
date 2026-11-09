// Name: support_trstream.cpp_FUN_005a0e80
// Address: 005a0e80
// Address Range: [[005a0e80, 005a0ebb]]
// Convention: unknown
// Signature: void support_trstream_cpp_FUN_005a0e80(int param_1)

#include "nocturne.h"

void support_trstream_cpp_FUN_005a0e80(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_005c09f0(*(int *)(param_1 + 0x14));
    *(uint *)(param_1 + 0x14) = 0;
  }
  *(uint *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x24) = 0;
  *(uint *)(param_1 + 0x18) = 0;
  return;
}
