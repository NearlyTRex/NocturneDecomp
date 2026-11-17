// Name: core_flashlit.cpp_drawTooltip_FUN_004a7bb0
// Address: 004a7bb0
// Address Range: [[004a7bb0, 004a7c2f]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_drawTooltip_FUN_004a7bb0(void)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_drawTooltip_FUN_004a7bb0(void)

{
  if (-1 < g_INT_005fe3a8) {
    if (g_INT_01d1a058 != 0) {
      engine_2d_c_fillRectColor_FUN_004031c0
                (g_INT_005fe3a8,g_INT_01d19f7c,g_INT_01d19f80 + -1,g_INT_01d19f84 + -1,0);
      engine_font_cpp_CBitFont_drawText_FUN_004b0a20
                (g_TinyFont,&g_CHAR_01d19f90,g_INT_01d19f88,g_INT_01d19f8c,0xff,-1);
      return;
    }
    g_INT_01d19f78 = g_INT_01d1a058;
    g_CHAR_01d19f90 = '\0';
    g_INT_005fe3a8 = -1;
  }
  return;
}
