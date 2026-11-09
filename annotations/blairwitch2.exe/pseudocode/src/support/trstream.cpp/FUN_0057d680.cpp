// Name: support_trstream.cpp_FUN_0057d680
// Address: 0057d680
// Address Range: [[0057d680, 0057d6ac]]
// Convention: unknown
// Signature: uint support_trstream_cpp_FUN_0057d680(int param_1)

#include "nocturne.h"

uint support_trstream_cpp_FUN_0057d680(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    return 0xffffffff;
  }
  return (uint)*(byte *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc));
}
