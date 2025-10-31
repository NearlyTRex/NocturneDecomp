// Name: engine_2d.c_drawTextCenteredAtColorFormatted_FUN_00402650
// Address: 00402650
// Address Range: [[00402650, 004026b0]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextCenteredAtColorFormatted_FUN_00402650(char * format_string, int center_x, int y_pos, ...)
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_2d.c_drawTextCenteredAtColor_FUN_004025f0

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextCenteredAtColorFormatted_FUN_00402650
          (char *format_string,int center_x,int y_pos,...)

{
  BADSPACEBASE *in_ESP;
  char acStack_1008 [4092];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)y_pos,&local_c);
  engine_2d_c_drawTextCenteredAtColor_FUN_004025f0(acStack_1008,center_x,y_pos);
  return;
}


// Assembly code:
// 00402650: PUSH EBX
//   Label: engine_2d.c_drawTextCenteredAtColorFormatted_FUN_00402650
// 00402651: PUSH ESI
// 00402652: SUB ESP,0x1004
// 00402658: LEA EAX,[ESP + 0x101c]
//   XREF to: Stack[0x10] (DATA)
// 0040265f: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00402666: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0xc] (DATA)
// 0040266d: PUSH EAX
// 0040266e: MOV EDX,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0xc] (READ)
// 00402675: PUSH EDX
// 00402676: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x100c] (DATA)
// 0040267a: PUSH EAX
// 0040267b: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 00402680: ADD ESP,0xc
// 00402683: MOV EBX,dword ptr [ESP + 0x1014]
//   XREF to: Stack[0x8] (READ)
// 0040268a: PUSH EBX
// 0040268b: MOV ESI,dword ptr [ESP + 0x1014]
//   XREF to: Stack[0x4] (READ)
// 00402692: PUSH ESI
// 00402693: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x100c] (DATA)
// 00402697: XOR ECX,ECX
// 00402699: PUSH EAX
// 0040269a: MOV dword ptr [ESP + 0x100c],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 004026a1: CALL engine_2d.c_drawTextCenteredAtColor_FUN_004025f0
//   XREF to: 004025f0 (UNCONDITIONAL_CALL)
// 004026a6: ADD ESP,0xc
// 004026a9: ADD ESP,0x1004
// 004026af: POP ESI
// 004026b0: POP EBX
