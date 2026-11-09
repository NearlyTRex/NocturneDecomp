// Name: support_trstream.cpp_FUN_005743a0
// Address: 005743a0
// Address Range: [[005743a0, 005743af] [005743b6, 005743b9]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_005743a0(int param_1)

#include "nocturne.h"

uint support_trstream_cpp_FUN_005743a0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(uint *)(param_1 + 0xc);
}
