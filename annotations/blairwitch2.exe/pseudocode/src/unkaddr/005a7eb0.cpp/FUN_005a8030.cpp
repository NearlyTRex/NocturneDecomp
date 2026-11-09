// Name: unkaddr_005a7eb0.cpp_FUN_005a8030
// Address: 005a8030
// Address Range: [[005a8030, 005a8042]]
// Convention: unknown
// Signature: void unkaddr_005a7eb0_cpp_FUN_005a8030(int param_1,undefined4 param_2)

#include "nocturne.h"

void unkaddr_005a7eb0_cpp_FUN_005a8030(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x18) = param_2;
  return;
}
