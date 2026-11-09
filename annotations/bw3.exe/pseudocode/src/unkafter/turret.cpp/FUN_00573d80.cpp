// Name: unkafter_turret.cpp_FUN_00573d80
// Address: 00573d80
// Address Range: [[00573d80, 00573da4]]
// Convention: unknown
// Signature: undefined4 unkafter_turret_cpp_FUN_00573d80(int param_1)

#include "nocturne.h"

uint unkafter_turret_cpp_FUN_00573d80(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0x10)) {
    return 1;
  }
  return 0;
}
