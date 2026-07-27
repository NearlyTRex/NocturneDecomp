// Name: core_mission.cpp_FUN_004d90e0
// Address: 004d90e0
// Address Range: [[004d90e0, 004d910b]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004d90e0(int param_1,undefined4 *param_2)

#include "nocturne.h"

void core_mission_cpp_FUN_004d90e0(int param_1,uint *param_2)

{
  *(uint *)(param_1 + 0x51c) = *param_2;
  *(uint *)(param_1 + 0x520) = param_2[1];
  *(uint *)(param_1 + 0x524) = param_2[2];
  *(uint *)(param_1 + 0x528) = param_2[3];
  return;
}
