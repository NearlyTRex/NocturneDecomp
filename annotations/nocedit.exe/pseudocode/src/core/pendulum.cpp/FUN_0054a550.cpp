// Name: core_pendulum.cpp_FUN_0054a550
// Address: 0054a550
// Address Range: [[0054a550, 0054a58e]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_0054a550()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_pendulum.cpp_FUN_0054a550(undefined4 param_1, undefined4
   param_2) */

undefined4 core_pendulum_cpp_FUN_0054a550(void)

{
  CKeyFramedModel *pCVar1;
  int in_stack_00000004;
  int in_stack_0000000c;
  
  if (*(int *)(in_stack_00000004 + 0x440) == 0) {
    return 0;
  }
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  if (pCVar1->collision_triangle_list != (CDemonTriangle *)0x0) {
    *(int *)(in_stack_0000000c + 0x24) = in_stack_00000004 + 0x158;
  }
  return 1;
}


// Assembly code:
// 0054a550: PUSH EBX
//   Label: core_pendulum.cpp_FUN_0054a550
// 0054a551: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0054a555: CMP dword ptr [EBX + 0x440],0x0
// 0054a55c: JNZ 0x0054a562
//   XREF to: 0054a562 (CONDITIONAL_JUMP)
// 0054a55e: XOR EAX,EAX
// 0054a560: POP EBX
// 0054a561: RET
// 0054a562: LEA EAX,[EBX + 0x158]
//   Label: LAB_0054a562
// 0054a568: PUSH EAX
// 0054a569: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0054a56e: MOV ECX,dword ptr [EAX + 0x5698]
// 0054a574: ADD ESP,0x4
// 0054a577: TEST ECX,ECX
// 0054a579: JZ 0x0054a588
//   XREF to: 0054a588 (CONDITIONAL_JUMP)
// 0054a57b: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0054a57f: ADD EBX,0x158
// 0054a585: MOV dword ptr [EAX + 0x24],EBX
// 0054a588: MOV EAX,0x1
//   Label: LAB_0054a588
// 0054a58d: POP EBX
// 0054a58e: RET
