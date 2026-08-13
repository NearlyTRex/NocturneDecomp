// Name: core_mission.cpp_CDemonMission_freeAllAssets_FUN_004d9900
// Address: 004d9900
// Address Range: [[004d9900, 004d9913]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_freeAllAssets_FUN_004d9900(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_freeAllAssets_FUN_004d9900(CDemonMission *this_ptr)

{
  engine_texture_cpp_clearTextureCache_FUN_005459f0();
  core_dmodel_cpp_FUN_00454460();
  core_skeleton_cpp_FUN_0051f650();
  core_skeleton_cpp_freeAllSkeletons_FUN_0051f730();
  return;
}
