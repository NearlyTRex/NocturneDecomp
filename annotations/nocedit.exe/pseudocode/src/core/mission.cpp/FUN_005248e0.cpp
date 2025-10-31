// Name: core_mission.cpp_FUN_005248e0
// Address: 005248e0
// Address Range: [[005248e0, 00524918]]
// Convention: __cdecl
// Signature: void core_mission.cpp_FUN_005248e0(void)
// Cross-references:
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 (00522eb0) at 005233b9 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 0053820f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mission_cpp_00639394
//   TerminatedCString s_core_mission_cpp_006393a8
// Function calls:
//   core_dmodel.cpp_freeAllModels_FUN_00478cb0
//   core_skeleton.cpp_CDeformableModel_freeAllModels_FUN_005a1dc0
//   core_skeleton.cpp_CSkeleton_freeAllSkeletons_FUN_005a1ea0
//   engine_texture.cpp_clearTextureCache_FUN_005dd8e0
//   shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0

#include "nocturne.h"

void __cdecl core_mission_cpp_FUN_005248e0(void)

{
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x5d4);
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  uStack00000004 = 0x5248fc;
  core_dmodel_cpp_freeAllModels_FUN_00478cb0();
  uStack00000008 = 0x524901;
  core_skeleton_cpp_CDeformableModel_freeAllModels_FUN_005a1dc0();
  core_skeleton_cpp_CSkeleton_freeAllSkeletons_FUN_005a1ea0();
  uStack00000008 = 0x524915;
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\mission.cpp",0x5e2);
  return;
}


// Assembly code:
// 005248e0: PUSH 0x5d4
//   Label: core_mission.cpp_FUN_005248e0
// 005248e5: PUSH 0x639394
//   XREF to: 00639394 (DATA)
// 005248ea: CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
//   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
// 005248ef: ADD ESP,0x8
// 005248f2: CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0
//   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)
// 005248f7: CALL core_dmodel.cpp_freeAllModels_FUN_00478cb0
//   XREF to: 00478cb0 (UNCONDITIONAL_CALL)
// 005248fc: CALL core_skeleton.cpp_CDeformableModel_freeAllModels_FUN_005a1dc0
//   XREF to: 005a1dc0 (UNCONDITIONAL_CALL)
// 00524901: CALL core_skeleton.cpp_CSkeleton_freeAllSkeletons_FUN_005a1ea0
//   XREF to: 005a1ea0 (UNCONDITIONAL_CALL)
// 00524906: PUSH 0x5e2
// 0052490b: PUSH 0x6393a8
//   XREF to: 006393a8 (DATA)
// 00524910: CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0
//   XREF to: 0050efe0 (UNCONDITIONAL_CALL)
// 00524915: ADD ESP,0x8
// 00524918: RET
