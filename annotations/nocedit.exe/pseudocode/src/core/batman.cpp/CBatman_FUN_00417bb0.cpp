// Name: core_batman.cpp_CBatman_FUN_00417bb0
// Address: 00417bb0
// Address Range: [[00417bb0, 00417ca8]]
// Convention: __cdecl
// Signature: int core_batman.cpp_CBatman_FUN_00417bb0(CBatman * this_ptr)
// Globals:
//   undefined4 DAT_008227b8
//   undefined4 DAT_008227dc
//   undefined4 DAT_008227e4
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00

#include "nocturne.h"

int __cdecl core_batman_cpp_CBatman_FUN_00417bb0(CBatman *this_ptr)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_stack_00000008;
  
  iVar2 = 1;
  puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  if (in_stack_00000008 != puVar1) {
    *in_stack_00000008 = *puVar1;
    in_stack_00000008[1] = puVar1[1];
    in_stack_00000008[2] = puVar1[2];
  }
  if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
      [*(int *)(this_ptr->field1_0xbeb4 + 0x84)] != 0) {
    puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
    if (in_stack_00000008 + 3 != puVar1) {
      in_stack_00000008[3] = *puVar1;
      in_stack_00000008[4] = puVar1[1];
      in_stack_00000008[5] = puVar1[2];
    }
    iVar2 = 2;
  }
  if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
      [*(int *)(this_ptr->field1_0xbeb4 + 0x70)] == 0) {
    return iVar2;
  }
  puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  puVar3 = in_stack_00000008 + iVar2 * 3;
  if (puVar3 != puVar1) {
    *puVar3 = *puVar1;
    puVar3[1] = puVar1[1];
    puVar3[2] = puVar1[2];
  }
  return iVar2 + 1;
}


// Assembly code:
// 00417bb0: PUSH EBX
//   Label: core_batman.cpp_CBatman_FUN_00417bb0
// 00417bb1: PUSH ESI
// 00417bb2: PUSH EDI
// 00417bb3: PUSH EBP
// 00417bb4: SUB ESP,0x24
// 00417bb7: MOV ESI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 00417bbb: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 00417bbf: MOV EDX,dword ptr [0x008227b8]
//   XREF to: 008227b8 (READ)
// 00417bc5: PUSH EDX
// 00417bc6: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x1c] (DATA)
// 00417bca: PUSH EAX
// 00417bcb: LEA EAX,[ESI + 0x158]
// 00417bd1: PUSH EAX
// 00417bd2: MOV EBX,0x1
// 00417bd7: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00417bdc: ADD ESP,0xc
// 00417bdf: CMP EDI,EAX
// 00417be1: JNZ 0x00417c4d
//   XREF to: 00417c4d (CONDITIONAL_JUMP)
// 00417be3: MOV EAX,dword ptr [ESI + 0xbf38]
//   Label: LAB_00417be3
// 00417be9: CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0
// 00417bf1: JZ 0x00417c33
//   XREF to: 00417c33 (CONDITIONAL_JUMP)
// 00417bf3: MOV EBP,dword ptr [0x008227dc]
//   XREF to: 008227dc (READ)
// 00417bf9: PUSH EBP
// 00417bfa: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x28] (DATA)
// 00417bfe: PUSH EAX
// 00417bff: LEA EAX,[ESI + 0x158]
// 00417c05: PUSH EAX
// 00417c06: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00417c0b: MOV EDX,EAX
// 00417c0d: LEA EAX,[EBX*0x4 + 0x0]
// 00417c14: SUB EAX,EBX
// 00417c16: SHL EAX,0x2
// 00417c19: ADD EAX,EDI
// 00417c1b: ADD ESP,0xc
// 00417c1e: CMP EAX,EDX
// 00417c20: JZ 0x00417c32
//   XREF to: 00417c32 (CONDITIONAL_JUMP)
// 00417c22: MOV ECX,dword ptr [EDX]
// 00417c24: MOV dword ptr [EAX],ECX
// 00417c26: MOV ECX,dword ptr [EDX + 0x4]
// 00417c29: MOV dword ptr [EAX + 0x4],ECX
// 00417c2c: MOV ECX,dword ptr [EDX + 0x8]
// 00417c2f: MOV dword ptr [EAX + 0x8],ECX
// 00417c32: INC EBX
//   Label: LAB_00417c32
// 00417c33: MOV EAX,dword ptr [ESI + 0xbf24]
//   Label: LAB_00417c33
// 00417c39: CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0
// 00417c41: JNZ 0x00417c5f
//   XREF to: 00417c5f (CONDITIONAL_JUMP)
// 00417c43: MOV EAX,EBX
// 00417c45: ADD ESP,0x24
// 00417c48: POP EBP
// 00417c49: POP EDI
// 00417c4a: POP ESI
// 00417c4b: POP EBX
// 00417c4c: RET
// 00417c4d: MOV EDX,dword ptr [EAX]
//   Label: LAB_00417c4d
// 00417c4f: MOV dword ptr [EDI],EDX
// 00417c51: MOV EDX,dword ptr [EAX + 0x4]
// 00417c54: MOV dword ptr [EDI + 0x4],EDX
// 00417c57: MOV EDX,dword ptr [EAX + 0x8]
// 00417c5a: MOV dword ptr [EDI + 0x8],EDX
// 00417c5d: JMP 0x00417be3
//   XREF to: 00417be3 (UNCONDITIONAL_JUMP)
// 00417c5f: MOV ECX,dword ptr [0x008227e4]
//   Label: LAB_00417c5f
//   XREF to: 008227e4 (READ)
// 00417c65: PUSH ECX
// 00417c66: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x34] (DATA)
// 00417c6a: PUSH EAX
// 00417c6b: ADD ESI,0x158
// 00417c71: PUSH ESI
// 00417c72: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00417c77: MOV ESI,EAX
// 00417c79: LEA EAX,[EBX*0x4 + 0x0]
// 00417c80: SUB EAX,EBX
// 00417c82: SHL EAX,0x2
// 00417c85: ADD EDI,EAX
// 00417c87: ADD ESP,0xc
// 00417c8a: CMP EDI,ESI
// 00417c8c: JZ 0x00417c9e
//   XREF to: 00417c9e (CONDITIONAL_JUMP)
// 00417c8e: MOV EAX,dword ptr [ESI]
// 00417c90: MOV dword ptr [EDI],EAX
// 00417c92: MOV EAX,dword ptr [ESI + 0x4]
// 00417c95: MOV dword ptr [EDI + 0x4],EAX
// 00417c98: MOV EAX,dword ptr [ESI + 0x8]
// 00417c9b: MOV dword ptr [EDI + 0x8],EAX
// 00417c9e: INC EBX
//   Label: LAB_00417c9e
// 00417c9f: MOV EAX,EBX
// 00417ca1: ADD ESP,0x24
// 00417ca4: POP EBP
// 00417ca5: POP EDI
// 00417ca6: POP ESI
// 00417ca7: POP EBX
// 00417ca8: RET
