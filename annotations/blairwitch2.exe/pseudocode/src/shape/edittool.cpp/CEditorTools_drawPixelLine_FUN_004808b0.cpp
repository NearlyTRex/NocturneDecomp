// Name: shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004808b0
// Address: 004808b0
// Address Range: [[004808b0, 00480b6a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004808b0(CEditorTools *this_ptr,int start_x,int start_y,int length)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004808b0(CEditorTools *this_ptr,int start_x,int start_y,int length)

{
  int y;
  int x;
  int x_00;
  int y_00;
  
  if (((((-1 < start_x) && (-1 < start_y)) && (start_x < g_INT_006141b8)) &&
      ((start_y < g_INT_006141bc && (g_INT_01c35e48 <= start_x)))) &&
     ((start_x < g_ClipRight && ((g_INT_01c35e4c <= start_y && (start_y < g_INT_01c35e54)))))) {
    if (g_INT_01c25f84 == 0) {
      engine_2d_c_plotPixel_FUN_00401130(start_x,start_y);
    }
    else {
      engine_mini3d_cpp_drawPixel_FUN_004f8fe0(start_x,start_y);
    }
  }
  x = length + start_x;
  y_00 = start_y + -length;
  x_00 = -length + start_x;
  y = length + start_y;
  while (start_y < y) {
    if ((((-1 < x_00) && (-1 < y_00)) && (x_00 < g_INT_006141b8)) &&
       (((y_00 < g_INT_006141bc && (g_INT_01c35e48 <= x_00)) &&
        ((x_00 < g_ClipRight && ((g_INT_01c35e4c <= y_00 && (y_00 < g_INT_01c35e54)))))))) {
      if (g_INT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x_00,y_00);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f8fe0(x_00,y_00);
      }
    }
    if (((((-1 < x) && (-1 < y_00)) && (x < g_INT_006141b8)) &&
        ((y_00 < g_INT_006141bc && (g_INT_01c35e48 <= x)))) &&
       ((x < g_ClipRight && ((g_INT_01c35e4c <= y_00 && (y_00 < g_INT_01c35e54)))))) {
      if (g_INT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x,y_00);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f8fe0(x,y_00);
      }
    }
    if ((((((-1 < x_00) && (-1 < y)) && (x_00 < g_INT_006141b8)) &&
         ((y < g_INT_006141bc && (g_INT_01c35e48 <= x_00)))) && (x_00 < g_ClipRight)) &&
       ((g_INT_01c35e4c <= y && (y < g_INT_01c35e54)))) {
      if (g_INT_01c25f84 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x_00,y);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_004f8fe0(x_00,y);
      }
    }
    if ((((x < 0) || (y < 0)) || (g_INT_006141b8 <= x)) ||
       (((g_INT_006141bc <= y || (x < g_INT_01c35e48)) ||
        ((g_ClipRight <= x || ((y < g_INT_01c35e4c || (g_INT_01c35e54 <= y)))))))) {
      x_00 = x_00 + 1;
      x = x + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
    else if (g_INT_01c25f84 == 0) {
      engine_2d_c_plotPixel_FUN_00401130(x,y);
      x_00 = x_00 + 1;
      x = x + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
    else {
      engine_mini3d_cpp_drawPixel_FUN_004f8fe0(x,y);
      x_00 = x_00 + 1;
      x = x + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
  }
  return;
}
