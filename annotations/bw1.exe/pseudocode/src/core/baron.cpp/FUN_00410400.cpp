// Name: core_baron.cpp_FUN_00410400
// Address: 00410400
// Address Range: [[00410400, 0041041f]]
// Convention: unknown
// Signature: void core_baron_cpp_FUN_00410400(int param_1,int param_2)

#include "nocturne.h"

void core_baron_cpp_FUN_00410400(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x27b0) != 0) {
    return;
  }
  *(uint *)(param_2 + 4) = 0;
  core_charactr_cpp_FUN_004319e0(param_1,param_2);
  return;
}
