// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_005a17b0
// Address: 005a17b0
// Address Range: [[005a17b0, 005a17d9]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_FUN_005a17b0(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00597578 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_FUN_005a17b0(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *this_ptr_00;
  int unaff_EBX;
  CMatrix3x4f *in_stack_0000000c;
  CMatrix3x4f *color;
  
  color = this_ptr->bone_world_matrices;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_0059b640
            (this_ptr_00,(int)color,in_stack_0000000c,unaff_EBX);
  return;
}


// Assembly code:
// 005a17b0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_005a17b0
// 005a17b1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a17b5: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005a17b9: PUSH ECX
// 005a17ba: LEA EAX,[EDX + 0xe80]
// 005a17c0: PUSH EAX
// 005a17c1: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005a17c5: PUSH EBX
// 005a17c6: PUSH EDX
// 005a17c7: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a17cc: ADD ESP,0x4
// 005a17cf: PUSH EAX
// 005a17d0: CALL core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640
//   XREF to: 0059b640 (UNCONDITIONAL_CALL)
// 005a17d5: ADD ESP,0x10
// 005a17d8: POP EBX
// 005a17d9: RET
