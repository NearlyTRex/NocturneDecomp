// Name: core_enemy.cpp_FUN_004a10f0
// Address: 004a10f0
// Address Range: [[004a10f0, 004a1111]]
// Convention: unknown
// Signature: void core_enemy_cpp_FUN_004a10f0(int param_1,int param_2)

#include "nocturne.h"

void core_enemy_cpp_FUN_004a10f0(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xc1e8)) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0xf8))(param_1);
  return;
}
