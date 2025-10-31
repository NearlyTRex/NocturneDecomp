// Name: engine_font.cpp_CBitFont_drawTextF_FUN_004cdc70
// Address: 004cdc70
// Address Range: [[004cdc70, 004cdcd4]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextF_FUN_004cdc70(CBitFont * this_ptr, int x_pos, int y_pos, int color_mode, int color_value, char * format_string, ...)
// Cross-references:
//   engine_font.cpp_CBitFont_drawTextFV_FUN_004cdc20 (004cdc20) at 004cdc4f [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextF_FUN_004cdc70
          (CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string
          ,...)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  va_list_t *in_stack_0000001c;
  undefined1 auStack_100c [4092];
  
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,format_string,in_stack_0000001c);
  iVar1 = engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0
                    ((CBitFont *)x_pos,(char *)y_pos,color_mode,color_value,(int)format_string,
                     (int)auStack_100c);
  return iVar1;
}


// Assembly code:
// 004cdc70: PUSH EBX
//   Label: engine_font.cpp_CBitFont_drawTextF_FUN_004cdc70
// 004cdc71: PUSH ESI
// 004cdc72: PUSH EDI
// 004cdc73: PUSH EBP
// 004cdc74: SUB ESP,0x1000
// 004cdc7a: MOV EDX,dword ptr [ESP + 0x102c]
//   XREF to: Stack[0x1c] (READ)
// 004cdc81: PUSH EDX
// 004cdc82: MOV ECX,dword ptr [ESP + 0x102c]
//   XREF to: Stack[0x18] (READ)
// 004cdc89: PUSH ECX
// 004cdc8a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 004cdc8e: PUSH EAX
// 004cdc8f: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 004cdc94: ADD ESP,0xc
// 004cdc97: MOV EAX,ESP
// 004cdc99: PUSH EAX
// 004cdc9a: MOV EBX,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x14] (READ)
// 004cdca1: PUSH EBX
// 004cdca2: MOV ESI,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x10] (READ)
// 004cdca9: PUSH ESI
// 004cdcaa: MOV EDI,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0xc] (READ)
// 004cdcb1: PUSH EDI
// 004cdcb2: MOV EBP,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x8] (READ)
// 004cdcb9: PUSH EBP
// 004cdcba: MOV EAX,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x4] (READ)
// 004cdcc1: PUSH EAX
// 004cdcc2: CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
//   XREF to: 004cdbf0 (UNCONDITIONAL_CALL)
// 004cdcc7: ADD ESP,0x18
// 004cdcca: ADD ESP,0x1000
// 004cdcd0: POP EBP
// 004cdcd1: POP EDI
// 004cdcd2: POP ESI
// 004cdcd3: POP EBX
// 004cdcd4: RET
