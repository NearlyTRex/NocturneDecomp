// Name: support_trstream.cpp_FUN_005a1400
// Address: 005a1400
// Address Range: [[005a1400, 005a1441]]
// Convention: unknown
// Signature: void support_trstream_cpp_FUN_005a1400(int param_1)

#include "nocturne.h"

void support_trstream_cpp_FUN_005a1400(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_005c09f0(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 4) = 0;
  }
  *(uint *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0x10) = 0;
  *(uint *)(param_1 + 4) = 0;
  return;
}
