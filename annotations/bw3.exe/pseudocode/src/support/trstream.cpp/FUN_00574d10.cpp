// Name: support_trstream.cpp_FUN_00574d10
// Address: 00574d10
// Address Range: [[00574d10, 00574d4a]]
// Convention: unknown
// Signature: void support_trstream_cpp_FUN_00574d10(int param_1)

#include "nocturne.h"

void support_trstream_cpp_FUN_00574d10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_005a3770(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 4) = 0;
  }
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0x14) = 1;
  *(uint *)(param_1 + 8) = 0;
  return;
}
