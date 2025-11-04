// Name: core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
// Address: 0059e070
// Address Range: [[0059e070, 0059e097]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070(CDeformableModelInstance * this_ptr, int motion_index, float frame_number)
// Cross-references:
//   core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690 (0058e690) at 0058e76b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058e4e0 (0058e4e0) at 0058e551 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a05e0 (005a05e0) at 005a061e [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb4b0 (005bb4b0) at 005bb6ea [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
          (CDeformableModelInstance *this_ptr,int motion_index,float frame_number)

{
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
            (this_ptr,motion_index,frame_number,-1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
            ((CDeformableModelInstance *)motion_index);
  return;
}


// Assembly code:
// 0059e070: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
// 0059e071: PUSH -0x1
// 0059e073: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0059e077: PUSH dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0059e07b: PUSH EDX
// 0059e07c: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059e080: PUSH ECX
// 0059e081: CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
//   XREF to: 0059e0a0 (UNCONDITIONAL_CALL)
// 0059e086: ADD ESP,0x10
// 0059e089: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0059e08d: PUSH EBX
// 0059e08e: CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 0059e093: ADD ESP,0x4
// 0059e096: POP EBX
// 0059e097: RET
