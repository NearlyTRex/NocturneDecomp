// Name: unkaddr_004a76f0.cpp_FUN_004a83a0
// Address: 004a83a0
// Address Range: [[004a83a0, 004a83ca]]
// Convention: unknown
// Signature: int unkaddr_004a76f0_cpp_FUN_004a83a0(int param_1)

#include "nocturne.h"

int unkaddr_004a76f0_cpp_FUN_004a83a0(int param_1)

{
  *(byte ***)(param_1 + 0x14) = &PTR_unkaddr_004a76f0_cpp_FUN_004a83a0_005e0284;
  if (*(int *)(param_1 + 0x10) == 0) {
    return param_1;
  }
  FUN_005a3770(*(int *)(param_1 + 0x10));
  *(uint *)(param_1 + 0x10) = 0;
  return param_1;
}
