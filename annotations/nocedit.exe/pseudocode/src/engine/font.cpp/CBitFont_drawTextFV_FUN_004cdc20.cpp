// Name: engine_font.cpp_CBitFont_drawTextFV_FUN_004cdc20
// Address: 004cdc20
// Address Range: [[004cdc20, 004cdc63]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextFV_FUN_004cdc20(CBitFont * this_ptr, int x_pos, int y_pos, int color_mode, int color_value, char * format_string, ...)
// Cross-references:
//   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850 (004d0850) at 004d0bb9 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_font.cpp_CBitFont_drawTextF_FUN_004cdc70

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextFV_FUN_004cdc20
          (CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string
          ,...)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined1 *local_14;
  
  local_14 = &stack0x0000001c;
  iVar1 = engine_font_cpp_CBitFont_drawTextF_FUN_004cdc70
                    (this_ptr,x_pos,y_pos,color_mode,color_value,format_string,&local_14);
  return iVar1;
}


// Assembly code:
// 004cdc20: PUSH EBX
//   Label: engine_font.cpp_CBitFont_drawTextFV_FUN_004cdc20
// 004cdc21: PUSH ESI
// 004cdc22: PUSH EDI
// 004cdc23: PUSH EBP
// 004cdc24: SUB ESP,0x4
// 004cdc27: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[0x1c] (DATA)
// 004cdc2b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004cdc2e: MOV EAX,ESP
// 004cdc30: PUSH EAX
// 004cdc31: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x18] (READ)
// 004cdc35: PUSH EDX
// 004cdc36: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x14] (READ)
// 004cdc3a: PUSH ECX
// 004cdc3b: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 004cdc3f: PUSH EBX
// 004cdc40: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 004cdc44: PUSH ESI
// 004cdc45: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 004cdc49: PUSH EDI
// 004cdc4a: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 004cdc4e: PUSH EBP
// 004cdc4f: CALL engine_font.cpp_CBitFont_drawTextF_FUN_004cdc70
//   XREF to: 004cdc70 (UNCONDITIONAL_CALL)
// 004cdc54: ADD ESP,0x1c
// 004cdc57: XOR EDX,EDX
// 004cdc59: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 004cdc5c: ADD ESP,0x4
// 004cdc5f: POP EBP
// 004cdc60: POP EDI
// 004cdc61: POP ESI
// 004cdc62: POP EBX
// 004cdc63: RET
