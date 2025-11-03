// Name: core_skeleton.cpp_freeAllModels_FUN_005a1dc0
// Address: 005a1dc0
// Address Range: [[005a1dc0, 005a1dea]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_freeAllModels_FUN_005a1dc0(void)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be3db [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 005087eb [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_005248e0 (005248e0) at 005248fc [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 005968ce [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 00599172 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0 (005a1ea0) at 005a1ea7 [UNCONDITIONAL_CALL]
// Globals:
//   int g_DeformableModelCount
//   CDeformableModel[64] g_DeformableModelPool
//   undefined4 DAT_036958a0
//   int g_SkeletonPoolCount
// Function calls:
//   core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0

#include "nocturne.h"

void __cdecl core_skeleton_cpp_freeAllModels_FUN_005a1dc0(void)

{
  CDeformableModel *this_ptr;
  
  this_ptr = g_DeformableModelPool;
  do {
    core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CDeformableModel *)&g_SkeletonPoolCount);
  g_DeformableModelCount = 0;
  return;
}


// Assembly code:
// 005a1dc0: PUSH EBX
//   Label: core_skeleton.cpp_freeAllModels_FUN_005a1dc0
// 005a1dc1: PUSH ESI
// 005a1dc2: MOV EBX,0x368c8a0
//   XREF to: 0368c8a0 (PARAM)
// 005a1dc7: LEA ESI,[EBX + 0x240000]
//   XREF to: 038cc8a0 (DATA)
// 005a1dcd: PUSH EBX
//   Label: LAB_005a1dcd
//   XREF to: 0368c8a0 (DATA)
//   XREF to: 036958a0 (DATA)
// 005a1dce: CALL core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0
//   XREF to: 0059a2b0 (UNCONDITIONAL_CALL)
// 005a1dd3: ADD EBX,0x9000
//   XREF to: 036958a0 (PARAM)
// 005a1dd9: ADD ESP,0x4
// 005a1ddc: CMP EBX,ESI
// 005a1dde: JNZ 0x005a1dcd
//   XREF to: 005a1dcd (CONDITIONAL_JUMP)
// 005a1de0: XOR EDX,EDX
// 005a1de2: MOV dword ptr [0x0368c89c],EDX
//   XREF to: 0368c89c (WRITE)
// 005a1de8: POP ESI
// 005a1de9: POP EBX
// 005a1dea: RET
