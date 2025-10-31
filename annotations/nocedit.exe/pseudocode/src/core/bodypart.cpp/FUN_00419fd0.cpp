// Name: core_bodypart.cpp_FUN_00419fd0
// Address: 00419fd0
// Address Range: [[00419fd0, 0041a03a]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_00419fd0()
// Function calls:
//   core_bodypart.cpp_FUN_0041b070
//   core_box.cpp_CBox_FUN_00420180

#include "nocturne.h"

/* Signature: undefined1 actors_other_bodypart.cpp_FUN_00419fd0(undefined4 param_1, undefined4
   param_2) */

void core_bodypart_cpp_FUN_00419fd0(void)

{
  int in_stack_00000004;
  int in_stack_0000000c;
  
  *(undefined4 *)(in_stack_00000004 + 0xf28) = 0;
  core_bodypart_cpp_FUN_0041b070();
  if (in_stack_0000000c == 0) {
    *(undefined4 *)(in_stack_00000004 + 0xcbc) = 0x41200000;
    return;
  }
  core_box_cpp_CBox_FUN_00420180((CBox *)(in_stack_00000004 + 0xccc));
  *(undefined4 *)(in_stack_00000004 + 0xcbc) = 0x41200000;
  return;
}


// Assembly code:
// 00419fd0: PUSH EBX
//   Label: core_bodypart.cpp_FUN_00419fd0
// 00419fd1: SUB ESP,0xc
// 00419fd4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00419fd8: PUSH EBX
// 00419fd9: MOV dword ptr [EBX + 0xf28],0x0
// 00419fe3: CALL core_bodypart.cpp_FUN_0041b070
//   XREF to: 0041b070 (UNCONDITIONAL_CALL)
// 00419fe8: ADD ESP,0x4
// 00419feb: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00419fef: TEST EDX,EDX
// 00419ff1: JNZ 0x0041a002
//   XREF to: 0041a002 (CONDITIONAL_JUMP)
// 00419ff3: MOV dword ptr [EBX + 0xcbc],0x41200000
// 00419ffd: ADD ESP,0xc
// 0041a000: POP EBX
// 0041a001: RET
// 0041a002: PUSH EDI
//   Label: LAB_0041a002
// 0041a003: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10] (DATA)
// 0041a007: PUSH EAX
// 0041a008: MOV EDI,0x4116cbe4
// 0041a00d: XOR ECX,ECX
// 0041a00f: PUSH EDX
// 0041a010: LEA EAX,[EBX + 0xccc]
// 0041a016: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x8] (WRITE)
// 0041a01a: PUSH EAX
// 0041a01b: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 0041a01f: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x10] (WRITE)
// 0041a023: CALL core_box.cpp_CBox_FUN_00420180
//   XREF to: 00420180 (UNCONDITIONAL_CALL)
// 0041a028: ADD ESP,0xc
// 0041a02b: POP EDI
// 0041a02c: MOV dword ptr [EBX + 0xcbc],0x41200000
// 0041a036: ADD ESP,0xc
// 0041a039: POP EBX
// 0041a03a: RET
