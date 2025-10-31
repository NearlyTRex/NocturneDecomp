// Name: core_cloth.cpp_FUN_0043c290
// Address: 0043c290
// Address Range: [[0043c290, 0043c2ce]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043c290()
// Cross-references:
//   core_succubus.cpp_CSuccubus_FUN_005c6b60 (005c6b60) at 005c6bec [UNCONDITIONAL_CALL]
// Function calls:
//   core_cloth.cpp_FUN_00439710

#include "nocturne.h"

/* Signature: undefined1 core_cloth.cpp_FUN_0043c290(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

void core_cloth_cpp_FUN_0043c290(void)

{
  int iVar1;
  int *in_stack_00000004;
  
  iVar1 = 0;
  if (0 < *in_stack_00000004) {
    do {
      iVar1 = iVar1 + 1;
      core_cloth_cpp_FUN_00439710();
    } while (iVar1 < *in_stack_00000004);
  }
  return;
}


// Assembly code:
// 0043c290: PUSH ESI
//   Label: core_cloth.cpp_FUN_0043c290
// 0043c291: PUSH EDI
// 0043c292: PUSH EBP
// 0043c293: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0043c297: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0043c29b: MOV EDX,dword ptr [EDI]
// 0043c29d: XOR ESI,ESI
// 0043c29f: TEST EDX,EDX
// 0043c2a1: JLE 0x0043c2cb
//   XREF to: 0043c2cb (CONDITIONAL_JUMP)
// 0043c2a3: PUSH EBX
// 0043c2a4: MOV EBX,EDI
// 0043c2a6: MOV ECX,dword ptr [ESP + 0x20]
//   Label: LAB_0043c2a6
//   XREF to: Stack[0x10] (READ)
// 0043c2aa: PUSH ECX
// 0043c2ab: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0043c2af: PUSH EAX
// 0043c2b0: PUSH EBP
// 0043c2b1: MOV EDX,dword ptr [EBX + 0x194]
// 0043c2b7: PUSH EDX
// 0043c2b8: ADD EBX,0x4
// 0043c2bb: INC ESI
// 0043c2bc: CALL core_cloth.cpp_FUN_00439710
//   XREF to: 00439710 (UNCONDITIONAL_CALL)
// 0043c2c1: MOV ECX,dword ptr [EDI]
// 0043c2c3: ADD ESP,0x10
// 0043c2c6: CMP ESI,ECX
// 0043c2c8: JL 0x0043c2a6
//   XREF to: 0043c2a6 (CONDITIONAL_JUMP)
// 0043c2ca: POP EBX
// 0043c2cb: POP EBP
//   Label: LAB_0043c2cb
// 0043c2cc: POP EDI
// 0043c2cd: POP ESI
// 0043c2ce: RET
