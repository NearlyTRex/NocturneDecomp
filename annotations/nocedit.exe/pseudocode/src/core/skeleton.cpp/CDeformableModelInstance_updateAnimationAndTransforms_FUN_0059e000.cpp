// Name: core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
// Address: 0059e000
// Address Range: [[0059e000, 0059e01a]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_cloth.cpp_FUN_00439710 (00439710) at 00439fbd [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 (0051f3e0) at 0051f731 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_process_FUN_00528d20 (00528d20) at 0052924b [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052aa30 (0052aa30) at 0052aa37 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00536e20 (00536e20) at 005371e7 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545d30 (00545d30) at 00545de8 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 0059715e [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480 (005a0480) at 005a059d [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c6b60 (005c6b60) at 005c6e55 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c70fc [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e56c0 (005e56c0) at 005e586e [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6161 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
          (CDeformableModelInstance *this_ptr)

{
  CDeformableModelInstance *in_stack_00000008;
  
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(in_stack_00000008);
  return;
}


// Assembly code:
// 0059e000: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   XREF to: Stack[0x4] (READ)
// 0059e004: PUSH EDX
// 0059e005: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 0059e00a: ADD ESP,0x4
// 0059e00d: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0059e011: PUSH ECX
// 0059e012: CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 0059e017: ADD ESP,0x4
// 0059e01a: RET
