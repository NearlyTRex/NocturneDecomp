// Name: core_cloth.cpp_FUN_0043c6e0
// Address: 0043c6e0
// Address Range: [[0043c6e0, 0043c813]]
// Convention: unknown
// Signature: void core_cloth_cpp_FUN_0043c6e0(void)

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_FUN_0043c6e0(uint param_1) */

void core_cloth_cpp_FUN_0043c6e0(void)

{
  SRenderVertex *pSVar1;
  int y;
  int iVar2;
  int x;
  int y_00;
  int x_00;
  int in_stack_00000004;
  
  pSVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  if ((int)(pSVar1[in_stack_00000004].projected_vertex.screen_x & -0x80000000) == 0) {
    y = pSVar1[in_stack_00000004].projected_vertex.screen_y >> 0x10;
    x = pSVar1[in_stack_00000004].projected_vertex.screen_x >> 0x10;
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
