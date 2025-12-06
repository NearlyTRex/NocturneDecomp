// Name: shape_edittool.cpp_draw3DBorder_FUN_004a58f0
// Address: 004a58f0
// Address Range: [[004a58f0, 004a599e]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_draw3DBorder_FUN_004a58f0(int left, int top, int width, int height, int border_style_flag)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_draw3DBorder_FUN_004a58f0
          (int left,int top,int width,int height,int border_style_flag)

{
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  g_ActiveRenderColor = g_HighlightColor;
  if (border_style_flag != 0) {
    g_ActiveRenderColor = g_BackgroundColor2;
  }
  engine_2d_c_drawHLine_FUN_00402ee0(left,top,width + -1);
  engine_2d_c_drawVLine_FUN_00402ff0(left,top,border_style_flag + -1);
  g_ActiveRenderColor = g_BackgroundColor2;
  if (border_style_flag != 0) {
    g_ActiveRenderColor = g_HighlightColor;
  }
  engine_2d_c_drawHLine_FUN_00402ee0(left,in_stack_00000018 + -1,border_style_flag + -1);
  engine_2d_c_drawVLine_FUN_00402ff0(border_style_flag + -1,top,in_stack_00000018 + -1);
  engine_2d_c_fillRectColor_FUN_00403170
            (left + 1,top + 1,in_stack_0000001c + -2,in_stack_00000020 + -2,g_ButtonFaceColor);
  return;
}
