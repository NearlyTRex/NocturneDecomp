// Name: core_door.cpp_FUN_00463d30
// Address: 00463d30
// Address Range: [[00463d30, 00463d68]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_00463d30(int param_1,int param_2)

#include "nocturne.h"

void core_door_cpp_FUN_00463d30(int param_1,int param_2)

{
  *(int *)(param_1 + 0x2e0) = param_2;
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x9ac) = 0;
  }
  if (*(int *)(param_1 + 0x2e0) == 2) {
    *(uint *)(param_1 + 0x9ac) = *(uint *)(param_1 + 0x9b0);
  }
  core_door_cpp_FUN_00463d80(param_1);
  return;
}
