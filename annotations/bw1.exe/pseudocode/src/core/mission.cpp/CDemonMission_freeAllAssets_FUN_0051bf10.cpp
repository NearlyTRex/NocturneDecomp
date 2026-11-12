// Name: core_mission.cpp_CDemonMission_freeAllAssets_FUN_0051bf10
// Address: 0051bf10
// Address Range: [[0051bf10, 0051bf23]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_freeAllAssets_FUN_0051bf10(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_freeAllAssets_FUN_0051bf10(CDemonMission *this_ptr)

{
  engine_texture_cpp_FUN_00597c30();
  core_dmodel_cpp_freeAllModels_FUN_00468830();
  core_skeleton_cpp_FUN_0056b610();
  core_skeleton_cpp_FUN_0056b740();
  return;
}
