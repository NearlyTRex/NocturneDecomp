// Name: core_skeleton.cpp_CDeformableModel_FUN_0059a050
// Address: 0059a050
// Address Range: [[0059a050, 0059a06e]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_FUN_0059a050()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e0a0 (0059e0a0) at 0059e6ad [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_FUN_0059a070 (0059a070) at 0059a0e4 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_FUN_0059a050(CDeformableModel* param_1,
   undefined4 param_2, undefined4 param_3) */

int core_skeleton_cpp_CDeformableModel_FUN_0059a050(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  return (in_stack_0000000c * *(int *)(in_stack_00000004 + 0x28558) + in_stack_00000008) * 0x10 +
         *(int *)(in_stack_00000004 + 0x29370);
}


// Assembly code:
// 0059a050: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_skeleton.cpp_CDeformableModel_FUN_0059a050
//   XREF to: Stack[0x4] (READ)
// 0059a054: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0059a058: IMUL EAX,dword ptr [EDX + 0x28558]
// 0059a05f: ADD EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0059a063: MOV EDX,dword ptr [EDX + 0x29370]
// 0059a069: SHL EAX,0x4
// 0059a06c: ADD EAX,EDX
// 0059a06e: RET
