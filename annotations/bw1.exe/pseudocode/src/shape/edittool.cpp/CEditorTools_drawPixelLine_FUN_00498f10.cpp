// Name: shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_00498f10
// Address: 00498f10
// Address Range: [[00498f10, 004991ca]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_00498f10(CEditorTools *this_ptr,int start_x,int start_y,int length)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_00498f10(CEditorTools *this_ptr,int start_x,int start_y,int length)

{
  int y;
  int x;
  int x_00;
  int y_00;
  
  if (((((-1 < start_x) && (-1 < start_y)) && (start_x < g_INT_0061b498)) &&
      ((start_y < g_INT_0061b49c && (g_INT_01c4f008 <= start_x)))) &&
     ((start_x < g_ClipRight && ((g_INT_01c4f00c <= start_y && (start_y < g_INT_01c4f014)))))) {
    if (g_INT_01c3f544 == 0) {
      engine_2d_c_plotPixel_FUN_00401130(start_x,start_y);
    }
    else {
      engine_mini3d_cpp_drawPixel_FUN_00517f10(start_x,start_y);
    }
  }
  x = length + start_x;
  y_00 = start_y + -length;
  x_00 = -length + start_x;
  y = length + start_y;
  while (start_y < y) {
    if ((((-1 < x_00) && (-1 < y_00)) && (x_00 < g_INT_0061b498)) &&
       (((y_00 < g_INT_0061b49c && (g_INT_01c4f008 <= x_00)) &&
        ((x_00 < g_ClipRight && ((g_INT_01c4f00c <= y_00 && (y_00 < g_INT_01c4f014)))))))) {
      if (g_INT_01c3f544 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x_00,y_00);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_00517f10(x_00,y_00);
      }
    }
    if (((((-1 < x) && (-1 < y_00)) && (x < g_INT_0061b498)) &&
        ((y_00 < g_INT_0061b49c && (g_INT_01c4f008 <= x)))) &&
       ((x < g_ClipRight && ((g_INT_01c4f00c <= y_00 && (y_00 < g_INT_01c4f014)))))) {
      if (g_INT_01c3f544 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x,y_00);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_00517f10(x,y_00);
      }
    }
    if ((((((-1 < x_00) && (-1 < y)) && (x_00 < g_INT_0061b498)) &&
         ((y < g_INT_0061b49c && (g_INT_01c4f008 <= x_00)))) && (x_00 < g_ClipRight)) &&
       ((g_INT_01c4f00c <= y && (y < g_INT_01c4f014)))) {
      if (g_INT_01c3f544 == 0) {
        engine_2d_c_plotPixel_FUN_00401130(x_00,y);
      }
      else {
        engine_mini3d_cpp_drawPixel_FUN_00517f10(x_00,y);
      }
    }
    if ((((x < 0) || (y < 0)) || (g_INT_0061b498 <= x)) ||
       (((g_INT_0061b49c <= y || (x < g_INT_01c4f008)) ||
        ((g_ClipRight <= x || ((y < g_INT_01c4f00c || (g_INT_01c4f014 <= y)))))))) {
      x_00 = x_00 + 1;
      x = x + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
    else if (g_INT_01c3f544 == 0) {
      engine_2d_c_plotPixel_FUN_00401130(x,y);
      x_00 = x_00 + 1;
      x = x + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
    else {
      engine_mini3d_cpp_drawPixel_FUN_00517f10(x,y);
      x_00 = x_00 + 1;
      x = x + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
  }
  return;
}
