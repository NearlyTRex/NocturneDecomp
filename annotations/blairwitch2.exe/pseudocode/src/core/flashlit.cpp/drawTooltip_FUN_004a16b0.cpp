// Name: core_flashlit.cpp_drawTooltip_FUN_004a16b0
// Address: 004a16b0
// Address Range: [[004a16b0, 004a172f]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_drawTooltip_FUN_004a16b0(void)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_drawTooltip_FUN_004a16b0(void)

{
  if (-1 < g_INT_00616040) {
    if (g_INT_01caf568 != 0) {
      engine_2d_c_fillRectColor_FUN_004031c0
                (g_INT_00616040,g_INT_01caf48c,g_INT_01caf490 + -1,g_INT_01caf494 + -1,0);
      engine_font_cpp_CBitFont_drawText_FUN_004a8df0
                (g_CBitFont_PTR_01511cbc,&g_CHAR_01caf4a0,g_INT_01caf498,g_INT_01caf49c,0xff,-1);
      return;
    }
    g_INT_01caf488 = g_INT_01caf568;
    g_CHAR_01caf4a0 = '\0';
    g_INT_00616040 = -1;
  }
  return;
}
