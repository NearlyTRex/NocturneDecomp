// Name: core_skeleton.cpp_CDeformableModel_FUN_0059c220
// Address: 0059c220
// Address Range: [[0059c220, 0059c23d]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_FUN_0059c220()
// Cross-references:
//   core_bodypart.cpp_FUN_0041b280 (0041b280) at 0041b377 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a3f0 (0042a3f0) at 0042a408 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563f65 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 005976f7 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_FUN_0059c220(undefined4 param_1,
   undefined4 param_2) */

int core_skeleton_cpp_CDeformableModel_FUN_0059c220(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  return in_stack_00000004 + 0x7144 + in_stack_00000008 * 0x60;
}


// Assembly code:
// 0059c220: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_skeleton.cpp_CDeformableModel_FUN_0059c220
//   XREF to: Stack[0x8] (READ)
// 0059c224: LEA EAX,[EDX*0x4 + 0x0]
// 0059c22b: SUB EAX,EDX
// 0059c22d: MOV EDX,EAX
// 0059c22f: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0059c233: SHL EDX,0x5
// 0059c236: ADD EAX,0x7144
// 0059c23b: ADD EAX,EDX
// 0059c23d: RET
