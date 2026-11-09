// Name: support_trstream.cpp_FUN_0057d780
// Address: 0057d780
// Address Range: [[0057d780, 0057d7a4]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_0057d780(int param_1)

#include "nocturne.h"

uint support_trstream_cpp_FUN_0057d780(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    return 1;
  }
  return 0;
}
