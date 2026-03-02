// Name: shape_edittool.cpp_draw3DBorder_FUN_004a58f0
// Address: 004a58f0
// Address Range: [[004a58f0, 004a599e]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DBorder_FUN_004a58f0(int left,int top,int width,int height,int border_style_flag)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_draw3DBorder_FUN_004a58f0(int left,int top,int width,int height,int border_style_flag)

{
  g_ActiveRenderColor = g_HighlightColor;
  if (border_style_flag != 0) {
    g_ActiveRenderColor = g_BorderBackgroundColor;
  }
  engine_2d_c_drawHLine_FUN_00402ee0(left,top,width + -1);
  engine_2d_c_drawVLine_FUN_00402ff0(left,top,height + -1);
  g_ActiveRenderColor = g_BorderBackgroundColor;
  if (border_style_flag != 0) {
    g_ActiveRenderColor = g_HighlightColor;
  }
  engine_2d_c_drawHLine_FUN_00402ee0(left,height + -1,width + -1);
  engine_2d_c_drawVLine_FUN_00402ff0(width + -1,top,height + -1);
  engine_2d_c_fillRectColor_FUN_00403170(left + 1,top + 1,width + -2,height + -2,g_ButtonFaceColor);
  return;
}
