// Name: engine_2d.c_drawTextColor_FUN_00402430
// Address: 00402430
// Address Range: [[00402430, 00402491]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 (00489120) at 00489339 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCenteredAtColor_FUN_004025f0 (004025f0) at 0040261b [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCenteredColor_FUN_004026c0 (004026c0) at 004026ef [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextColorFormatted_FUN_004024c0 (004024c0) at 00402511 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextColorWrapper_FUN_004024a0 (004024a0) at 004024b0 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextRightAlignedColor_FUN_00402530 (00402530) at 00402552 [UNCONDITIONAL_CALL]
//   shape_design.c_displayPalette_FUN_00461560 (00461560) at 004615fe [UNCONDITIONAL_CALL]
//   shape_design.c_findClosestPolygonToMouse_FUN_00466250 (00466250) at 004665f5 [UNCONDITIONAL_CALL]
//   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 (004648e0) at 00464b68 [UNCONDITIONAL_CALL]
//   shape_design.c_polygonToolModeManager_FUN_00464c90 (00464c90) at 004650bb [UNCONDITIONAL_CALL]
//   shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0 (0045c2f0) at 0045c4d2 [UNCONDITIONAL_CALL]
//   shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0 (0045bff0) at 0045c2ce [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f86a [UNCONDITIONAL_CALL]
// Globals:
//   int g_TextWrapEnabled = 0x1
//   int g_CurrentTextColor = 0xf8
//   int g_ClipRight
//   int g_ClipBottom
// Function calls:
//   engine_2d.c_drawTextMultilineColor_FUN_00401f40
//   engine_2d.c_drawTextWrappedColor_FUN_00401eb0

#include "nocturne.h"

void __cdecl engine_2d_c_drawTextColor_FUN_00402430(char *text,int x_pos,int y_pos)

{
  if (g_TextWrapEnabled != 0) {
    engine_2d_c_drawTextWrappedColor_FUN_00401eb0
              (text,x_pos,y_pos,g_ClipRight,g_ClipBottom,g_CurrentTextColor);
    return;
  }
  engine_2d_c_drawTextMultilineColor_FUN_00401f40(text,x_pos,y_pos,g_ClipRight,g_ClipBottom);
  return;
}


// Assembly code:
// 00402430: PUSH ESI
//   Label: engine_2d.c_drawTextColor_FUN_00402430
// 00402431: PUSH EDI
// 00402432: PUSH EBP
// 00402433: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00402437: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040243b: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0040243f: CMP dword ptr [0x0066df74],0x0
//   XREF to: 0066df74 (READ)
// 00402446: JZ 0x0040246e
//   XREF to: 0040246e (CONDITIONAL_JUMP)
// 00402448: PUSH EBX
// 00402449: MOV EBX,dword ptr [0x0066df78]
//   XREF to: 0066df78 (READ)
// 0040244f: PUSH EBX
// 00402450: MOV ESI,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00402456: PUSH ESI
// 00402457: MOV EDI,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 0040245d: PUSH EDI
// 0040245e: PUSH ECX
// 0040245f: PUSH EAX
// 00402460: PUSH EDX
// 00402461: CALL engine_2d.c_drawTextWrappedColor_FUN_00401eb0
//   XREF to: 00401eb0 (UNCONDITIONAL_CALL)
// 00402466: ADD ESP,0x18
// 00402469: POP EBX
// 0040246a: POP EBP
// 0040246b: POP EDI
// 0040246c: POP ESI
// 0040246d: RET
// 0040246e: MOV ESI,dword ptr [0x0066df78]
//   Label: LAB_0040246e
//   XREF to: 0066df78 (READ)
// 00402474: PUSH ESI
// 00402475: MOV EDI,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 0040247b: PUSH EDI
// 0040247c: MOV EBP,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 00402482: PUSH EBP
// 00402483: PUSH ECX
// 00402484: PUSH EAX
// 00402485: PUSH EDX
// 00402486: CALL engine_2d.c_drawTextMultilineColor_FUN_00401f40
//   XREF to: 00401f40 (UNCONDITIONAL_CALL)
// 0040248b: ADD ESP,0x18
// 0040248e: POP EBP
// 0040248f: POP EDI
// 00402490: POP ESI
// 00402491: RET
