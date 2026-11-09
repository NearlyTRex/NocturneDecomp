// Name: core_enemy.cpp_FUN_00488a80
// Address: 00488a80
// Address Range: [[00488a80, 00488aa1]]
// Convention: unknown
// Signature: void core_enemy_cpp_FUN_00488a80(int param_1,int param_2)

#include "nocturne.h"

void core_enemy_cpp_FUN_00488a80(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x10a78)) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x100))(param_1);
  return;
}
