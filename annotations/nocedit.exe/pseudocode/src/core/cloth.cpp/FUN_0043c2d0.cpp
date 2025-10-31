// Name: core_cloth.cpp_FUN_0043c2d0
// Address: 0043c2d0
// Address Range: [[0043c2d0, 0043c316]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043c2d0()
// Cross-references:
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0 (0042dfc0) at 0042e03d [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c6b60 (005c6b60) at 005c6c11 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c7291 [UNCONDITIONAL_CALL]
// Function calls:
//   core_cloth.cpp_FUN_0043ab80

#include "nocturne.h"

/* Signature: undefined1 core_cloth.cpp_FUN_0043c2d0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6) */

void core_cloth_cpp_FUN_0043c2d0(void)

{
  int iVar1;
  int *in_stack_00000004;
  
  iVar1 = 0;
  if (0 < *in_stack_00000004) {
    do {
      iVar1 = iVar1 + 1;
      core_cloth_cpp_FUN_0043ab80();
    } while (iVar1 < *in_stack_00000004);
  }
  return;
}


// Assembly code:
// 0043c2d0: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043c2d0
// 0043c2d1: PUSH EDI
// 0043c2d2: PUSH EBP
// 0043c2d3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0043c2d7: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x18] (READ)
// 0043c2db: MOV EDX,dword ptr [EDI]
// 0043c2dd: XOR EBX,EBX
// 0043c2df: TEST EDX,EDX
// 0043c2e1: JLE 0x0043c313
//   XREF to: 0043c313 (CONDITIONAL_JUMP)
// 0043c2e3: PUSH ESI
// 0043c2e4: MOV ESI,EDI
// 0043c2e6: PUSH EBP
//   Label: LAB_0043c2e6
// 0043c2e7: PUSH dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 0043c2eb: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0043c2ef: PUSH dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 0043c2f3: PUSH ECX
// 0043c2f4: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0043c2f8: PUSH EAX
// 0043c2f9: MOV EDX,dword ptr [ESI + 0x194]
// 0043c2ff: PUSH EDX
// 0043c300: ADD ESI,0x4
// 0043c303: INC EBX
// 0043c304: CALL core_cloth.cpp_FUN_0043ab80
//   XREF to: 0043ab80 (UNCONDITIONAL_CALL)
// 0043c309: MOV ECX,dword ptr [EDI]
// 0043c30b: ADD ESP,0x18
// 0043c30e: CMP EBX,ECX
// 0043c310: JL 0x0043c2e6
//   XREF to: 0043c2e6 (CONDITIONAL_JUMP)
// 0043c312: POP ESI
// 0043c313: POP EBP
//   Label: LAB_0043c313
// 0043c314: POP EDI
// 0043c315: POP EBX
// 0043c316: RET
