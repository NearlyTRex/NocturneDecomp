// Name: engine_2d.c_drawTextFormatted_FUN_00402150
// Address: 00402150
// Address Range: [[00402150, 004021b1]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextFormatted_FUN_00402150(char * format_string, int x_pos, int y_pos, ...)
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextFormatted_FUN_00402150(char *format_string,int x_pos,int y_pos,...)

{
  BADSPACEBASE *in_ESP;
  char acStack_1008 [4092];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)y_pos,&local_c);
  engine_2d_c_drawText_FUN_00401fd0(acStack_1008,x_pos,y_pos);
  return;
}


// Assembly code:
// 00402150: PUSH EBX
//   Label: engine_2d.c_drawTextFormatted_FUN_00402150
// 00402151: PUSH ESI
// 00402152: SUB ESP,0x1004
// 00402158: LEA EAX,[ESP + 0x101c]
//   XREF to: Stack[0x10] (DATA)
// 0040215f: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00402166: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0xc] (DATA)
// 0040216d: PUSH EAX
// 0040216e: MOV EDX,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0xc] (READ)
// 00402175: PUSH EDX
// 00402176: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x100c] (DATA)
// 0040217a: PUSH EAX
// 0040217b: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 00402180: ADD ESP,0xc
// 00402183: MOV EBX,dword ptr [ESP + 0x1014]
//   XREF to: Stack[0x8] (READ)
// 0040218a: PUSH EBX
// 0040218b: MOV ESI,dword ptr [ESP + 0x1014]
//   XREF to: Stack[0x4] (READ)
// 00402192: PUSH ESI
// 00402193: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x100c] (DATA)
// 00402197: XOR ECX,ECX
// 00402199: PUSH EAX
// 0040219a: MOV dword ptr [ESP + 0x100c],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 004021a1: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004021a6: ADD ESP,0xc
// 004021a9: ADD ESP,0x1004
// 004021af: POP ESI
// 004021b0: POP EBX
// 004021b1: RET
