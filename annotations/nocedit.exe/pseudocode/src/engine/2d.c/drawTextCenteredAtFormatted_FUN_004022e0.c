// Name: engine_2d.c_drawTextCenteredAtFormatted_FUN_004022e0
// Address: 004022e0
// Address Range: [[004022e0, 00402341]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredAtFormatted_FUN_004022e0(char * format_string, int center_x, int y_pos, ...)
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_2d.c_drawTextCenteredAt_FUN_00402280

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextCenteredAtFormatted_FUN_004022e0(char *format_string,int center_x,int y_pos,...)

{
  BADSPACEBASE *in_ESP;
  char acStack_1008 [4092];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)y_pos,&local_c);
  engine_2d_c_drawTextCenteredAt_FUN_00402280(acStack_1008,center_x,y_pos);
  return;
}


// Assembly code:
// 004022e0: PUSH EBX
//   Label: engine_2d.c_drawTextCenteredAtFormatted_FUN_004022e0
// 004022e1: PUSH ESI
// 004022e2: SUB ESP,0x1004
// 004022e8: LEA EAX,[ESP + 0x101c]
//   XREF to: Stack[0x10] (DATA)
// 004022ef: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004022f6: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0xc] (DATA)
// 004022fd: PUSH EAX
// 004022fe: MOV EDX,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0xc] (READ)
// 00402305: PUSH EDX
// 00402306: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x100c] (DATA)
// 0040230a: PUSH EAX
// 0040230b: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 00402310: ADD ESP,0xc
// 00402313: MOV EBX,dword ptr [ESP + 0x1014]
//   XREF to: Stack[0x8] (READ)
// 0040231a: PUSH EBX
// 0040231b: MOV ESI,dword ptr [ESP + 0x1014]
//   XREF to: Stack[0x4] (READ)
// 00402322: PUSH ESI
// 00402323: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x100c] (DATA)
// 00402327: XOR ECX,ECX
// 00402329: PUSH EAX
// 0040232a: MOV dword ptr [ESP + 0x100c],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 00402331: CALL engine_2d.c_drawTextCenteredAt_FUN_00402280
//   XREF to: 00402280 (UNCONDITIONAL_CALL)
// 00402336: ADD ESP,0xc
// 00402339: ADD ESP,0x1004
// 0040233f: POP ESI
// 00402340: POP EBX
// 00402341: RET
