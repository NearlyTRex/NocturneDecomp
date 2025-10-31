// Name: engine_2d.c_drawTextCenteredFormatted_FUN_004023c0
// Address: 004023c0
// Address Range: [[004023c0, 0040242b]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredFormatted_FUN_004023c0(char * format_string, int left_x, int right_x, int y_pos, ...)
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_2d.c_drawTextCentered_FUN_00402350

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextCenteredFormatted_FUN_004023c0
          (char *format_string,int left_x,int right_x,int y_pos,...)

{
  BADSPACEBASE *in_ESP;
  char acStack_100c [4092];
  va_list_t local_10;
  
  local_10 = &stack0x00000014;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,(char *)y_pos,&local_10);
  engine_2d_c_drawTextCentered_FUN_00402350(acStack_100c,left_x,right_x,y_pos);
  return;
}


// Assembly code:
// 004023c0: PUSH EBX
//   Label: engine_2d.c_drawTextCenteredFormatted_FUN_004023c0
// 004023c1: PUSH ESI
// 004023c2: PUSH EDI
// 004023c3: SUB ESP,0x1004
// 004023c9: LEA EAX,[ESP + 0x1024]
//   XREF to: Stack[0x14] (DATA)
// 004023d0: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004023d7: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0x10] (DATA)
// 004023de: PUSH EAX
// 004023df: MOV EDX,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0x10] (READ)
// 004023e6: PUSH EDX
// 004023e7: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 004023eb: PUSH EAX
// 004023ec: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 004023f1: ADD ESP,0xc
// 004023f4: MOV EBX,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0xc] (READ)
// 004023fb: PUSH EBX
// 004023fc: MOV ESI,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0x8] (READ)
// 00402403: PUSH ESI
// 00402404: MOV EDI,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0x4] (READ)
// 0040240b: PUSH EDI
// 0040240c: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1010] (DATA)
// 00402410: XOR ECX,ECX
// 00402412: PUSH EAX
// 00402413: MOV dword ptr [ESP + 0x1010],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 0040241a: CALL engine_2d.c_drawTextCentered_FUN_00402350
//   XREF to: 00402350 (UNCONDITIONAL_CALL)
// 0040241f: ADD ESP,0x10
// 00402422: ADD ESP,0x1004
// 00402428: POP EDI
// 00402429: POP ESI
// 0040242a: POP EBX
// 0040242b: RET
