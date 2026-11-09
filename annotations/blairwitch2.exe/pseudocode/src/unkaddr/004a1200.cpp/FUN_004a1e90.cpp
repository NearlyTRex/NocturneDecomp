// Name: unkaddr_004a1200.cpp_FUN_004a1e90
// Address: 004a1e90
// Address Range: [[004a1e90, 004a1eba]]
// Convention: unknown
// Signature: int unkaddr_004a1200_cpp_FUN_004a1e90(int param_1)

#include "nocturne.h"

int unkaddr_004a1200_cpp_FUN_004a1e90(int param_1)

{
  *(byte ***)(param_1 + 0x14) = &PTR_unkaddr_004a1200_cpp_FUN_004a1e90_005f6ec4;
  if (*(int *)(param_1 + 0x10) == 0) {
    return param_1;
  }
  FUN_005b86a0(*(int *)(param_1 + 0x10));
  *(uint *)(param_1 + 0x10) = 0;
  return param_1;
}
