// Name: engine_3d.c_setActiveRenderColor_FUN_00404540
// Address: 00404540
// Address Range: [[00404540, 0040456e]]
// Convention: __cdecl
// Signature: void engine_3d.c_setActiveRenderColor_FUN_00404540(void)
// Cross-references:
//   engine_3d.c_drawLineStrip2D_FUN_00404570 (00404570) at 00404577 [UNCONDITIONAL_CALL]
//   engine_3d.c_drawLineStrip3D_FUN_00404600 (00404600) at 00404607 [UNCONDITIONAL_CALL]
//   shape_design.c_renderPolygonWireframe_FUN_0045d300 (0045d300) at 0045d32c [UNCONDITIONAL_CALL]
// Globals:
//   int[16] g_ColorLookupTable
//   int g_CurrentPolygonColor
//   int g_ActiveRenderColor

#include "nocturne.h"

void __cdecl engine_3d_c_setActiveRenderColor_FUN_00404540(void)

{
  if (-1 < g_CurrentPolygonColor) {
    g_ActiveRenderColor = g_ColorLookupTable[g_CurrentPolygonColor];
    return;
  }
  g_ActiveRenderColor = -g_CurrentPolygonColor;
  return;
}


// Assembly code:
// 00404540: MOV EDX,dword ptr [0x00772a5c]
//   Label: engine_3d.c_setActiveRenderColor_FUN_00404540
//   XREF to: 00772a5c (READ)
// 00404546: TEST EDX,EDX
// 00404548: JL 0x0040455e
//   XREF to: 0040455e (CONDITIONAL_JUMP)
// 0040454a: MOV ECX,dword ptr [EDX*0x4 + 0x66e094]
//   XREF to: 0066e094 (DATA)
// 00404551: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 00404557: MOV dword ptr [0x00772a5c],EDX
//   XREF to: 00772a5c (WRITE)
// 0040455d: RET
// 0040455e: MOV ECX,EDX
//   Label: LAB_0040455e
// 00404560: NEG ECX
// 00404562: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 00404568: MOV dword ptr [0x00772a5c],EDX
//   XREF to: 00772a5c (WRITE)
// 0040456e: RET
