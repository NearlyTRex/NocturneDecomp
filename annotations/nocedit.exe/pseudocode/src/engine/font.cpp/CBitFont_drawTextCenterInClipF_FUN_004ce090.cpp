// Name: engine_font.cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090
// Address: 004ce090
// Address Range: [[004ce090, 004ce0ec]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090(CBitFont * this_ptr, int y_pos, int color_mode, int color_value, char * format_string, va_list_t * args)
// Cross-references:
//   engine_font.cpp_CBitFont_printfCenterInClip_FUN_004ce050 (004ce050) at 004ce07c [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090
          (CBitFont *this_ptr,int y_pos,int color_mode,int color_value,char *format_string,
          va_list_t *args)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char acStack_100c [4092];
  
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,format_string,args);
  iVar1 = engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0
                    ((CBitFont *)y_pos,color_mode,color_value,(int)format_string,acStack_100c);
  return iVar1;
}


// Assembly code:
// 004ce090: PUSH EBX
//   Label: engine_font.cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090
// 004ce091: PUSH ESI
// 004ce092: PUSH EDI
// 004ce093: PUSH EBP
// 004ce094: SUB ESP,0x1000
// 004ce09a: MOV EDX,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x18] (READ)
// 004ce0a1: PUSH EDX
// 004ce0a2: MOV ECX,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x14] (READ)
// 004ce0a9: PUSH ECX
// 004ce0aa: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 004ce0ae: PUSH EAX
// 004ce0af: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 004ce0b4: ADD ESP,0xc
// 004ce0b7: MOV EAX,ESP
// 004ce0b9: PUSH EAX
// 004ce0ba: MOV EBX,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0x10] (READ)
// 004ce0c1: PUSH EBX
// 004ce0c2: MOV ESI,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0xc] (READ)
// 004ce0c9: PUSH ESI
// 004ce0ca: MOV EDI,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0x8] (READ)
// 004ce0d1: PUSH EDI
// 004ce0d2: MOV EBP,dword ptr [ESP + 0x1024]
//   XREF to: Stack[0x4] (READ)
// 004ce0d9: PUSH EBP
// 004ce0da: CALL engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0
//   XREF to: 004cdff0 (UNCONDITIONAL_CALL)
// 004ce0df: ADD ESP,0x14
// 004ce0e2: ADD ESP,0x1000
// 004ce0e8: POP EBP
// 004ce0e9: POP EDI
// 004ce0ea: POP ESI
// 004ce0eb: POP EBX
// 004ce0ec: RET
