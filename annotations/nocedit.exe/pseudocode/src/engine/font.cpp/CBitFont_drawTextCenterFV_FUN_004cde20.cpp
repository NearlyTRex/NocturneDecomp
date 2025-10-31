// Name: engine_font.cpp_CBitFont_drawTextCenterFV_FUN_004cde20
// Address: 004cde20
// Address Range: [[004cde20, 004cde63]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextCenterFV_FUN_004cde20(CBitFont * this_ptr, int x_pos, int y_pos, int color_mode, int color_value, char * format_string, ...)
// Function calls:
//   engine_font.cpp_CBitFont_drawTextCenterF_FUN_004cde70

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextCenterFV_FUN_004cde20
          (CBitFont *this_ptr,int x_pos,int y_pos,int color_mode,int color_value,char *format_string
          ,...)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  va_list_t local_14;
  
  local_14 = &stack0x0000001c;
  iVar1 = engine_font_cpp_CBitFont_drawTextCenterF_FUN_004cde70
                    (this_ptr,x_pos,y_pos,color_mode,color_value,format_string,&local_14);
  return iVar1;
}


// Assembly code:
// 004cde20: PUSH EBX
//   Label: engine_font.cpp_CBitFont_drawTextCenterFV_FUN_004cde20
// 004cde21: PUSH ESI
// 004cde22: PUSH EDI
// 004cde23: PUSH EBP
// 004cde24: SUB ESP,0x4
// 004cde27: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[0x1c] (DATA)
// 004cde2b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004cde2e: MOV EAX,ESP
// 004cde30: PUSH EAX
// 004cde31: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x18] (READ)
// 004cde35: PUSH EDX
// 004cde36: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x14] (READ)
// 004cde3a: PUSH ECX
// 004cde3b: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 004cde3f: PUSH EBX
// 004cde40: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 004cde44: PUSH ESI
// 004cde45: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 004cde49: PUSH EDI
// 004cde4a: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 004cde4e: PUSH EBP
// 004cde4f: CALL engine_font.cpp_CBitFont_drawTextCenterF_FUN_004cde70
//   XREF to: 004cde70 (UNCONDITIONAL_CALL)
// 004cde54: ADD ESP,0x1c
// 004cde57: XOR EDX,EDX
// 004cde59: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 004cde5c: ADD ESP,0x4
// 004cde5f: POP EBP
// 004cde60: POP EDI
// 004cde61: POP ESI
// 004cde62: POP EBX
// 004cde63: RET
