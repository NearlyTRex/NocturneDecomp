// Name: engine_font.cpp_CBitFont_printfCenterInClip_FUN_004ce050
// Address: 004ce050
// Address Range: [[004ce050, 004ce08e]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_printfCenterInClip_FUN_004ce050(CBitFont * this_ptr, int x, int y, int color, char * format, ...)
// Function calls:
//   engine_font.cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090

#include "nocturne.h"

void __cdecl
engine_font_cpp_CBitFont_printfCenterInClip_FUN_004ce050
          (CBitFont *this_ptr,int x,int y,int color,char *format,...)

{
  BADSPACEBASE *in_ESP;
  va_list_t local_14;
  
  local_14 = &stack0x00000018;
  engine_font_cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090(this_ptr,x,y,color,format,&local_14);
  return;
}


// Assembly code:
// 004ce050: PUSH EBX
//   Label: engine_font.cpp_CBitFont_printfCenterInClip_FUN_004ce050
// 004ce051: PUSH ESI
// 004ce052: PUSH EDI
// 004ce053: PUSH EBP
// 004ce054: SUB ESP,0x4
// 004ce057: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[0x18] (DATA)
// 004ce05b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004ce05e: MOV EAX,ESP
// 004ce060: PUSH EAX
// 004ce061: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 004ce065: PUSH EDX
// 004ce066: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 004ce06a: PUSH ECX
// 004ce06b: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 004ce06f: PUSH EBX
// 004ce070: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 004ce074: PUSH ESI
// 004ce075: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 004ce079: PUSH EDI
// 004ce07a: XOR EBP,EBP
// 004ce07c: CALL engine_font.cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090
//   XREF to: 004ce090 (UNCONDITIONAL_CALL)
// 004ce081: ADD ESP,0x18
// 004ce084: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x14] (DATA)
// 004ce087: ADD ESP,0x4
// 004ce08a: POP EBP
// 004ce08b: POP EDI
// 004ce08c: POP ESI
// 004ce08d: POP EBX
// 004ce08e: RET
