// Name: engine_font.cpp_CBitFont_printfRight_FUN_004cdd70
// Address: 004cdd70
// Address Range: [[004cdd70, 004cddd4]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_printfRight_FUN_004cdd70(CBitFont * font_ptr, int x, int y, int color, char * format, ...)
// Cross-references:
//   engine_font.cpp_CBitFont_printfRight_FUN_004cdd20 (004cdd20) at 004cdd4f [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_printfRight_FUN_004cdd70
          (CBitFont *font_ptr,int x,int y,int color,char *format,...)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_00000018;
  va_list_t *in_stack_0000001c;
  char acStack_100c [4092];
  
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffeff0,in_stack_00000018,in_stack_0000001c);
  engine_font_cpp_CBitFont_drawTextRight_FUN_004cdce0
            ((CBitFont *)x,y,color,(int)format,(int)in_stack_00000018,acStack_100c);
  return;
}


// Assembly code:
// 004cdd70: PUSH EBX
//   Label: engine_font.cpp_CBitFont_printfRight_FUN_004cdd70
// 004cdd71: PUSH ESI
// 004cdd72: PUSH EDI
// 004cdd73: PUSH EBP
// 004cdd74: SUB ESP,0x1000
// 004cdd7a: MOV EDX,dword ptr [ESP + 0x102c]
//   XREF to: Stack[0x1c] (READ)
// 004cdd81: PUSH EDX
// 004cdd82: MOV ECX,dword ptr [ESP + 0x102c]
//   XREF to: Stack[0x18] (READ)
// 004cdd89: PUSH ECX
// 004cdd8a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1010] (DATA)
// 004cdd8e: PUSH EAX
// 004cdd8f: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 004cdd94: ADD ESP,0xc
// 004cdd97: MOV EAX,ESP
// 004cdd99: PUSH EAX
// 004cdd9a: MOV EBX,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x14] (READ)
// 004cdda1: PUSH EBX
// 004cdda2: MOV ESI,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x10] (READ)
// 004cdda9: PUSH ESI
// 004cddaa: MOV EDI,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0xc] (READ)
// 004cddb1: PUSH EDI
// 004cddb2: MOV EBP,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x8] (READ)
// 004cddb9: PUSH EBP
// 004cddba: MOV EAX,dword ptr [ESP + 0x1028]
//   XREF to: Stack[0x4] (READ)
// 004cddc1: PUSH EAX
// 004cddc2: CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0
//   XREF to: 004cdce0 (UNCONDITIONAL_CALL)
// 004cddc7: ADD ESP,0x18
// 004cddca: ADD ESP,0x1000
// 004cddd0: POP EBP
// 004cddd1: POP EDI
// 004cddd2: POP ESI
// 004cddd3: POP EBX
// 004cddd4: RET
