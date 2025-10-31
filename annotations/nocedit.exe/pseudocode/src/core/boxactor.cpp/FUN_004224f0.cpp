// Name: core_boxactor.cpp_FUN_004224f0
// Address: 004224f0
// Address Range: [[004224f0, 00422546]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_004224f0()
// Function calls:
//   core_box.cpp_CBox_FUN_00420180
//   core_boxactor.cpp_FUN_004218d0

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_FUN_004224f0(undefined4 param_1, undefined4
   param_2) */

void core_boxactor_cpp_FUN_004224f0(void)

{
  int in_stack_00000004;
  int in_stack_0000000c;
  
  *(undefined4 *)(in_stack_00000004 + 0x318) = 0;
  core_boxactor_cpp_FUN_004218d0();
  if (in_stack_0000000c == 0) {
    return;
  }
  core_box_cpp_CBox_FUN_00420180((CBox *)(in_stack_00000004 + 0x394));
  return;
}


// Assembly code:
// 004224f0: PUSH EBX
//   Label: core_boxactor.cpp_FUN_004224f0
// 004224f1: SUB ESP,0xc
// 004224f4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004224f8: PUSH EBX
// 004224f9: MOV dword ptr [EBX + 0x318],0x0
// 00422503: CALL core_boxactor.cpp_FUN_004218d0
//   XREF to: 004218d0 (UNCONDITIONAL_CALL)
// 00422508: ADD ESP,0x4
// 0042250b: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042250f: TEST EDX,EDX
// 00422511: JNZ 0x00422518
//   XREF to: 00422518 (CONDITIONAL_JUMP)
// 00422513: ADD ESP,0xc
// 00422516: POP EBX
// 00422517: RET
// 00422518: PUSH EDI
//   Label: LAB_00422518
// 00422519: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10] (DATA)
// 0042251d: PUSH EAX
// 0042251e: MOV EDI,0x4116cbe4
// 00422523: XOR ECX,ECX
// 00422525: PUSH EDX
// 00422526: LEA EAX,[EBX + 0x394]
// 0042252c: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 00422530: PUSH EAX
// 00422531: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 00422535: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x10] (WRITE)
// 00422539: CALL core_box.cpp_CBox_FUN_00420180
//   XREF to: 00420180 (UNCONDITIONAL_CALL)
// 0042253e: ADD ESP,0xc
// 00422541: POP EDI
// 00422542: ADD ESP,0xc
// 00422545: POP EBX
// 00422546: RET
