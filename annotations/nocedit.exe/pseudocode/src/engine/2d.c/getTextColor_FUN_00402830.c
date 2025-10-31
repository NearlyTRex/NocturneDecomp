// Name: engine_2d.c_getTextColor_FUN_00402830
// Address: 00402830
// Address Range: [[00402830, 00402835]]
// Convention: __cdecl
// Signature: int engine_2d.c_getTextColor_FUN_00402830(void)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 (00489120) at 004893b4 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f2c3 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CurrentTextColor = 0xf8

#include "nocturne.h"

int __cdecl engine_2d_c_getTextColor_FUN_00402830(void)

{
  return g_CurrentTextColor;
}


// Assembly code:
// 00402830: MOV EAX,[0x0066df78]
//   Label: engine_2d.c_getTextColor_FUN_00402830
//   XREF to: 0066df78 (READ)
// 00402835: RET
