// Name: core_gabriela.cpp_FUN_004d75e0
// Address: 004d75e0
// Address Range: [[004d75e0, 004d760c]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d75e0()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042f8a0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d75e0(undefined4 param_1, undefined4
   param_2) */

void core_gabriela_cpp_FUN_004d75e0(void)

{
  CCharacter *in_stack_00000004;
  int in_stack_0000000c;
  
  core_charactr_cpp_CCharacter_FUN_0042f8a0(in_stack_00000004);
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x5518) != in_stack_0000000c) {
    return;
  }
  in_stack_00000004[2].cloth_data[0x5518] = '\0';
  in_stack_00000004[2].cloth_data[0x5519] = '\0';
  in_stack_00000004[2].cloth_data[0x551a] = '\0';
  in_stack_00000004[2].cloth_data[0x551b] = '\0';
  return;
}


// Assembly code:
// 004d75e0: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d75e0
// 004d75e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004d75e5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004d75e9: PUSH EDX
// 004d75ea: PUSH EBX
// 004d75eb: CALL core_charactr.cpp_CCharacter_FUN_0042f8a0
//   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)
// 004d75f0: ADD ESP,0x8
// 004d75f3: MOV ECX,dword ptr [EBX + 0x1fbf8]
// 004d75f9: CMP ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004d75fd: JZ 0x004d7601
//   XREF to: 004d7601 (CONDITIONAL_JUMP)
// 004d75ff: POP EBX
// 004d7600: RET
// 004d7601: MOV dword ptr [EBX + 0x1fbf8],0x0
//   Label: LAB_004d7601
// 004d760b: POP EBX
// 004d760c: RET
