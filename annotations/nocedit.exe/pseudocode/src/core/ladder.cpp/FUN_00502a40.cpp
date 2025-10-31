// Name: core_ladder.cpp_FUN_00502a40
// Address: 00502a40
// Address Range: [[00502a40, 00502a65]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502a40()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_ladder.cpp_FUN_00502a40(undefined4 param_1) */

undefined4 core_ladder_cpp_FUN_00502a40(void)

{
  CKeyFramedModel *pCVar1;
  int in_stack_00000004;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  if (pCVar1->poly_count < 1) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 00502a40: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_ladder.cpp_FUN_00502a40
//   XREF to: Stack[0x4] (READ)
// 00502a44: ADD EAX,0x158
// 00502a49: PUSH EAX
// 00502a4a: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00502a4f: MOV EDX,dword ptr [EAX + 0x110]
// 00502a55: ADD ESP,0x4
// 00502a58: CMP EDX,0x1
// 00502a5b: JGE 0x00502a60
//   XREF to: 00502a60 (CONDITIONAL_JUMP)
// 00502a5d: XOR EAX,EAX
// 00502a5f: RET
// 00502a60: MOV EAX,0x1
//   Label: LAB_00502a60
// 00502a65: RET
