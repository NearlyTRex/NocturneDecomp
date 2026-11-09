// Name: core_turret.cpp_FUN_0057f9e0
// Address: 0057f9e0
// Address Range: [[0057f9e0, 0057f9fb]]
// Convention: unknown
// Signature: void core_turret_cpp_FUN_0057f9e0(int param_1,int param_2)

#include "nocturne.h"

void core_turret_cpp_FUN_0057f9e0(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x9b8)) {
    return;
  }
  *(uint *)(param_1 + 0x9b8) = 0;
  return;
}
