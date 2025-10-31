// Name: engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
// Address: 004cdbf0
// Address Range: [[004cdbf0, 004cdc1e]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, int color_mode, int color_value)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 (00489120) at 004891eb [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005645d0 (005645d0) at 00564791 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0 (004cdee0) at 004cdf1f [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004cdff0 (004cdff0) at 004ce034 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0 (004cdde0) at 004cde15 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextF_FUN_004cdc70 (004cdc70) at 004cdcc2 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0 (004cdce0) at 004cdd0f [UNCONDITIONAL_CALL]
// Function calls:
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0
          (CBitFont *this_ptr,char *text_string,int x_pos,int y_pos,int color_mode,int color_value)

{
  int iVar1;
  
  iVar1 = engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (this_ptr,(char *)color_value,(int)text_string,x_pos,y_pos,color_mode);
  return iVar1;
}


// Assembly code:
// 004cdbf0: PUSH EBX
//   Label: engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
// 004cdbf1: PUSH ESI
// 004cdbf2: PUSH EDI
// 004cdbf3: PUSH EBP
// 004cdbf4: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004cdbf8: PUSH EDX
// 004cdbf9: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 004cdbfd: PUSH ECX
// 004cdbfe: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004cdc02: PUSH EBX
// 004cdc03: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004cdc07: PUSH ESI
// 004cdc08: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x18] (READ)
// 004cdc0c: PUSH EDI
// 004cdc0d: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 004cdc11: PUSH EBP
// 004cdc12: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 004cdc17: ADD ESP,0x18
// 004cdc1a: POP EBP
// 004cdc1b: POP EDI
// 004cdc1c: POP ESI
// 004cdc1d: POP EBX
// 004cdc1e: RET
