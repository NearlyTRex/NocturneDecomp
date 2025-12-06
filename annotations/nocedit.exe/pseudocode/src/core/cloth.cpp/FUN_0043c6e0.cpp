// Name: core_cloth.cpp_FUN_0043c6e0
// Address: 0043c6e0
// Address Range: [[0043c6e0, 0043c813]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043c6e0()

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_FUN_0043c6e0(uint param_1) */

void core_cloth_cpp_FUN_0043c6e0(void)

{
  SRenderVertex *pSVar1;
  int iVar2;
  int iVar3;
  int x;
  int y;
  int in_stack_00000004;
  int local_14;
  
  pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
  if ((int)(pSVar1[in_stack_00000004].projected_vertex.screen_x & -0x80000000) == 0) {
    iVar2 = pSVar1[in_stack_00000004].projected_vertex.screen_y >> 0x10;
    x = pSVar1[in_stack_00000004].projected_vertex.screen_x >> 0x10;
    if ((((-1 < x) && (x < g_WindowWidth)) && (-1 < iVar2)) && (iVar2 < g_WindowHeight)) {
      engine_2d_c_plotPixel_FUN_00401140(x,iVar2);
    }
    iVar3 = local_14 + 3;
    y = local_14 + 1;
    iVar2 = x;
    do {
      local_14 = local_14 + -1;
      iVar2 = iVar2 + -1;
      x = x + 1;
      if (((-1 < iVar2) && (iVar2 < g_WindowWidth)) &&
         ((-1 < local_14 && (local_14 < g_WindowHeight)))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,local_14);
      }
      if (((-1 < iVar2) && (iVar2 < g_WindowWidth)) && ((-1 < y && (y < g_WindowHeight)))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,y);
      }
      if ((((-1 < x) && (x < g_WindowWidth)) && (-1 < local_14)) && (local_14 < g_WindowHeight)) {
        engine_2d_c_plotPixel_FUN_00401140(x,local_14);
      }
      if (((-1 < x) && (x < g_WindowWidth)) && ((-1 < y && (y < g_WindowHeight)))) {
        engine_2d_c_plotPixel_FUN_00401140(x,y);
      }
      y = y + 1;
    } while (y != iVar3);
  }
  return;
}
