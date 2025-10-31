// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_005a0250
// Address: 005a0250
// Address Range: [[005a0250, 005a0290]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModelInstance_FUN_005a0250()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042af60 (0042af60) at 0042b04f [UNCONDITIONAL_CALL]
//   core_morph.cpp_Select1stModel_Select2ndModel_Loading_FUN_0052bcb0 (0052bcb0) at 0052c066 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_GetPtr_RotateVerts_Render_FUN_005a0150 (005a0150) at 005a0163 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModel_rotateVerticesMaybe_FUN_0059ab20
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModelInstance_FUN_005a0250(undefined4 param_1,
   undefined4 param_2) */

void core_skeleton_cpp_CDeformableModelInstance_FUN_005a0250(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 != *(int *)(in_stack_00000004 + 0x2230)) {
    core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0();
  }
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
  core_skeleton_cpp_CDeformableModel_rotateVerticesMaybe_FUN_0059ab20();
  return;
}


// Assembly code:
// 005a0250: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_005a0250
// 005a0251: PUSH ESI
// 005a0252: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a0256: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005a025a: CMP EAX,dword ptr [EBX + 0x2230]
// 005a0260: JNZ 0x005a0285
//   XREF to: 005a0285 (CONDITIONAL_JUMP)
// 005a0262: MOV ECX,dword ptr [EBX + 0x2234]
//   Label: LAB_005a0262
// 005a0268: PUSH ECX
// 005a0269: MOV ESI,dword ptr [EBX + 0x2230]
// 005a026f: PUSH ESI
// 005a0270: PUSH EBX
// 005a0271: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a0276: ADD ESP,0x4
// 005a0279: PUSH EAX
// 005a027a: CALL core_skeleton.cpp_CDeformableModel_rotateVerticesMaybe_FUN_0059ab20
//   XREF to: 0059ab20 (UNCONDITIONAL_CALL)
// 005a027f: ADD ESP,0xc
// 005a0282: POP ESI
// 005a0283: POP EBX
// 005a0284: RET
// 005a0285: PUSH EAX
//   Label: LAB_005a0285
// 005a0286: PUSH EBX
// 005a0287: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething5_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 005a028c: ADD ESP,0x8
// 005a028f: JMP 0x005a0262
//   XREF to: 005a0262 (UNCONDITIONAL_JUMP)
