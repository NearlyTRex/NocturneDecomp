// Name: unkaddr_0057b9a0.cpp_FUN_0057d110
// Address: 0057d110
// Address Range: [[0057d110, 0057d123]]
// Convention: unknown
// Signature: undefined4 unkaddr_0057b9a0_cpp_FUN_0057d110(int param_1)

#include "nocturne.h"

uint unkaddr_0057b9a0_cpp_FUN_0057d110(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(uint *)(param_1 + 0x10);
}
