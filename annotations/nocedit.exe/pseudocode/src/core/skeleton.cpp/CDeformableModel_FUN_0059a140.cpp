// Name: core_skeleton.cpp_CDeformableModel_FUN_0059a140
// Address: 0059a140
// Address Range: [[0059a140, 0059a159]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_FUN_0059a140()
// Cross-references:
//   core_skeleton.cpp_FUN_005a1ed0 (005a1ed0) at 005a1ee8 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_FUN_0059a140(CDeformableModel* param_1)
    */

int core_skeleton_cpp_CDeformableModel_FUN_0059a140(void)

{
  int in_stack_00000004;
  
  return (*(int *)(in_stack_00000004 + 0x28558) * 0x10 + 0x18) *
         *(int *)(in_stack_00000004 + 0x2936c);
}


// Assembly code:
// 0059a140: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_skeleton.cpp_CDeformableModel_FUN_0059a140
//   XREF to: Stack[0x4] (READ)
// 0059a144: MOV EAX,dword ptr [EDX + 0x28558]
// 0059a14a: SHL EAX,0x4
// 0059a14d: MOV ECX,dword ptr [EDX + 0x2936c]
// 0059a153: ADD EAX,0x18
// 0059a156: IMUL EAX,ECX
// 0059a159: RET
