// Name: engine_2d.c_setTextColor_FUN_00402840
// Address: 00402840
// Address Range: [[00402840, 00402849]]
// Convention: __cdecl
// Signature: void engine_2d.c_setTextColor_FUN_00402840(int color)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 (00489120) at 00489346 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f2d9 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CurrentTextColor = 0xf8

#include "nocturne.h"

void __cdecl engine_2d_c_setTextColor_FUN_00402840(int color)

{
  g_CurrentTextColor = color;
  return;
}


// Assembly code:
// 00402840: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_2d.c_setTextColor_FUN_00402840
//   XREF to: Stack[0x4] (READ)
// 00402844: MOV [0x0066df78],EAX
//   XREF to: 0066df78 (WRITE)
// 00402849: RET
