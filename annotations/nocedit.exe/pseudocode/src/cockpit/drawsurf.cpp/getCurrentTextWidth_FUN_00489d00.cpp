// Name: cockpit_drawsurf.cpp_getCurrentTextWidth_FUN_00489d00
// Address: 00489d00
// Address Range: [[00489d00, 00489d23]]
// Convention: __cdecl
// Signature: int cockpit_drawsurf.cpp_getCurrentTextWidth_FUN_00489d00(char * text)
// Globals:
//   CBitFont* g_CurrentFont
// Function calls:
//   engine_2d.c_getStringWidth_FUN_004018a0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80

#include "nocturne.h"

int __cdecl cockpit_drawsurf_cpp_getCurrentTextWidth_FUN_00489d00(char *text)

{
  int iVar1;
  char *in_stack_00000008;
  
  if (g_CurrentFont != (CBitFont *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_CurrentFont,in_stack_00000008);
    return iVar1;
  }
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(in_stack_00000008);
  return iVar1 + -1;
}


// Assembly code:
// 00489d00: MOV EAX,dword ptr [ESP + 0x8]
//   Label: cockpit_drawsurf.cpp_getCurrentTextWidth_FUN_00489d00
//   XREF to: Stack[0x8] (READ)
// 00489d04: MOV EDX,dword ptr [0x02c6d558]
//   XREF to: 02c6d558 (READ)
// 00489d0a: TEST EDX,EDX
// 00489d0c: JZ 0x00489d19
//   XREF to: 00489d19 (CONDITIONAL_JUMP)
// 00489d0e: PUSH EAX
// 00489d0f: PUSH EDX
// 00489d10: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 00489d15: ADD ESP,0x8
// 00489d18: RET
// 00489d19: PUSH EAX
//   Label: LAB_00489d19
// 00489d1a: CALL engine_2d.c_getStringWidth_FUN_004018a0
//   XREF to: 004018a0 (UNCONDITIONAL_CALL)
// 00489d1f: ADD ESP,0x4
// 00489d22: DEC EAX
// 00489d23: RET
