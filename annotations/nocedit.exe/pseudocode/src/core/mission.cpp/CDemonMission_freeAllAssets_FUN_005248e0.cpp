// Name: core_mission.cpp_CDemonMission_freeAllAssets_FUN_005248e0
// Address: 005248e0
// Address Range: [[005248e0, 00524918]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_freeAllAssets_FUN_005248e0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_freeAllAssets_FUN_005248e0(CDemonMission *this_ptr)

{
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",1492);
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  core_dmodel_cpp_freeAllModels_FUN_00478cb0();
  core_skeleton_cpp_freeAllModels_FUN_005a1dc0();
  core_skeleton_cpp_freeAllSkeletons_FUN_005a1ea0();
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",1506);
  return;
}
