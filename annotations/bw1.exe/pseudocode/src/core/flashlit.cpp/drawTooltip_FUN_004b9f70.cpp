// Name: core_flashlit.cpp_drawTooltip_FUN_004b9f70
// Address: 004b9f70
// Address Range: [[004b9f70, 004b9fef]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_drawTooltip_FUN_004b9f70(void)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_drawTooltip_FUN_004b9f70(void)

{
  if (-1 < g_INT_0061d310) {
    if (g_INT_01cc8000 != 0) {
      engine_2d_c_fillRectColor_FUN_004031c0
                (g_INT_0061d310,g_INT_01cc7f20,g_INT_01cc7f24 + -1,g_INT_01cc7f28 + -1,0);
      engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
                (g_TinyFont,&g_CHAR_01cc7f38,g_INT_01cc7f2c,g_INT_01cc7f30,0xff,-1);
      return;
    }
    g_INT_01cc7f1c = g_INT_01cc8000;
    g_CHAR_01cc7f38 = '\0';
    g_INT_0061d310 = -1;
  }
  return;
}
