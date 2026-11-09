// Name: core_charactr.cpp_FUN_00428ac0
// Address: 00428ac0
// Address Range: [[00428ac0, 00428ae5]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00428ac0(int param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_00428ac0(int param_1)

{
  if (*(CDoor **)(param_1 + 0x27b0) == (CDoor *)0x0) {
    return;
  }
  core_door_cpp_FUN_0045efc0(*(CDoor **)(param_1 + 0x27b0));
  *(uint *)(param_1 + 0x27b0) = 0;
  return;
}
