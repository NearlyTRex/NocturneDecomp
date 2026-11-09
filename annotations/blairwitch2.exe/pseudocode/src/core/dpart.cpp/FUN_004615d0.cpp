// Name: core_dpart.cpp_FUN_004615d0
// Address: 004615d0
// Address Range: [[004615d0, 00461611]]
// Convention: unknown
// Signature: void core_dpart_cpp_FUN_004615d0(int param_1)

#include "nocturne.h"

void core_dpart_cpp_FUN_004615d0(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_005b86a0(*(int *)(param_1 + 0x2c));
    *(uint *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_005b86a0(*(int *)(param_1 + 0x34));
    *(uint *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_005b86a0(*(int *)(param_1 + 0x30));
  *(uint *)(param_1 + 0x30) = 0;
  return;
}
