// Name: core_flamecan.cpp_FUN_004a0a90
// Address: 004a0a90
// Address Range: [[004a0a90, 004a0abc]]
// Convention: unknown
// Signature: undefined4 core_flamecan_cpp_FUN_004a0a90(int param_1)

#include "nocturne.h"

uint core_flamecan_cpp_FUN_004a0a90(int param_1)

{
  if (*(int *)(param_1 + 0x89c) == 0) {
    return *(uint *)(param_1 + 0x89c);
  }
  core_flame_cpp_FUN_0049f850((CFlame *)(param_1 + 0x49c));
  return *(uint *)(param_1 + 0x89c);
}
