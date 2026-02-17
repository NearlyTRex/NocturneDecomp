// Name: core_path.cpp_debugRenderGridQuad_FUN_00547dd0
// Address: 00547dd0
// Address Range: [[00547dd0, 00547fb9]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_debugRenderGridQuad_FUN_00547dd0(int grid_x,int grid_y,int grid_z,int color,int fog,float w_recip)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_path_cpp_debugRenderGridQuad_FUN_00547dd0(int grid_x,int grid_y,int grid_z,int color,int fog,float w_recip)

{
  CDemonRenderer *this_ptr;
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_0000001c;
  CVector3i local_30;
  float local_24;
  float local_20;
  float local_1c;
  int local_10;
  
  local_24 = g_CDemonRaytraceInstance.adjusted_size.x * 256.0f;
  local_20 = g_CDemonRaytraceInstance.adjusted_size.y * 256.0f;
  local_1c = g_CDemonRaytraceInstance.adjusted_size.z * 256.0f;
  fVar1 = (float)(in_stack_0000001c << 8);
  local_30.x = (int)ROUND(ROUND((float)grid_x * local_24));
  local_30.z = (int)ROUND(ROUND((float)grid_z * local_1c));
  local_30.y = (int)ROUND(ROUND(256 +
                                (double)g_CDemonRaytraceInstance.bbox_min.y * 256 +
                                (double)grid_y * (double)local_20));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_30);
  local_10 = local_30.x;
  local_30.x = (int)ROUND(ROUND((float)local_30.x + local_24));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_30);
  local_10 = local_30.z;
  local_30.z = (int)ROUND(ROUND((float)local_30.z + local_1c));
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_30);
  local_10 = local_30.x;
  local_30.x = (int)ROUND(ROUND((float)local_30.x - local_24));
  iVar2 = color << 8;
  iVar3 = fog << 8;
  iVar4 = (int)w_recip << 8;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_30);
  this_ptr = g_CDemonRendererPtr2;
  g_CDemonRendererPtr2->vertex_buffer_ptr->light = iVar2;
  this_ptr->vertex_buffer_ptr->color = iVar3;
  this_ptr->vertex_buffer_ptr->fog = iVar4;
  this_ptr->vertex_buffer_ptr->w_recip = fVar1;
  this_ptr->vertex_buffer_ptr[1].light = iVar2;
  this_ptr->vertex_buffer_ptr[1].color = iVar3;
  this_ptr->vertex_buffer_ptr[1].fog = iVar4;
  this_ptr->vertex_buffer_ptr[1].w_recip = fVar1;
  this_ptr->vertex_buffer_ptr[2].light = iVar2;
  this_ptr->vertex_buffer_ptr[2].color = iVar3;
  this_ptr->vertex_buffer_ptr[2].fog = iVar4;
  this_ptr->vertex_buffer_ptr[2].w_recip = fVar1;
  this_ptr->vertex_buffer_ptr[3].light = iVar2;
  this_ptr->vertex_buffer_ptr[3].color = iVar3;
  this_ptr->vertex_buffer_ptr[3].fog = iVar4;
  this_ptr->vertex_buffer_ptr[3].w_recip = fVar1;
  engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
            (this_ptr,&SMRGLPrimitiveQuad_030d4fd0.base);
  return;
}
