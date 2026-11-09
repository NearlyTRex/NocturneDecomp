// Name: support_trstream.cpp_FUN_0057d760
// Address: 0057d760
// Address Range: [[0057d760, 0057d76f] [0057d776, 0057d779]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_0057d760(int param_1)

#include "nocturne.h"

uint support_trstream_cpp_FUN_0057d760(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(uint *)(param_1 + 0xc);
}
