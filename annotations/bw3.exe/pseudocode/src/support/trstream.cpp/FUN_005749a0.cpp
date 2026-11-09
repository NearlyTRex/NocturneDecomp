// Name: support_trstream.cpp_FUN_005749a0
// Address: 005749a0
// Address Range: [[005749a0, 005749c9]]
// Convention: unknown
// Signature: undefined4 support_trstream_cpp_FUN_005749a0(int param_1)

#include "nocturne.h"

uint support_trstream_cpp_FUN_005749a0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  _fclose(*(int *)(param_1 + 4));
  *(uint *)(param_1 + 4) = 0;
  return 1;
}
