// Name: core_skeleton.cpp_FUN_0059a860
// Address: 0059a860
// Address Range: [[0059a860, 0059a87f]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_0059a860()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0480 (005a0480) at 005a052e [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_FUN_0059a860(undefined4 param_1, undefined4 param_2) */

int core_skeleton_cpp_FUN_0059a860(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  return in_stack_00000004 + 0x7c90 + in_stack_00000008 * 0xc;
}


// Assembly code:
// 0059a860: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_skeleton.cpp_FUN_0059a860
//   XREF to: Stack[0x8] (READ)
// 0059a864: LEA EAX,[EDX*0x4 + 0x0]
// 0059a86b: SUB EAX,EDX
// 0059a86d: LEA EDX,[EAX*0x4 + 0x0]
// 0059a874: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0059a878: ADD EAX,0x7c90
// 0059a87d: ADD EAX,EDX
// 0059a87f: RET
