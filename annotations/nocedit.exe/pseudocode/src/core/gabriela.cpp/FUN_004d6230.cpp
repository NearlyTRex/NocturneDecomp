// Name: core_gabriela.cpp_FUN_004d6230
// Address: 004d6230
// Address Range: [[004d6230, 004d6259]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d6230()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042b0e0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d6230(undefined4 param_1) */

undefined4 core_gabriela_cpp_FUN_004d6230(void)

{
  CCharacter *in_stack_00000004;
  
  (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5388) + 0x154) + 0xc))();
  core_charactr_cpp_CCharacter_FUN_0042b0e0(in_stack_00000004);
  return 1;
}


// Assembly code:
// 004d6230: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_gabriela.cpp_FUN_004d6230
//   XREF to: Stack[0x4] (READ)
// 004d6234: MOV EAX,dword ptr [EAX + 0x1fa68]
// 004d623a: PUSH EAX
// 004d623b: MOV EDX,dword ptr [EAX + 0x154]
// 004d6241: CALL dword ptr [EDX + 0xc]
// 004d6244: ADD ESP,0x4
// 004d6247: MOV EDX,dword ptr [ESP + 0x4]
// 004d624b: PUSH EDX
// 004d624c: CALL core_charactr.cpp_CCharacter_FUN_0042b0e0
//   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)
// 004d6251: MOV EAX,0x1
// 004d6256: ADD ESP,0x4
// 004d6259: RET
