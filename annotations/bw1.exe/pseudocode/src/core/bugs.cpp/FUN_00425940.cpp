// Name: core_bugs.cpp_FUN_00425940
// Address: 00425940
// Address Range: [[00425940, 00425960]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00425940(int param_1,int param_2)

#include "nocturne.h"

void core_bugs_cpp_FUN_00425940(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x27b0) != 0) {
    return;
  }
  *(uint *)(param_2 + 4) = 0;
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
