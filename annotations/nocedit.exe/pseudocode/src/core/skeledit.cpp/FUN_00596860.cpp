// Name: core_skeledit.cpp_FUN_00596860
// Address: 00596860
// Address Range: [[00596860, 005968a1]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00596860()
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void core_skeledit_cpp_FUN_00596860(void)

{
  int y_pos;
  int in_stack_0000000c;
  char *in_stack_00000010;
  char *in_stack_00000018;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  y_pos = (in_stack_0000000c + 1) * 0xb;
  engine_2d_c_drawText_FUN_00401fd0(in_stack_00000010,7,y_pos);
  engine_2d_c_drawText_FUN_00401fd0(in_stack_00000018,0x69,y_pos);
  return;
}


// Assembly code:
// 00596860: PUSH 0x14
//   Label: core_skeledit.cpp_FUN_00596860
// 00596865: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0059686a: PUSH EBX
// 0059686b: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0059686f: LEA EDX,[EBX + 0x1]
// 00596872: LEA EBX,[EDX*0x4 + 0x0]
// 00596879: SUB EBX,EDX
// 0059687b: SHL EBX,0x2
// 0059687e: SUB EBX,EDX
// 00596880: PUSH EBX
// 00596881: PUSH 0x7
// 00596883: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00596887: PUSH EDX
// 00596888: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0059688d: ADD ESP,0xc
// 00596890: PUSH EBX
// 00596891: PUSH 0x69
// 00596893: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00596897: PUSH ECX
// 00596898: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0059689d: ADD ESP,0xc
// 005968a0: POP EBX
// 005968a1: RET
