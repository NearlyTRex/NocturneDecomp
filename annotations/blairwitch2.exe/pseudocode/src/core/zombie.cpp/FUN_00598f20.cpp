// Name: core_zombie.cpp_FUN_00598f20
// Address: 00598f20
// Address Range: [[00598f20, 00598f58]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_00598f20(int param_1)

#include "nocturne.h"

void core_zombie_cpp_FUN_00598f20(int param_1)

{
  *(uint *)(param_1 + 0x10b08) = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,0,0);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,1,0);
  return;
}
