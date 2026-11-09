// Name: support_trstream.cpp_FUN_005743f0
// Address: 005743f0
// Address Range: [[005743f0, 00574431]]
// Convention: unknown
// Signature: void support_trstream_cpp_FUN_005743f0(int param_1)

#include "nocturne.h"

void support_trstream_cpp_FUN_005743f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_005a3770(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 4) = 0;
  }
  *(uint *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0x10) = 0;
  *(uint *)(param_1 + 4) = 0;
  return;
}
