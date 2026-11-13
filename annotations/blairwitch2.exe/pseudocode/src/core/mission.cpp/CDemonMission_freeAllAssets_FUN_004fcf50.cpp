// Name: core_mission.cpp_CDemonMission_freeAllAssets_FUN_004fcf50
// Address: 004fcf50
// Address Range: [[004fcf50, 004fcf63]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_freeAllAssets_FUN_004fcf50(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_freeAllAssets_FUN_004fcf50(CDemonMission *this_ptr)

{
  engine_texture_cpp_FUN_00575010();
  core_dmodel_cpp_freeAllModels_FUN_0044fc50();
  core_skeleton_cpp_freeAllModels_FUN_00548f80();
  core_skeleton_cpp_freeAllSkeletons_FUN_00549090();
  return;
}
