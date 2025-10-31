// Name: core_biggs.cpp_FUN_00418c10
// Address: 00418c10
// Address Range: [[00418c10, 00418c58]]
// Convention: unknown
// Signature: undefined core_biggs.cpp_FUN_00418c10()
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_biggs.cpp_FUN_00418c10(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_biggs_cpp_FUN_00418c10(void)

{
  undefined4 *puVar1;
  undefined4 *in_stack_00000008;
  
  puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  if (in_stack_00000008 == puVar1) {
    return 1;
  }
  *in_stack_00000008 = *puVar1;
  in_stack_00000008[1] = puVar1[1];
  in_stack_00000008[2] = puVar1[2];
  return 1;
}


// Assembly code:
// 00418c10: PUSH EBX
//   Label: core_biggs.cpp_FUN_00418c10
// 00418c11: SUB ESP,0xc
// 00418c14: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00418c18: PUSH 0x0
// 00418c1a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10] (DATA)
// 00418c1e: PUSH EAX
// 00418c1f: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00418c23: ADD EAX,0x158
// 00418c28: PUSH EAX
// 00418c29: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00418c2e: ADD ESP,0xc
// 00418c31: CMP EBX,EAX
// 00418c33: JNZ 0x00418c3f
//   XREF to: 00418c3f (CONDITIONAL_JUMP)
// 00418c35: MOV EAX,0x1
// 00418c3a: ADD ESP,0xc
// 00418c3d: POP EBX
// 00418c3e: RET
// 00418c3f: MOV EDX,dword ptr [EAX]
//   Label: LAB_00418c3f
// 00418c41: MOV dword ptr [EBX],EDX
// 00418c43: MOV EDX,dword ptr [EAX + 0x4]
// 00418c46: MOV dword ptr [EBX + 0x4],EDX
// 00418c49: MOV EDX,dword ptr [EAX + 0x8]
// 00418c4c: MOV dword ptr [EBX + 0x8],EDX
// 00418c4f: MOV EAX,0x1
// 00418c54: ADD ESP,0xc
// 00418c57: POP EBX
// 00418c58: RET
