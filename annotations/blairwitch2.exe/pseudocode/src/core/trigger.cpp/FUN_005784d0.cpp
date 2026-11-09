// Name: core_trigger.cpp_FUN_005784d0
// Address: 005784d0
// Address Range: [[005784d0, 005784f2]]
// Convention: unknown
// Signature: undefined4 core_trigger_cpp_FUN_005784d0(int param_1)

#include "nocturne.h"

uint core_trigger_cpp_FUN_005784d0(int param_1)

{
  if (*(int *)(param_1 + 0x2d0) != 3) {
    return 1;
  }
  *(uint *)(param_1 + 0x44c) = 1;
  return 1;
}
