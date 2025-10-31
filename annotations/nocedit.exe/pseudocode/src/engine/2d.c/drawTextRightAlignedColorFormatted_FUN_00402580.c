// Name: engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580
// Address: 00402580
// Address Range: [[00402580, 004025e1]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580(char * format_string, int y_pos, int right_x, ...)
// Cross-references:
//   core_texlist.cpp_CTextureList_renderTexture_FUN_005dca30 (005dca30) at 005dca76 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_2d.c_drawTextRightAlignedColor_FUN_00402530

#include "nocturne.h"

void __cdecl
engine_2d_c_drawTextRightAlignedColorFormatted_FUN_00402580
          (char *format_string,int y_pos,int right_x,...)

{
  BADSPACEBASE *in_ESP;
  char acStack_1008 [4092];
  va_list_t local_c;
  
  local_c = &stack0x00000010;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff4,(char *)right_x,&local_c);
  engine_2d_c_drawTextRightAlignedColor_FUN_00402530(acStack_1008,y_pos,right_x);
  return;
}


// Assembly code:
// 00402580: PUSH EBX
//   Label: engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580
// 00402581: PUSH ESI
// 00402582: SUB ESP,0x1004
// 00402588: LEA EAX,[ESP + 0x101c]
//   XREF to: Stack[0x10] (DATA)
// 0040258f: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00402596: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0xc] (DATA)
// 0040259d: PUSH EAX
// 0040259e: MOV EDX,dword ptr [ESP + 0x101c]
//   XREF to: Stack[0xc] (READ)
// 004025a5: PUSH EDX
// 004025a6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x100c] (DATA)
// 004025aa: PUSH EAX
// 004025ab: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 004025b0: ADD ESP,0xc
// 004025b3: MOV EBX,dword ptr [ESP + 0x1014]
//   XREF to: Stack[0x8] (READ)
// 004025ba: PUSH EBX
// 004025bb: MOV ESI,dword ptr [ESP + 0x1014]
//   XREF to: Stack[0x4] (READ)
// 004025c2: PUSH ESI
// 004025c3: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x100c] (DATA)
// 004025c7: XOR ECX,ECX
// 004025c9: PUSH EAX
// 004025ca: MOV dword ptr [ESP + 0x100c],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 004025d1: CALL engine_2d.c_drawTextRightAlignedColor_FUN_00402530
//   XREF to: 00402530 (UNCONDITIONAL_CALL)
// 004025d6: ADD ESP,0xc
// 004025d9: ADD ESP,0x1004
// 004025df: POP ESI
// 004025e0: POP EBX
// 004025e1: RET
