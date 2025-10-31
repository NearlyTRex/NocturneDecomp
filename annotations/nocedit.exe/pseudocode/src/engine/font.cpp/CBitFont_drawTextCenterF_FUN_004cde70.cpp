// Name: engine_font.cpp_CBitFont_drawTextCenterF_FUN_004cde70
// Address: 004cde70
// Address Range: [[004cde70, 004cded4]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextCenterF_FUN_004cde70(CBitFont * this_ptr, int center_x, int y_pos, int color_mode, int color_value, char * format_string, va_list_t * args)
// Cross-references:
//   engine_font.cpp_CBitFont_drawTextCenterFV_FUN_004cde20 (004cde20) at 004cde4f [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextCenterF_FUN_004cde70
          (CBitFont *this_ptr,int center_x,int y_pos,int color_mode,int color_value,
          char *format_string,va_list_t *args)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char acStack_100c [4092];
  
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,format_string,args);
  iVar1 = engine_font_cpp_CBitFont_drawTextCenter_FUN_004cdde0
                    ((CBitFont *)center_x,y_pos,color_mode,color_value,(int)format_string,
                     acStack_100c);
  return iVar1;
}


// Assembly code:
// 004cde70: PUSH EBX
//   Label: engine_font.cpp_CBitFont_drawTextCenterF_FUN_004cde70
// 004cde71: PUSH ESI
// 004cde72: PUSH EDI
// 004cde73: PUSH EBP
// 004cde74: SUB ESP,0x1000
// 004cde7a: MOV EDX,dword ptr [ESP + 0x102c]
//   XREF to: Stack[0x1c] (READ)
// 004cde81: PUSH EDX
// 004cde82: MOV ECX,dword ptr [ESP + 0x102c]
//   XREF to: Stack[0x18] (READ)
// 004cde89: PUSH ECX
// 004cde8a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 004cde8e: PUSH EAX
// 004cde8f: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 004cde94: ADD ESP,0xc
// 004cde97: MOV EAX,ESP
// 004cde99: PUSH EAX
// 004cde9a: MOV EBX,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x14] (READ)
// 004cdea1: PUSH EBX
// 004cdea2: MOV ESI,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x10] (READ)
// 004cdea9: PUSH ESI
// 004cdeaa: MOV EDI,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0xc] (READ)
// 004cdeb1: PUSH EDI
// 004cdeb2: MOV EBP,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x8] (READ)
// 004cdeb9: PUSH EBP
// 004cdeba: MOV EAX,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x4] (READ)
// 004cdec1: PUSH EAX
// 004cdec2: CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0
//   XREF to: 004cdde0 (UNCONDITIONAL_CALL)
// 004cdec7: ADD ESP,0x18
// 004cdeca: ADD ESP,0x1000
// 004cded0: POP EBP
// 004cded1: POP EDI
// 004cded2: POP ESI
// 004cded3: POP EBX
// 004cded4: RET
