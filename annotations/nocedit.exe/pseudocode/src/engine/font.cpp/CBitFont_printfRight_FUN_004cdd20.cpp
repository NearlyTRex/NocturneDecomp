// Name: engine_font.cpp_CBitFont_printfRight_FUN_004cdd20
// Address: 004cdd20
// Address Range: [[004cdd20, 004cdd63]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_printfRight_FUN_004cdd20(CBitFont * font_ptr, int x, int y, int color, char * format, ...)
// Function calls:
//   engine_font.cpp_CBitFont_printfRight_FUN_004cdd70

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_printfRight_FUN_004cdd20
          (CBitFont *font_ptr,int x,int y,int color,char *format,...)

{
  BADSPACEBASE *in_ESP;
  undefined4 in_stack_00000018;
  undefined1 *local_14;
  
  local_14 = &stack0x0000001c;
  engine_font_cpp_CBitFont_printfRight_FUN_004cdd70
            (font_ptr,x,y,color,format,in_stack_00000018,&local_14);
  return;
}


// Assembly code:
// 004cdd20: PUSH EBX
//   Label: engine_font.cpp_CBitFont_printfRight_FUN_004cdd20
// 004cdd21: PUSH ESI
// 004cdd22: PUSH EDI
// 004cdd23: PUSH EBP
// 004cdd24: SUB ESP,0x4
// 004cdd27: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[0x1c] (DATA)
// 004cdd2b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004cdd2e: MOV EAX,ESP
// 004cdd30: PUSH EAX
// 004cdd31: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x18] (READ)
// 004cdd35: PUSH EDX
// 004cdd36: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x14] (READ)
// 004cdd3a: PUSH ECX
// 004cdd3b: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 004cdd3f: PUSH EBX
// 004cdd40: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 004cdd44: PUSH ESI
// 004cdd45: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 004cdd49: PUSH EDI
// 004cdd4a: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 004cdd4e: PUSH EBP
// 004cdd4f: CALL engine_font.cpp_CBitFont_printfRight_FUN_004cdd70
//   XREF to: 004cdd70 (UNCONDITIONAL_CALL)
// 004cdd54: ADD ESP,0x1c
// 004cdd57: XOR EDX,EDX
// 004cdd59: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 004cdd5c: ADD ESP,0x4
// 004cdd5f: POP EBP
// 004cdd60: POP EDI
// 004cdd61: POP ESI
// 004cdd62: POP EBX
// 004cdd63: RET
