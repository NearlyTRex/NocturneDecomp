// Name: engine_2d.c_drawTextColorFormatted_FUN_004024c0
// Address: 004024c0
// Address Range: [[004024c0, 00402521]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextColorFormatted_FUN_004024c0(char * format_string, int x_pos, int y_pos, ...)
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_2d.c_drawTextColor_FUN_00402430

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextColorFormatted_FUN_004024c0(char *format_string,int x_pos,int y_pos,...)

{
  BADSPACEBASE *in_ESP;
  char acStack_1008 [4092];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)y_pos,&local_c);
  engine_2d_c_drawTextColor_FUN_00402430(acStack_1008,x_pos,y_pos);
  return;
}


// Assembly code:
// 004024c0: PUSH EBX
//   Label: engine_2d.c_drawTextColorFormatted_FUN_004024c0
// 004024c1: PUSH ESI
// 004024c2: SUB ESP,0x1004
// 004024c8: LEA EAX,[ESP + 0x101c]
//   XREF to: Stack[0x10] (DATA)
// 004024cf: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004024d6: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0xc] (DATA)
// 004024dd: PUSH EAX
// 004024de: MOV EDX,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0xc] (READ)
// 004024e5: PUSH EDX
// 004024e6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x100c] (DATA)
// 004024ea: PUSH EAX
// 004024eb: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 004024f0: ADD ESP,0xc
// 004024f3: MOV EBX,dword ptr [ESP + 0x1014]
//   XREF to: Stack[0x8] (READ)
// 004024fa: PUSH EBX
// 004024fb: MOV ESI,dword ptr [ESP + 0x1014]
//   XREF to: Stack[0x4] (READ)
// 00402502: PUSH ESI
// 00402503: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x100c] (DATA)
// 00402507: XOR ECX,ECX
// 00402509: PUSH EAX
// 0040250a: MOV dword ptr [ESP + 0x100c],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 00402511: CALL engine_2d.c_drawTextColor_FUN_00402430
//   XREF to: 00402430 (UNCONDITIONAL_CALL)
// 00402516: ADD ESP,0xc
// 00402519: ADD ESP,0x1004
// 0040251f: POP ESI
// 00402520: POP EBX
// 00402521: RET
