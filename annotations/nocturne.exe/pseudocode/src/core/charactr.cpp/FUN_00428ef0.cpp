// Name: core_charactr.cpp_FUN_00428ef0
// Address: 00428ef0
// Address Range: [[00428ef0, 00428f15]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00428ef0(int param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_00428ef0(int param_1)

{
  if (*(int *)(param_1 + 0x25ac) == 0) {
    return;
  }
  core_door_cpp_CDoor_onOpened_FUN_00455270(*(int *)(param_1 + 0x25ac));
  *(uint *)(param_1 + 0x25ac) = 0;
  return;
}
