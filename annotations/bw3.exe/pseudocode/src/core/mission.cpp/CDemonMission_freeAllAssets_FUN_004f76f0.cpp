// Name: core_mission.cpp_CDemonMission_freeAllAssets_FUN_004f76f0
// Address: 004f76f0
// Address Range: [[004f76f0, 004f7703]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_freeAllAssets_FUN_004f76f0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_freeAllAssets_FUN_004f76f0(CDemonMission *this_ptr)

{
  engine_texture_cpp_FUN_0056ac20();
  core_dmodel_cpp_freeAllModels_FUN_004624d0();
  core_skeleton_cpp_FUN_005501a0();
  core_skeleton_cpp_FUN_005502d0();
  return;
}
