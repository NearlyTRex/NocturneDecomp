// Name: support_trstream.cpp_FUN_0057e0d0
// Address: 0057e0d0
// Address Range: [[0057e0d0, 0057e10a]]
// Convention: unknown
// Signature: void support_trstream_cpp_FUN_0057e0d0(int param_1)

#include "nocturne.h"

void support_trstream_cpp_FUN_0057e0d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_005b86a0(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 4) = 0;
  }
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0x14) = 1;
  *(uint *)(param_1 + 8) = 0;
  return;
}
