// Name: core_mission.cpp_FUN_004f5b80
// Address: 004f5b80
// Address Range: [[004f5b80, 004f5bbb]]
// Convention: unknown
// Signature: void core_mission_cpp_FUN_004f5b80(CDemonMission *param_1)

#include "nocturne.h"

void core_mission_cpp_FUN_004f5b80(CDemonMission *param_1)

{
  core_mission_cpp_CDemonMission_removeAllActors_FUN_004f6d70(param_1);
  *(uint *)(param_1 + 4) = 0;
  param_1[0x133c] = (CDemonMission)0x0;
  *(uint *)(param_1 + 0x1010) = 0;
  *(uint *)(param_1 + 0x1458) = 0;
  *(uint *)(param_1 + 0x145c) = 0;
  return;
}
