// Name: support_trstream.cpp_FUN_005a19b0
// Address: 005a19b0
// Address Range: [[005a19b0, 005a19d9]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_005a19b0(int param_1)

#include "nocturne.h"

uint support_trstream_cpp_FUN_005a19b0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  _fclose(*(int *)(param_1 + 4));
  *(uint *)(param_1 + 4) = 0;
  return 1;
}
