// Name: core_boxactor.cpp_FUN_00422340
// Address: 00422340
// Address Range: [[00422340, 00422389]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422340()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_FUN_00422340(undefined4 param_1, undefined4
   param_2) */

undefined4 core_boxactor_cpp_FUN_00422340(void)

{
  CKeyFramedModel *pCVar1;
  int in_stack_00000004;
  int in_stack_0000000c;
  
  if ((*(int *)(in_stack_00000004 + 0x5f8) != 0) && (*(int *)(in_stack_00000004 + 0x318) == 0)) {
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
    if (pCVar1->collision_triangle_list != (CDemonTriangle *)0x0) {
      *(int *)(in_stack_0000000c + 0x24) = in_stack_00000004 + 0x158;
    }
    return 1;
  }
  return 0;
}


// Assembly code:
// 00422340: PUSH EBX
//   Label: core_boxactor.cpp_FUN_00422340
// 00422341: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00422345: CMP dword ptr [EBX + 0x5f8],0x0
// 0042234c: JZ 0x00422357
//   XREF to: 00422357 (CONDITIONAL_JUMP)
// 0042234e: CMP dword ptr [EBX + 0x318],0x0
// 00422355: JZ 0x0042235b
//   XREF to: 0042235b (CONDITIONAL_JUMP)
// 00422357: XOR EAX,EAX
//   Label: LAB_00422357
// 00422359: POP EBX
// 0042235a: RET
// 0042235b: PUSH ESI
//   Label: LAB_0042235b
// 0042235c: LEA EAX,[EBX + 0x158]
// 00422362: PUSH EAX
// 00422363: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00422368: MOV ESI,dword ptr [EAX + 0x5698]
// 0042236e: ADD ESP,0x4
// 00422371: TEST ESI,ESI
// 00422373: JZ 0x00422382
//   XREF to: 00422382 (CONDITIONAL_JUMP)
// 00422375: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00422379: ADD EBX,0x158
// 0042237f: MOV dword ptr [EAX + 0x24],EBX
// 00422382: MOV EAX,0x1
//   Label: LAB_00422382
// 00422387: POP ESI
// 00422388: POP EBX
// 00422389: RET
