// Name: engine_2d.c_drawTextRightAlignedFormatted_FUN_00402210
// Address: 00402210
// Address Range: [[00402210, 00402271]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextRightAlignedFormatted_FUN_00402210(char * format_string, int y_pos, int right_x, ...)
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_2d.c_drawTextRightAligned_FUN_004021c0

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextRightAlignedFormatted_FUN_00402210
          (char *format_string,int y_pos,int right_x,...)

{
  BADSPACEBASE *in_ESP;
  char acStack_1008 [4092];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)right_x,&local_c);
  engine_2d_c_drawTextRightAligned_FUN_004021c0(acStack_1008,y_pos,right_x);
  return;
}


// Assembly code:
// 00402210: PUSH EBX
//   Label: engine_2d.c_drawTextRightAlignedFormatted_FUN_00402210
// 00402211: PUSH ESI
// 00402212: SUB ESP,0x1004
// 00402218: LEA EAX,[ESP + 0x101c]
//   XREF to: Stack[0x10] (DATA)
// 0040221f: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00402226: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0xc] (DATA)
// 0040222d: PUSH EAX
// 0040222e: MOV EDX,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0xc] (READ)
// 00402235: PUSH EDX
// 00402236: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x100c] (DATA)
// 0040223a: PUSH EAX
// 0040223b: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 00402240: ADD ESP,0xc
// 00402243: MOV EBX,dword ptr [ESP + 0x1014]
//   XREF to: Stack[0x8] (READ)
// 0040224a: PUSH EBX
// 0040224b: MOV ESI,dword ptr [ESP + 0x1014]
//   XREF to: Stack[0x4] (READ)
// 00402252: PUSH ESI
// 00402253: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x100c] (DATA)
// 00402257: XOR ECX,ECX
// 00402259: PUSH EAX
// 0040225a: MOV dword ptr [ESP + 0x100c],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 00402261: CALL engine_2d.c_drawTextRightAligned_FUN_004021c0
//   XREF to: 004021c0 (UNCONDITIONAL_CALL)
// 00402266: ADD ESP,0xc
// 00402269: ADD ESP,0x1004
// 0040226f: POP ESI
// 00402270: POP EBX
// 00402271: RET
