// Name: core_platfrm.cpp_FUN_0054e180
// Address: 0054e180
// Address Range: [[0054e180, 0054e19f] [0054e1a6, 0054e1bb]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054e180()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054e180(undefined4 param_1, undefined4
   param_2) */

undefined4 core_platfrm_cpp_FUN_0054e180(void)

{
  CKeyFramedModel *pCVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  if (pCVar1->collision_triangle_list == (CDemonTriangle *)0x0) {
    return 1;
  }
  *(int *)(in_stack_0000000c + 0x24) = in_stack_00000008 + 0x158;
  return 1;
}


// Assembly code:
// 0054e180: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_platfrm.cpp_FUN_0054e180
//   XREF to: Stack[0x4] (READ)
// 0054e184: ADD EAX,0x158
// 0054e189: PUSH EAX
// 0054e18a: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0054e18f: MOV EDX,dword ptr [EAX + 0x5698]
// 0054e195: ADD ESP,0x4
// 0054e198: TEST EDX,EDX
// 0054e19a: JNZ 0x0054e1a6
//   XREF to: 0054e1a6 (CONDITIONAL_JUMP)
// 0054e19c: LEA EAX,[EAX]
// 0054e1a6: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0054e1a6
//   XREF to: Stack[0x4] (READ)
// 0054e1aa: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0054e1ae: ADD EAX,0x158
// 0054e1b3: MOV dword ptr [EDX + 0x24],EAX
// 0054e1b6: MOV EAX,0x1
// 0054e1bb: RET
