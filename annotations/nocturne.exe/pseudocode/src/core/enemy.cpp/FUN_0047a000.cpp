// Name: core_enemy.cpp_FUN_0047a000
// Address: 0047a000
// Address Range: [[0047a000, 0047a029]]
// Convention: unknown
// Signature: void core_enemy_cpp_FUN_0047a000(int param_1,int param_2)

#include "nocturne.h"

void core_enemy_cpp_FUN_0047a000(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xbc90) != 0) {
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x2404) = 1;
    }
    core_charactr_cpp_FUN_00426510(param_1,param_2);
  }
  return;
}
