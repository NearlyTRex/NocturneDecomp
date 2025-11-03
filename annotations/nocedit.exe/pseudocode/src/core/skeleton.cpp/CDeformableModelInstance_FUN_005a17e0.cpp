// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_005a17e0
// Address: 005a17e0
// Address Range: [[005a17e0, 005a17fd]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_FUN_005a17e0(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00597586 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModel_renderBoneNames_FUN_0059b800
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_FUN_005a17e0(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *this_ptr_00;
  CMatrix3x4f *unaff_retaddr;
  
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_renderBoneNames_FUN_0059b800(this_ptr_00,unaff_retaddr);
  return;
}


// Assembly code:
// 005a17e0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_005a17e0
//   XREF to: Stack[0x4] (READ)
// 005a17e4: LEA EAX,[EDX + 0xe80]
// 005a17ea: PUSH EAX
// 005a17eb: PUSH EDX
// 005a17ec: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a17f1: ADD ESP,0x4
// 005a17f4: PUSH EAX
// 005a17f5: CALL core_skeleton.cpp_CDeformableModel_renderBoneNames_FUN_0059b800
//   XREF to: 0059b800 (UNCONDITIONAL_CALL)
// 005a17fa: ADD ESP,0x8
// 005a17fd: RET
