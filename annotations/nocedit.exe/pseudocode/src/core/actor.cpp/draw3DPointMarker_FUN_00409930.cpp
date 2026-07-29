// Name: core_actor.cpp_draw3DPointMarker_FUN_00409930
// Address: 00409930
// Address Range: [[00409930, 00409b81]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_draw3DPointMarker_FUN_00409930(CVector3f *world_position,int marker_color)

#include "nocturne.h"

void __cdecl core_actor_cpp_draw3DPointMarker_FUN_00409930(CVector3f *world_position,int marker_color)

{
  int iVar4;
  int iVar3;
  int iVar5;
  int iVar6;
  CVector3i local_14;
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  
  local_14.x = (int)ROUND(world_position->x * 256.0f);
  local_14.y = (int)ROUND(world_position->y * 256.0f);
  local_14.z = (int)ROUND(world_position->z * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr1->vertex_buffer_ptr[19999].projected_vertex,&local_14);
  pSVar3 = g_CDemonRendererPtr1->vertex_buffer_ptr;
  if ((int)(pSVar3[19999].projected_vertex.screen_x & -0x80000000) == 0) {
    iVar5 = pSVar3[19999].projected_vertex.screen_x >> 0x10;
    g_ActiveRenderColor = marker_color;
    iVar4 = pSVar3[19999].projected_vertex.screen_y >> 0x10;
    if ((((-1 < iVar5) && (-1 < iVar4)) && (iVar5 < g_WindowWidth)) && (iVar4 < g_WindowHeight)) {
      engine_2d_c_plotPixel_FUN_00401140(iVar5,iVar4);
    }
    iVar1 = iVar5 + -1;
    iVar2 = iVar4 + -1;
    if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
    }
    iVar3 = iVar5 + -1;
    iVar6 = iVar4 + 1;
    if (((-1 < iVar3) && (-1 < iVar6)) && ((iVar3 < g_WindowWidth && (iVar6 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar3,iVar6);
    }
    iVar3 = iVar5 + 1;
    iVar6 = iVar4 + -1;
    if ((((-1 < iVar3) && (-1 < iVar6)) && (iVar3 < g_WindowWidth)) && (iVar6 < g_WindowHeight)) {
      engine_2d_c_plotPixel_FUN_00401140(iVar3,iVar6);
    }
    iVar3 = iVar5 + 1;
    iVar6 = iVar4 + 1;
    if (((-1 < iVar3) && (-1 < iVar6)) && ((iVar3 < g_WindowWidth && (iVar6 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar3,iVar6);
    }
    iVar3 = iVar5 + -2;
    iVar6 = iVar4 + -2;
    if (((-1 < iVar3) && (-1 < iVar6)) && ((iVar3 < g_WindowWidth && (iVar6 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar3,iVar6);
    }
    iVar3 = iVar5 + -2;
    iVar6 = iVar4 + 2;
    if ((((-1 < iVar3) && (-1 < iVar6)) && (iVar3 < g_WindowWidth)) && (iVar6 < g_WindowHeight)) {
      engine_2d_c_plotPixel_FUN_00401140(iVar3,iVar6);
    }
    iVar3 = iVar5 + 2;
    iVar6 = iVar4 + -2;
    if (((-1 < iVar3) && (-1 < iVar6)) && ((iVar3 < g_WindowWidth && (iVar6 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar3,iVar6);
    }
    iVar6 = iVar5 + 2;
    iVar3 = iVar4 + 2;
    if (((-1 < iVar6) && (-1 < iVar3)) && ((iVar6 < g_WindowWidth && (iVar3 < g_WindowHeight)))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar6,iVar3);
      return;
    }
  }
  return;
}
