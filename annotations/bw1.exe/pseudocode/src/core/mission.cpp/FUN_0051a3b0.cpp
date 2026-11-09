// Name: core_mission.cpp_FUN_0051a3b0
// Address: 0051a3b0
// Address Range: [[0051a3b0, 0051a3eb]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_0051a3b0(CDemonMission *param_1)

#include "nocturne.h"

void core_mission_cpp_FUN_0051a3b0(CDemonMission *param_1)

{
  core_mission_cpp_FUN_0051b5a0(param_1);
  *(uint *)(param_1 + 4) = 0;
  param_1[0x1018] = (CDemonMission)0x0;
  *(uint *)(param_1 + 0x1010) = 0;
  *(uint *)(param_1 + 0x1458) = 0;
  *(uint *)(param_1 + 0x145c) = 0;
  return;
}
