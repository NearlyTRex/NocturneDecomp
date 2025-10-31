// Name: engine_font.cpp_getDefaultTextColor_FUN_004ce220
// Address: 004ce220
// Address Range: [[004ce220, 004ce225]]
// Convention: __cdecl
// Signature: int engine_font.cpp_getDefaultTextColor_FUN_004ce220(void)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 (00489120) at 004891b4 [UNCONDITIONAL_CALL]
//   engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440 (005f2440) at 005f2669 [UNCONDITIONAL_CALL]
// Globals:
//   int g_DefaultTextColor

#include "nocturne.h"

int __cdecl engine_font_cpp_getDefaultTextColor_FUN_004ce220(void)

{
  return g_DefaultTextColor;
}


// Assembly code:
// 004ce220: MOV EAX,[0x02d7b424]
//   Label: engine_font.cpp_getDefaultTextColor_FUN_004ce220
//   XREF to: 02d7b424 (READ)
// 004ce225: RET
