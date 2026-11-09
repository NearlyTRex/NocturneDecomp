// Name: core_bugs.cpp_FUN_00421ad0
// Address: 00421ad0
// Address Range: [[00421ad0, 00421af0]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00421ad0(int param_1,int param_2)

#include "nocturne.h"

void core_bugs_cpp_FUN_00421ad0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x27b0) != 0) {
    return;
  }
  *(uint *)(param_2 + 4) = 0;
  core_enemy_cpp_FUN_00489b80(param_1,param_2);
  return;
}
