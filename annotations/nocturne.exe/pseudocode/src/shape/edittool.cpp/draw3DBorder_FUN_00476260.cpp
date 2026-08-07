// Name: shape_edittool.cpp_draw3DBorder_FUN_00476260
// Address: 00476260
// Address Range: [[00476260, 00476302]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DBorder_FUN_00476260(int left,int top,int width,int height,int border_style_flag)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_draw3DBorder_FUN_00476260(int left,int top,int width,int height,int border_style_flag)

{
  if (border_style_flag == 0) {
    g_ActiveRenderColor = 0xff;
  }
  else {
    g_ActiveRenderColor = 0xf8;
  }
  engine_2d_c_drawHLine_FUN_00403bd0(left,top,width + -1);
  engine_2d_c_drawVLine_FUN_00403ce0(left,top,height + -1);
  if (border_style_flag == 0) {
    g_ActiveRenderColor = 0xf8;
  }
  else {
    g_ActiveRenderColor = 0xff;
  }
  engine_2d_c_drawHLine_FUN_00403bd0(left,height + -1,width + -1);
  engine_2d_c_drawVLine_FUN_00403ce0(width + -1,top,height + -1);
  engine_2d_c_fillRectColor_FUN_00403e60(left + 1,top + 1,width + -2,height + -2,7);
  return;
}
