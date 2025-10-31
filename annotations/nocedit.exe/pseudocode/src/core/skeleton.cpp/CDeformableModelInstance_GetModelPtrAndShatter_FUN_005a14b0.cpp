// Name: core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndShatter_FUN_005a14b0
// Address: 005a14b0
// Address Range: [[005a14b0, 005a150c]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndShatter_FUN_005a14b0()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042b8e0 (0042b8e0) at 0042b91d [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndShatter(undefined4
   param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4) */

void core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndShatter_FUN_005a14b0(void)

{
  int in_stack_00000004;
  int in_stack_00000010;
  
  if (in_stack_00000010 != *(int *)(in_stack_00000004 + 0x2230)) {
    core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0();
  }
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
  core_skeleton_cpp_CDeformableModel_shatter_FUN_0059cec0();
  return;
}


// Assembly code:
// 005a14b0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndShatter_FUN_005a14b0
// 005a14b1: PUSH ESI
// 005a14b2: PUSH EDI
// 005a14b3: PUSH EBP
// 005a14b4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a14b8: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a14bc: CMP EAX,dword ptr [EBX + 0x2230]
// 005a14c2: JNZ 0x005a1501
//   XREF to: 005a1501 (CONDITIONAL_JUMP)
// 005a14c4: LEA EAX,[EBX + 0x21b8]
//   Label: LAB_005a14c4
// 005a14ca: PUSH EAX
// 005a14cb: LEA EAX,[EBX + 0x2140]
// 005a14d1: PUSH EAX
// 005a14d2: MOV ECX,dword ptr [EBX + 0x2234]
// 005a14d8: PUSH ECX
// 005a14d9: MOV ESI,dword ptr [EBX + 0x2230]
// 005a14df: PUSH ESI
// 005a14e0: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 005a14e4: PUSH EDI
// 005a14e5: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005a14e9: PUSH EBP
// 005a14ea: PUSH EBX
// 005a14eb: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a14f0: ADD ESP,0x4
// 005a14f3: PUSH EAX
// 005a14f4: CALL core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0
//   XREF to: 0059cec0 (UNCONDITIONAL_CALL)
// 005a14f9: ADD ESP,0x1c
// 005a14fc: POP EBP
// 005a14fd: POP EDI
// 005a14fe: POP ESI
// 005a14ff: POP EBX
// 005a1500: RET
// 005a1501: PUSH EAX
//   Label: LAB_005a1501
// 005a1502: PUSH EBX
// 005a1503: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 005a1508: ADD ESP,0x8
// 005a150b: JMP 0x005a14c4
//   XREF to: 005a14c4 (UNCONDITIONAL_JUMP)
