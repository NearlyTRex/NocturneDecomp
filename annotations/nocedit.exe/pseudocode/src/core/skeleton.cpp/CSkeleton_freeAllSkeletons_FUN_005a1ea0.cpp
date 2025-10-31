// Name: core_skeleton.cpp_CSkeleton_freeAllSkeletons_FUN_005a1ea0
// Address: 005a1ea0
// Address Range: [[005a1ea0, 005a1ecf]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CSkeleton_freeAllSkeletons_FUN_005a1ea0(void)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be3e0 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 005087f0 [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_005248e0 (005248e0) at 00524901 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 005968c9 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 0059916d [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_.RAW_0067c6e0
//   CDeformableModel* g_DeformableModelPoolEnd
//   CSkeleton[40] g_SkeletonPool
//   undefined4 DAT_038f60d0
// Function calls:
//   core_skeleton.cpp_CDeformableModel_freeAllModels_FUN_005a1dc0
//   core_skeleton.cpp_CSkeleton_free_FUN_00599a50

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CSkeleton_freeAllSkeletons_FUN_005a1ea0(void)

{
  CSkeleton *pCVar1;
  
  pCVar1 = g_SkeletonPool;
  core_skeleton_cpp_CDeformableModel_freeAllModels_FUN_005a1dc0();
  do {
    core_skeleton_cpp_CSkeleton_free_FUN_00599a50();
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != (CSkeleton *)&g_SkeletonPoolEnd);
  g_DeformableModelPoolEnd = (CDeformableModel *)0x0;
  return;
}


// Assembly code:
// 005a1ea0: PUSH EBX
//   Label: core_skeleton.cpp_CSkeleton_freeAllSkeletons_FUN_005a1ea0
// 005a1ea1: PUSH ESI
// 005a1ea2: MOV EBX,0x38cc8a4
//   XREF to: 038cc8a4 (PARAM)
// 005a1ea7: CALL core_skeleton.cpp_CDeformableModel_freeAllModels_FUN_005a1dc0
//   XREF to: 005a1dc0 (UNCONDITIONAL_CALL)
// 005a1eac: LEA ESI,[EBX + 0x67c6e0]
//   XREF to: 0067c6e0 (DATA)
// 005a1eb2: PUSH EBX
//   Label: LAB_005a1eb2
//   XREF to: 038cc8a4 (DATA)
//   XREF to: 038f60d0 (DATA)
// 005a1eb3: CALL core_skeleton.cpp_CSkeleton_free_FUN_00599a50
//   XREF to: 00599a50 (UNCONDITIONAL_CALL)
// 005a1eb8: ADD EBX,0x2982c
//   XREF to: 038f60d0 (PARAM)
// 005a1ebe: ADD ESP,0x4
// 005a1ec1: CMP EBX,ESI
// 005a1ec3: JNZ 0x005a1eb2
//   XREF to: 005a1eb2 (CONDITIONAL_JUMP)
// 005a1ec5: XOR EDX,EDX
// 005a1ec7: MOV dword ptr [0x038cc8a0],EDX
//   XREF to: 038cc8a0 (WRITE)
// 005a1ecd: POP ESI
// 005a1ece: POP EBX
// 005a1ecf: RET
