// Name: core_morph.cpp_drawVertexMarker_FUN_0052bb80
// Address: 0052bb80
// Address Range: [[0052bb80, 0052bcaa]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_drawVertexMarker_FUN_0052bb80(SProjectedVertex *vertex,int radius)

#include "nocturne.h"

void __cdecl core_morph_cpp_drawVertexMarker_FUN_0052bb80(SProjectedVertex *vertex,int radius)

{
  int y;
  int iVar1;
  int x;
  int y_00;
  int x_00;
  
  if ((int)(vertex->screen_x & -0x80000000) == 0) {
    y = vertex->screen_y >> 0x10;
    x = vertex->screen_x >> 0x10;
    if ((((-1 < x) && (x < g_WindowWidth)) && (-1 < y)) && (y < g_WindowHeight)) {
      engine_2d_c_plotPixel_FUN_00401140(x,y);
    }
    if (0 < radius) {
      iVar1 = y + radius;
      y_00 = y + 1;
      x_00 = x;
      do {
        y = y + -1;
        x_00 = x_00 + -1;
        x = x + 1;
        if (((-1 < x_00) && (x_00 < g_WindowWidth)) && ((-1 < y && (y < g_WindowHeight)))) {
          engine_2d_c_plotPixel_FUN_00401140(x_00,y);
        }
        if (((-1 < x_00) && (x_00 < g_WindowWidth)) && ((-1 < y_00 && (y_00 < g_WindowHeight)))) {
          engine_2d_c_plotPixel_FUN_00401140(x_00,y_00);
        }
        if ((((-1 < x) && (x < g_WindowWidth)) && (-1 < y)) && (y < g_WindowHeight)) {
          engine_2d_c_plotPixel_FUN_00401140(x,y);
        }
        if (((-1 < x) && (x < g_WindowWidth)) && ((-1 < y_00 && (y_00 < g_WindowHeight)))) {
          engine_2d_c_plotPixel_FUN_00401140(x,y_00);
        }
        y_00 = y_00 + 1;
      } while (y_00 <= iVar1);
    }
  }
  return;
}
