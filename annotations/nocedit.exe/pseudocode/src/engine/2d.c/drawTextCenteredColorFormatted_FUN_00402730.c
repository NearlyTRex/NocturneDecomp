// Name: engine_2d.c_drawTextCenteredColorFormatted_FUN_00402730
// Address: 00402730
// Address Range: [[00402730, 0040279b]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredColorFormatted_FUN_00402730(char * format_string, int left_x, int right_x, int y_pos, ...)
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_2d.c_drawTextCenteredColor_FUN_004026c0

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextCenteredColorFormatted_FUN_00402730
          (char *format_string,int left_x,int right_x,int y_pos,...)

{
  BADSPACEBASE *in_ESP;
  char acStack_100c [4092];
  va_list_t local_10;
  
  local_10 = &stack0x00000014;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,(char *)y_pos,&local_10);
  engine_2d_c_drawTextCenteredColor_FUN_004026c0(acStack_100c,left_x,right_x,y_pos);
  return;
}


// Assembly code:
// 00402730: PUSH EBX
//   Label: engine_2d.c_drawTextCenteredColorFormatted_FUN_00402730
// 00402731: PUSH ESI
// 00402732: PUSH EDI
// 00402733: SUB ESP,0x1004
// 00402739: LEA EAX,[ESP + 0x1024]
//   XREF to: Stack[0x14] (DATA)
// 00402740: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00402747: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0x10] (DATA)
// 0040274e: PUSH EAX
// 0040274f: MOV EDX,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0x10] (READ)
// 00402756: PUSH EDX
// 00402757: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 0040275b: PUSH EAX
// 0040275c: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 00402761: ADD ESP,0xc
// 00402764: MOV EBX,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0xc] (READ)
// 0040276b: PUSH EBX
// 0040276c: MOV ESI,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0x8] (READ)
// 00402773: PUSH ESI
// 00402774: MOV EDI,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0x4] (READ)
// 0040277b: PUSH EDI
// 0040277c: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1010] (DATA)
// 00402780: XOR ECX,ECX
// 00402782: PUSH EAX
// 00402783: MOV dword ptr [ESP + 0x1010],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 0040278a: CALL engine_2d.c_drawTextCenteredColor_FUN_004026c0
//   XREF to: 004026c0 (UNCONDITIONAL_CALL)
// 0040278f: ADD ESP,0x10
// 00402792: ADD ESP,0x1004
// 00402798: POP EDI
// 00402799: POP ESI
// 0040279a: POP EBX
// 0040279b: RET
