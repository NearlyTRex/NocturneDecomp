// Name: engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0
// Address: 004cdff0
// Address Range: [[004cdff0, 004ce040]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0(CBitFont * this_ptr, int y_pos, int color_mode, int color_value, char * text_string)
// Cross-references:
//   engine_font.cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090 (004ce090) at 004ce0da [UNCONDITIONAL_CALL]
// Globals:
//   int g_ClipLeft
//   int g_ClipRight
// Function calls:
//   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0
          (CBitFont *this_ptr,int y_pos,int color_mode,int color_value,char *text_string)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = g_ClipLeft + g_ClipRight;
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr,text_string);
  iVar1 = engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0
                    (this_ptr,(char *)(((iVar2 + 1) - iVar1) / 2),color_mode,color_value,
                     (int)text_string,unaff_EBP);
  return iVar1;
}


// Assembly code:
// 004cdff0: PUSH EBX
//   Label: engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0
// 004cdff1: PUSH ESI
// 004cdff2: PUSH EDI
// 004cdff3: PUSH EBP
// 004cdff4: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004cdff8: PUSH EDX
// 004cdff9: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 004cdffd: PUSH ECX
// 004cdffe: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004ce002: PUSH EBX
// 004ce003: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004ce007: PUSH ESI
// 004ce008: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004ce00c: PUSH EDX
// 004ce00d: MOV EDI,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004ce013: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004ce019: PUSH EBP
// 004ce01a: ADD EBX,EDI
// 004ce01c: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 004ce021: LEA EDX,[EBX + 0x1]
// 004ce024: SUB EDX,EAX
// 004ce026: MOV EAX,EDX
// 004ce028: SAR EDX,0x1f
// 004ce02b: SUB EAX,EDX
// 004ce02d: SAR EAX,0x1
// 004ce02f: ADD ESP,0x8
// 004ce032: PUSH EAX
// 004ce033: PUSH EBP
// 004ce034: CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
//   XREF to: 004cdbf0 (UNCONDITIONAL_CALL)
// 004ce039: ADD ESP,0x18
// 004ce03c: POP EBP
// 004ce03d: POP EDI
// 004ce03e: POP ESI
// 004ce03f: POP EBX
// 004ce040: RET
