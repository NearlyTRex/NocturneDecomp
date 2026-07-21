// Name: core_zombie.cpp_CZombie_dropAndClearTarget_FUN_005618c0
// Address: 005618c0
// Address Range: [[005618c0, 005618f8]]
// Convention: unknown
// Signature: void core_zombie_cpp_CZombie_dropAndClearTarget_FUN_005618c0(int param_1)

#include "nocturne.h"

void core_zombie_cpp_CZombie_dropAndClearTarget_FUN_005618c0(int param_1)

{
  *(uint *)(param_1 + 0xbd34) = 0;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,0,0);
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,1,0);
  return;
}
