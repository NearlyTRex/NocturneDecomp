// Name: engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80
// Address: 004cdf80
// Address Range: [[004cdf80, 004cdfec]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80(CBitFont * this_ptr, int left_x, int right_x, int y_pos, int color_mode, int color_value, char * format_string, va_list_t * args)
// Cross-references:
//   engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30 (004cdf30) at 004cdf64 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80
          (CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value,
          char *format_string,va_list_t *args)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char acStack_100c [4092];
  
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,format_string,args);
  iVar1 = engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                    ((CBitFont *)left_x,right_x,y_pos,color_mode,color_value,(int)format_string,
                     acStack_100c);
  return iVar1;
}


// Assembly code:
// 004cdf80: PUSH EBX
//   Label: engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80
// 004cdf81: PUSH ESI
// 004cdf82: PUSH EDI
// 004cdf83: PUSH EBP
// 004cdf84: SUB ESP,0x1000
// 004cdf8a: MOV EDX,dword ptr [ESP + 0x1030]
//   XREF to: Stack[0x20] (READ)
// 004cdf91: PUSH EDX
// 004cdf92: MOV ECX,dword ptr [ESP + 0x1030]
//   XREF to: Stack[0x1c] (READ)
// 004cdf99: PUSH ECX
// 004cdf9a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 004cdf9e: PUSH EAX
// 004cdf9f: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 004cdfa4: ADD ESP,0xc
// 004cdfa7: MOV EAX,ESP
// 004cdfa9: PUSH EAX
// 004cdfaa: MOV EBX,dword ptr [ESP + 0x102c]
//   XREF to: Stack[0x18] (READ)
// 004cdfb1: PUSH EBX
// 004cdfb2: MOV ESI,dword ptr [ESP + 0x102c]
//   XREF to: Stack[0x14] (READ)
// 004cdfb9: PUSH ESI
// 004cdfba: MOV EDI,dword ptr [ESP + 0x102c]
//   XREF to: Stack[0x10] (READ)
// 004cdfc1: PUSH EDI
// 004cdfc2: MOV EBP,dword ptr [ESP + 0x102c]
//   XREF to: Stack[0xc] (READ)
// 004cdfc9: PUSH EBP
// 004cdfca: MOV EAX,dword ptr [ESP + 0x102c]
//   XREF to: Stack[0x8] (READ)
// 004cdfd1: PUSH EAX
// 004cdfd2: MOV EDX,dword ptr [ESP + 0x102c]
//   XREF to: Stack[0x4] (READ)
// 004cdfd9: PUSH EDX
// 004cdfda: CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
//   XREF to: 004cdee0 (UNCONDITIONAL_CALL)
// 004cdfdf: ADD ESP,0x1c
// 004cdfe2: ADD ESP,0x1000
// 004cdfe8: POP EBP
// 004cdfe9: POP EDI
// 004cdfea: POP ESI
// 004cdfeb: POP EBX
// 004cdfec: RET
