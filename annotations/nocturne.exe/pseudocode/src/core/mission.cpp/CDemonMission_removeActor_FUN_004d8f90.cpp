// Name: core_mission.cpp_CDemonMission_removeActor_FUN_004d8f90
// Address: 004d8f90
// Address Range: [[004d8f90, 004d8fba]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_removeActor_FUN_004d8f90(uint param_1,int param_2,int param_3)

{
  if (param_2 != 0) {
    core_mission_cpp_FUN_004d8cd0(param_1,param_2);
    if (param_3 != 0) {
      core_actor_cpp_FUN_00409cd0(param_2);
      return;
    }
  }
  return;
}
