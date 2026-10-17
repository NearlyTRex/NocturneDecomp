// Name: shape_edittool.cpp_draw3DBorder_FUN_00476260
// Address: 00476260
// Address Range: [[00476260, 00476302]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_draw3DBorder_FUN_00476260(int left,int top,int right,int bottom,int pressed)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_draw3DBorder_FUN_00476260(int left,int top,int right,int bottom,int pressed)

{
  if (pressed == 0) {
    g_ActiveRenderColor = 0xff;
  }
  else {
    g_ActiveRenderColor = 0xf8;
  }
  engine_2d_c_drawHLine_FUN_00403bd0(left,top,right + -1);
  engine_2d_c_drawVLine_FUN_00403ce0(left,top,bottom + -1);
  if (pressed == 0) {
    g_ActiveRenderColor = 0xf8;
  }
  else {
    g_ActiveRenderColor = 0xff;
  }
  engine_2d_c_drawHLine_FUN_00403bd0(left,bottom + -1,right + -1);
  engine_2d_c_drawVLine_FUN_00403ce0(right + -1,top,bottom + -1);
  engine_2d_c_fillRectColor_FUN_00403e60(left + 1,top + 1,right + -2,bottom + -2,7);
  return;
}
