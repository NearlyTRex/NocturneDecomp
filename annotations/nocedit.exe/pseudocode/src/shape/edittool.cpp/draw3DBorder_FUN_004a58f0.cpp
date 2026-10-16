// Name: shape_edittool.cpp_draw3DBorder_FUN_004a58f0
// Address: 004a58f0
// Address Range: [[004a58f0, 004a599e]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DBorder_FUN_004a58f0(int left,int top,int right,int bottom,int pressed)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_draw3DBorder_FUN_004a58f0(int left,int top,int right,int bottom,int pressed)

{
  g_ActiveRenderColor = g_HighlightColor;
  if (pressed != 0) {
    g_ActiveRenderColor = g_BorderBackgroundColor;
  }
  engine_2d_c_drawHLine_FUN_00402ee0(left,top,right + -1);
  engine_2d_c_drawVLine_FUN_00402ff0(left,top,bottom + -1);
  g_ActiveRenderColor = g_BorderBackgroundColor;
  if (pressed != 0) {
    g_ActiveRenderColor = g_HighlightColor;
  }
  engine_2d_c_drawHLine_FUN_00402ee0(left,bottom + -1,right + -1);
  engine_2d_c_drawVLine_FUN_00402ff0(right + -1,top,bottom + -1);
  engine_2d_c_fillRectColor_FUN_00403170(left + 1,top + 1,right + -2,bottom + -2,g_ButtonFaceColor);
  return;
}
