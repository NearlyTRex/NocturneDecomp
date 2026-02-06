// Name: core_cloth.cpp_drawVertexMarker_FUN_0043c6e0
// Address: 0043c6e0
// Address Range: [[0043c6e0, 0043c813]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_drawVertexMarker_FUN_0043c6e0(int vert_index)

#include "nocturne.h"

void __cdecl core_cloth_cpp_drawVertexMarker_FUN_0043c6e0(int vert_index)

{
  SRenderVertex *pSVar1;
  int y;
  int iVar2;
  int x;
  int y_00;
  int x_00;
  
  pSVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  if ((int)(pSVar1[vert_index].projected_vertex.screen_x & -0x80000000) == 0) {
    y = pSVar1[vert_index].projected_vertex.screen_y >> 0x10;
    x = pSVar1[vert_index].projected_vertex.screen_x >> 0x10;
    if ((((-1 < x) && (x < g_WindowWidth)) && (-1 < y)) && (y < g_WindowHeight)) {
      engine_2d_c_plotPixel_FUN_00401140(x,y);
    }
    iVar2 = y + 3;
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
    } while (y_00 != iVar2);
  }
  return;
}
