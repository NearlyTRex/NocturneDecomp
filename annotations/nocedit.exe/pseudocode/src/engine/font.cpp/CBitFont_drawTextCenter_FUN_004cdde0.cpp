// Name: engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0
// Address: 004cdde0
// Address Range: [[004cdde0, 004cde1f]]
// Convention: __cdecl
// Signature: int engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0(CBitFont * this_ptr, int center_x, int y_pos, int color_mode, int color_value, char * text_string)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 (00489120) at 0048924e [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextCenterF_FUN_004cde70 (004cde70) at 004cdec2 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 (0049e790) at 0049e82a [UNCONDITIONAL_CALL]
// Function calls:
//   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80

#include "nocturne.h"

int __cdecl
engine_font_cpp_CBitFont_drawTextCenter_FUN_004cdde0
          (CBitFont *this_ptr,int center_x,int y_pos,int color_mode,int color_value,
          char *text_string)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(this_ptr,text_string);
  iVar1 = engine_font_cpp_CBitFont_drawTextRight_FUN_004cdbf0
                    (this_ptr,(char *)(y_pos - iVar1 / 2),color_mode,color_value,(int)text_string,
                     unaff_ESI);
  return iVar1;
}


// Assembly code:
// 004cdde0: PUSH EBX
//   Label: engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0
// 004cdde1: PUSH ESI
// 004cdde2: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x18] (READ)
// 004cdde6: PUSH EAX
// 004cdde7: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 004cddeb: PUSH EDX
// 004cddec: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004cddf0: PUSH ECX
// 004cddf1: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004cddf5: PUSH EBX
// 004cddf6: PUSH EAX
// 004cddf7: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004cddfb: PUSH ESI
// 004cddfc: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 004cde01: MOV EDX,EAX
// 004cde03: SAR EDX,0x1f
// 004cde06: SUB EAX,EDX
// 004cde08: SAR EAX,0x1
// 004cde0a: ADD ESP,0x8
// 004cde0d: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004cde11: SUB EDX,EAX
// 004cde13: PUSH EDX
// 004cde14: PUSH ESI
// 004cde15: CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
//   XREF to: 004cdbf0 (UNCONDITIONAL_CALL)
// 004cde1a: ADD ESP,0x18
// 004cde1d: POP ESI
// 004cde1e: POP EBX
// 004cde1f: RET
