// Name: core_actor.cpp_draw3DPointMarker_FUN_00409930
// Address: 00409930
// Address Range: [[00409930, 00409b81]]
// Convention: __cdecl
// Signature: void core_actor.cpp_draw3DPointMarker_FUN_00409930(CVector3f * world_position, int marker_color)

#include "nocturne.h"

void __cdecl
core_actor_cpp_draw3DPointMarker_FUN_00409930(CVector3f *world_position,int marker_color)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  int in_stack_0000000c;
  
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,
             (CVector3i *)&stack0xffffffec);
  pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
  if ((int)(pSVar3[19999].projected_vertex.screen_x & -0x80000000) == 0) {
    iVar5 = pSVar3[19999].projected_vertex.screen_x >> 0x10;
    g_ActiveRenderColor = in_stack_0000000c;
    iVar4 = pSVar3[19999].projected_vertex.screen_y >> 0x10;
    if ((((-1 < iVar5) && (-1 < iVar4)) && (iVar5 < g_WindowWidth)) && (iVar4 < g_WindowHeight)) {
      engine_2d_c_plotPixel_FUN_00401140(iVar5,iVar4);
    }
    iVar1 = iVar5 + -1;
    iVar2 = iVar4 + -1;
    if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
    }
    iVar1 = iVar5 + -1;
    iVar2 = iVar4 + 1;
    if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
    }
    iVar1 = iVar5 + 1;
    iVar2 = iVar4 + -1;
    if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < g_WindowWidth)) && (iVar2 < g_WindowHeight)) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
    }
    iVar1 = iVar5 + 1;
    iVar2 = iVar4 + 1;
    if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
    }
    iVar1 = iVar5 + -2;
    iVar2 = iVar4 + -2;
    if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
    }
    iVar1 = iVar5 + -2;
    iVar2 = iVar4 + 2;
    if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < g_WindowWidth)) && (iVar2 < g_WindowHeight)) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
    }
    iVar1 = iVar5 + 2;
    iVar2 = iVar4 + -2;
    if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
    }
    iVar5 = iVar5 + 2;
    iVar4 = iVar4 + 2;
    if (((-1 < iVar5) && (-1 < iVar4)) && ((iVar5 < g_WindowWidth && (iVar4 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar5,iVar4);
      return;
    }
  }
  return;
}
