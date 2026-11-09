// Name: unkaddr_0059f520.cpp_FUN_005a0d90
// Address: 005a0d90
// Address Range: [[005a0d90, 005a0db4]]
// Convention: unknown
// Signature: undefined4 unkaddr_0059f520_cpp_FUN_005a0d90(int param_1)

#include "nocturne.h"

uint unkaddr_0059f520_cpp_FUN_005a0d90(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0x10)) {
    return 1;
  }
  return 0;
}
