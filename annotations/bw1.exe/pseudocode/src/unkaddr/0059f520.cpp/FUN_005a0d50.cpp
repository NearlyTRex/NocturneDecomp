// Name: unkaddr_0059f520.cpp_FUN_005a0d50
// Address: 005a0d50
// Address Range: [[005a0d50, 005a0d63]]
// Convention: unknown
// Signature: undefined4 unkaddr_0059f520_cpp_FUN_005a0d50(int param_1)

#include "nocturne.h"

uint unkaddr_0059f520_cpp_FUN_005a0d50(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(uint *)(param_1 + 0x10);
}
