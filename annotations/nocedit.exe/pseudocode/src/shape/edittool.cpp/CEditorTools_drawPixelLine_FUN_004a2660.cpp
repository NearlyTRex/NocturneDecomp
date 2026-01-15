// Name: shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004a2660
// Address: 004a2660
// Address Range: [[004a2660, 004a2894]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004a2660(CEditorTools * this_ptr, int start_x, int start_y, int length)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004a2660
          (CEditorTools *this_ptr,int start_x,int start_y,int length)

{
  int y;
  int x;
  int x_00;
  int y_00;
  
  if (((((-1 < start_x) && (-1 < start_y)) && (start_x < g_WindowWidth)) &&
      ((start_y < g_WindowHeight && (g_ClipLeft <= start_x)))) &&
     ((start_x < g_ClipRight && ((g_ClipTop <= start_y && (start_y < g_ClipBottom)))))) {
    engine_2d_c_plotPixel_FUN_00401140(start_x,start_y);
  }
  y_00 = start_y + -length;
  x = -length + start_x;
  x_00 = length + start_x;
  y = length + start_y;
  while (start_y < y) {
    if ((((-1 < x) && (-1 < y_00)) && (x < g_WindowWidth)) &&
       (((y_00 < g_WindowHeight && (g_ClipLeft <= x)) &&
        ((x < g_ClipRight && ((g_ClipTop <= y_00 && (y_00 < g_ClipBottom)))))))) {
      engine_2d_c_plotPixel_FUN_00401140(x,y_00);
    }
    if (((((-1 < x_00) && (-1 < y_00)) && (x_00 < g_WindowWidth)) &&
        ((y_00 < g_WindowHeight && (g_ClipLeft <= x_00)))) &&
       ((x_00 < g_ClipRight && ((g_ClipTop <= y_00 && (y_00 < g_ClipBottom)))))) {
      engine_2d_c_plotPixel_FUN_00401140(x_00,y_00);
    }
    if ((((((-1 < x) && (-1 < y)) && (x < g_WindowWidth)) &&
         ((y < g_WindowHeight && (g_ClipLeft <= x)))) && (x < g_ClipRight)) &&
       ((g_ClipTop <= y && (y < g_ClipBottom)))) {
      engine_2d_c_plotPixel_FUN_00401140(x,y);
    }
    if ((((x_00 < 0) || (y < 0)) || (g_WindowWidth <= x_00)) ||
       (((g_WindowHeight <= y || (x_00 < g_ClipLeft)) ||
        ((g_ClipRight <= x_00 || ((y < g_ClipTop || (g_ClipBottom <= y)))))))) {
      x = x + 1;
      x_00 = x_00 + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
    else {
      engine_2d_c_plotPixel_FUN_00401140(x_00,y);
      x = x + 1;
      x_00 = x_00 + -1;
      y = y + -1;
      y_00 = y_00 + 1;
    }
  }
  return;
}
