// Name: engine_font.cpp_setDefaultTextColor_FUN_004ce230
// Address: 004ce230
// Address Range: [[004ce230, 004ce239]]
// Convention: __cdecl
// Signature: void engine_font.cpp_setDefaultTextColor_FUN_004ce230(int text_color)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 (00489120) at 004891c4 [UNCONDITIONAL_CALL]
// Globals:
//   int g_DefaultTextColor

#include "nocturne.h"

void __cdecl engine_font_cpp_setDefaultTextColor_FUN_004ce230(int text_color)

{
  g_DefaultTextColor = text_color;
  return;
}


// Assembly code:
// 004ce230: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_font.cpp_setDefaultTextColor_FUN_004ce230
//   XREF to: Stack[0x4] (READ)
// 004ce234: MOV [0x02d7b424],EAX
//   XREF to: 02d7b424 (WRITE)
// 004ce239: RET
