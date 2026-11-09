// Name: unkaddr_004b9ab0.cpp_FUN_004ba760
// Address: 004ba760
// Address Range: [[004ba760, 004ba78a]]
// Convention: unknown
// Signature: int unkaddr_004b9ab0_cpp_FUN_004ba760(int param_1)

#include "nocturne.h"

int unkaddr_004b9ab0_cpp_FUN_004ba760(int param_1)

{
  *(byte ***)(param_1 + 0x14) = &PTR_unkaddr_004b9ab0_cpp_FUN_004ba760_00600924;
  if (*(int *)(param_1 + 0x10) == 0) {
    return param_1;
  }
  FUN_005c09f0(*(int *)(param_1 + 0x10));
  *(uint *)(param_1 + 0x10) = 0;
  return param_1;
}
