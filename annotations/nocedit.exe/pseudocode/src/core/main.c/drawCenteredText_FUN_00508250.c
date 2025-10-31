// Name: core_main.c_drawCenteredText_FUN_00508250
// Address: 00508250
// Address Range: [[00508250, 0050829d]]
// Convention: __cdecl
// Signature: void core_main.c_drawCenteredText_FUN_00508250(char * text, int y_pos, int color)
// Globals:
//   CBitFont* g_MediumFont
// Function calls:
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80

#include "nocturne.h"

void __cdecl core_main_c_drawCenteredText_FUN_00508250(char *text,int y_pos,int color)

{
  int iVar1;
  int in_stack_00000010;
  int in_stack_00000014;
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_MediumFont,text);
  engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
            (g_MediumFont,(char *)y_pos,0x140 - iVar1 / 2,in_stack_00000010,in_stack_00000014,0);
  return;
}


// Assembly code:
// 00508250: PUSH EBX
//   Label: core_main.c_drawCenteredText_FUN_00508250
// 00508251: PUSH ESI
// 00508252: PUSH EDI
// 00508253: PUSH EBP
// 00508254: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00508258: PUSH EDX
// 00508259: MOV ECX,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 0050825f: PUSH ECX
// 00508260: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 00508265: MOV EDX,EAX
// 00508267: SAR EDX,0x1f
// 0050826a: SUB EAX,EDX
// 0050826c: SAR EAX,0x1
// 0050826e: ADD ESP,0x8
// 00508271: PUSH 0x0
// 00508273: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00508277: PUSH EBX
// 00508278: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0050827c: MOV EDX,0x140
// 00508281: PUSH ESI
// 00508282: SUB EDX,EAX
// 00508284: PUSH EDX
// 00508285: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00508289: PUSH EDI
// 0050828a: MOV EBP,dword ptr [0x020a5718]
//   XREF to: 020a5718 (READ)
// 00508290: PUSH EBP
// 00508291: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 00508296: ADD ESP,0x18
// 00508299: POP EBP
// 0050829a: POP EDI
// 0050829b: POP ESI
// 0050829c: POP EBX
// 0050829d: RET
