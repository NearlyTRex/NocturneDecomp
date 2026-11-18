// Name: shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_00481ab0
// Address: 00481ab0
// Address Range: [[00481ab0, 00481d6a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_00481ab0(CEditorTools *this_ptr,int start_x,int start_y,int length)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_00481ab0(CEditorTools *this_ptr,int start_x,int start_y,int length)

{
  int y;
  int x;
  int x_00;
  int y_00;
  
  if (((((-1 < start_x) && (-1 < start_y)) && (start_x < g_INT_005fba18)) &&
      ((start_y < g_INT_005fba1c && (g_INT_01c6b5a8 <= start_x)))) &&
     ((start_x < g_INT_01c6b5b0 && ((g_INT_01c6b5ac <= start_y && (start_y < g_INT_01c6b5b4)))))) {
    if (g_INT_01c5baec == 0) {
      engine_2d_c_plotPixel_FUN_00401130(start_x,start_y);
    }
    else {
      engine_mini3d_cpp_drawPixel_FUN_004f36e0(start_x,start_y);
    }
  }
  x = length + start_x;
  y_00 = start_y + -length;
  x_00 = -length + start_x;
  y = length + start_y;
  while (start_y < y) {
    if ((((-1 < x_00) && (-1 < y_00)) && (x_00 < g_INT_005fba18)) &&
       (((y_00 < g_INT_005fba1c && (g_INT_01c6b5a8 <= x_00)) &&
        ((x_00 < g_INT_01c6b5b0 && ((g_INT_01c6b5ac <= y_00 && (y_00 < g_INT_01c6b5b4)))))))) {
      if (g_INT_01c5baec == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x_00,y_00);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f36e0(x_00,y_00);
      }
    }
    if (((((-1 < x) && (-1 < y_00)) && (x < g_INT_005fba18)) &&
        ((y_00 < g_INT_005fba1c && (g_INT_01c6b5a8 <= x)))) &&
       ((x < g_INT_01c6b5b0 && ((g_INT_01c6b5ac <= y_00 && (y_00 < g_INT_01c6b5b4)))))) {
      if (g_INT_01c5baec == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x,y_00);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f36e0(x,y_00);
      }
    }
    if ((((((-1 < x_00) && (-1 < y)) && (x_00 < g_INT_005fba18)) &&
         ((y < g_INT_005fba1c && (g_INT_01c6b5a8 <= x_00)))) && (x_00 < g_INT_01c6b5b0)) &&
       ((g_INT_01c6b5ac <= y && (y < g_INT_01c6b5b4)))) {
      if (g_INT_01c5baec == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x_00,y);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f36e0(x_00,y);
      }
    }
    if ((((x < 0) || (y < 0)) || (g_INT_005fba18 <= x)) ||
       (((g_INT_005fba1c <= y || (x < g_INT_01c6b5a8)) ||
        ((g_INT_01c6b5b0 <= x || ((y < g_INT_01c6b5ac || (g_INT_01c6b5b4 <= y)))))))) {
      x_00 = x_00 + 1;
      x = x + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
    else if (g_INT_01c5baec == 0) {
      engine_2d_c_plotPixel_FUN_00401130(x,y);
      x_00 = x_00 + 1;
      x = x + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
    else {
      engine_mini3d_cpp_drawPixel_FUN_004f36e0(x,y);
      x_00 = x_00 + 1;
      x = x + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
  }
  return;
}
