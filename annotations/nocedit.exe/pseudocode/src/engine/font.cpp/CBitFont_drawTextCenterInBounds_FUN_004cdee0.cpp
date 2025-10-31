// Name: engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
// Address: 004cdee0
// Address Range: [[004cdee0, 004cdf2a]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0(CBitFont * this_ptr, int left_x, int right_x, int y_pos, int color_mode, int color_value, char * text_string)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 (00489120) at 00489312 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_displayActStats_FUN_004e3800 (004e3800) at 004e3b37 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_finishAct_FUN_004e3b90 (004e3b90) at 004e3c2a [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004daa9a [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e4217 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80 (004cdf80) at 004cdfda [UNCONDITIONAL_CALL]
// Function calls:
//   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
          (CBitFont *this_ptr,int left_x,int right_x,int y_pos,int color_mode,int color_value,
          char *text_string)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr,text_string);
  iVar1 = engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0
                    (this_ptr,(char *)(((left_x + right_x + 1) - iVar1) / 2),color_mode,color_value,
                     (int)text_string,unaff_EDI);
  return iVar1;
}


// Assembly code:
// 004cdee0: PUSH EBX
//   Label: engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
// 004cdee1: PUSH ESI
// 004cdee2: PUSH EDI
// 004cdee3: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x1c] (READ)
// 004cdee7: PUSH EAX
// 004cdee8: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004cdeec: PUSH EDX
// 004cdeed: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 004cdef1: PUSH ECX
// 004cdef2: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 004cdef6: PUSH EBX
// 004cdef7: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 004cdefb: PUSH EAX
// 004cdefc: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004cdf00: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 004cdf04: PUSH EDI
// 004cdf05: ADD EBX,ESI
// 004cdf07: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 004cdf0c: LEA EDX,[EBX + 0x1]
// 004cdf0f: SUB EDX,EAX
// 004cdf11: MOV EAX,EDX
// 004cdf13: SAR EDX,0x1f
// 004cdf16: SUB EAX,EDX
// 004cdf18: SAR EAX,0x1
// 004cdf1a: ADD ESP,0x8
// 004cdf1d: PUSH EAX
// 004cdf1e: PUSH EDI
// 004cdf1f: CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
//   XREF to: 004cdbf0 (UNCONDITIONAL_CALL)
// 004cdf24: ADD ESP,0x18
// 004cdf27: POP EDI
// 004cdf28: POP ESI
// 004cdf29: POP EBX
// 004cdf2a: RET
