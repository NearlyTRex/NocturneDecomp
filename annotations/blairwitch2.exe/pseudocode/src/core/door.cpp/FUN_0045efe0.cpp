// Name: core_door.cpp_FUN_0045efe0
// Address: 0045efe0
// Address Range: [[0045efe0, 0045f018]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_0045efe0(int param_1,int param_2)

#include "nocturne.h"

void core_door_cpp_FUN_0045efe0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x43c) = param_2;
  if (param_2 == 0) {
    *(uint *)(param_1 + 0xb08) = 0;
  }
  if (*(int *)(param_1 + 0x43c) == 2) {
    *(uint *)(param_1 + 0xb08) = *(uint *)(param_1 + 0xb0c);
  }
  core_door_cpp_FUN_0045f030(param_1);
  return;
}
