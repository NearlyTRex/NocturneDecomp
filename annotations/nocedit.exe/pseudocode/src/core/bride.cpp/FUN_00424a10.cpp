// Name: core_bride.cpp_FUN_00424a10
// Address: 00424a10
// Address Range: [[00424a10, 00424a9e]]
// Convention: unknown
// Signature: undefined core_bride.cpp_FUN_00424a10()
// Globals:
//   undefined4 DAT_00822cdc
//   undefined4 DAT_00822d00
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bride.cpp_FUN_00424a10(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_bride_cpp_FUN_00424a10(void)

{
  undefined4 *puVar1;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + *(int *)(in_stack_00000004 + 0xbedc) * 4 + 0x2298) != 0) {
    puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
    if (in_stack_00000008 != puVar1) {
      *in_stack_00000008 = *puVar1;
      in_stack_00000008[1] = puVar1[1];
      in_stack_00000008[2] = puVar1[2];
    }
    return 1;
  }
  puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  if (in_stack_00000008 != puVar1) {
    *in_stack_00000008 = *puVar1;
    in_stack_00000008[1] = puVar1[1];
    in_stack_00000008[2] = puVar1[2];
  }
  return 1;
}


// Assembly code:
// 00424a10: PUSH EBX
//   Label: core_bride.cpp_FUN_00424a10
// 00424a11: SUB ESP,0x18
// 00424a14: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00424a18: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00424a1c: MOV EAX,dword ptr [EDX + 0xbedc]
// 00424a22: SHL EAX,0x2
// 00424a25: LEA ECX,[EDX + EAX*0x1]
// 00424a28: LEA EAX,[EDX + 0x158]
// 00424a2e: CMP dword ptr [ECX + 0x2298],0x0
// 00424a35: JZ 0x00424a6c
//   XREF to: 00424a6c (CONDITIONAL_JUMP)
// 00424a37: PUSH ESI
// 00424a38: MOV ESI,dword ptr [0x00822cdc]
//   XREF to: 00822cdc (READ)
// 00424a3e: PUSH ESI
// 00424a3f: LEA EDX,[ESP + 0x14]
//   XREF to: Stack[-0x10] (DATA)
// 00424a43: PUSH EDX
// 00424a44: PUSH EAX
// 00424a45: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00424a4a: ADD ESP,0xc
// 00424a4d: CMP EBX,EAX
// 00424a4f: JZ 0x00424a61
//   XREF to: 00424a61 (CONDITIONAL_JUMP)
// 00424a51: MOV EDX,dword ptr [EAX]
// 00424a53: MOV dword ptr [EBX],EDX
// 00424a55: MOV EDX,dword ptr [EAX + 0x4]
// 00424a58: MOV dword ptr [EBX + 0x4],EDX
// 00424a5b: MOV EDX,dword ptr [EAX + 0x8]
// 00424a5e: MOV dword ptr [EBX + 0x8],EDX
// 00424a61: MOV EAX,0x1
//   Label: LAB_00424a61
// 00424a66: POP ESI
// 00424a67: ADD ESP,0x18
// 00424a6a: POP EBX
// 00424a6b: RET
// 00424a6c: MOV ECX,dword ptr [0x00822d00]
//   Label: LAB_00424a6c
//   XREF to: 00822d00 (READ)
// 00424a72: PUSH ECX
// 00424a73: LEA EDX,[ESP + 0x4]
//   XREF to: Stack[-0x1c] (DATA)
// 00424a77: PUSH EDX
// 00424a78: PUSH EAX
// 00424a79: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00424a7e: ADD ESP,0xc
// 00424a81: CMP EBX,EAX
// 00424a83: JZ 0x00424a95
//   XREF to: 00424a95 (CONDITIONAL_JUMP)
// 00424a85: MOV EDX,dword ptr [EAX]
// 00424a87: MOV dword ptr [EBX],EDX
// 00424a89: MOV EDX,dword ptr [EAX + 0x4]
// 00424a8c: MOV dword ptr [EBX + 0x4],EDX
// 00424a8f: MOV EDX,dword ptr [EAX + 0x8]
// 00424a92: MOV dword ptr [EBX + 0x8],EDX
// 00424a95: MOV EAX,0x1
//   Label: LAB_00424a95
// 00424a9a: ADD ESP,0x18
// 00424a9d: POP EBX
// 00424a9e: RET
