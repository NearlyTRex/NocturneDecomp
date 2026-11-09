// Name: core_crossbow.cpp_FUN_0043a710
// Address: 0043a710
// Address Range: [[0043a710, 0043a733]]
// Convention: unknown
// Signature: undefined4 core_crossbow_cpp_FUN_0043a710(int param_1)

#include "nocturne.h"

uint core_crossbow_cpp_FUN_0043a710(int param_1)

{
  if (*(int *)(param_1 + 0x6d4) == 0) {
    return 0;
  }
  core_flame_cpp_FUN_0049f850((CFlame *)(param_1 + 0x6d8));
  return 1;
}
