// Name: support_trstream.cpp_FUN_005a13d0
// Address: 005a13d0
// Address Range: [[005a13d0, 005a13f4]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_005a13d0(int param_1)

#include "nocturne.h"

uint support_trstream_cpp_FUN_005a13d0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    return 1;
  }
  return 0;
}
