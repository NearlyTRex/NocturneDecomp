// Name: core_path.cpp_renderGridQuad_FUN_00547dd0
// Address: 00547dd0
// MANUAL RECONSTRUCTION
// Address Range: [[00547dd0, 00547fb9]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderGridQuad_FUN_00547dd0(int grid_x,int grid_y,int grid_z,int red,int green,int blue,int alpha)

#include "nocturne.h"

void __cdecl core_path_cpp_renderGridQuad_FUN_00547dd0(int grid_x,int grid_y,int grid_z,int red,int green,int blue,int alpha)

{
  float fVar1;
  float fVar2;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CVector3i local_30;
  CDemonRenderer *this_ptr;
  
  fVar1 = g_CDemonRaytraceInstance.adjusted_size.x * 256.0f;
  fVar2 = g_CDemonRaytraceInstance.adjusted_size.z * 256.0f;
  iVar1 = alpha << 8;
  local_30.x = (int)ROUND(ROUND((float)grid_x * fVar1));
  local_30.z = (int)ROUND(ROUND((float)grid_z * fVar2));
  local_30.y = (int)ROUND(ROUND(256 +
                                (double)g_CDemonRaytraceInstance.bbox_min.y * 256 +
                                (double)grid_y *
                                (double)(g_CDemonRaytraceInstance.adjusted_size.y * 256.0f))
                         );
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_30);
  local_30.x = (int)ROUND(ROUND((float)local_30.x + fVar1));
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_30);
  local_30.z = (int)ROUND(ROUND((float)local_30.z + fVar2));
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_30);
  local_30.x = (int)ROUND(ROUND((float)local_30.x - fVar1));
  iVar2 = red << 8;
  iVar3 = green << 8;
  iVar4 = blue << 8;
  engine_special_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_30);
  this_ptr = g_CDemonRendererPtr2;
  g_CDemonRendererPtr2->vertex_buffer_ptr->r = iVar2;
  this_ptr->vertex_buffer_ptr->g = iVar3;
  this_ptr->vertex_buffer_ptr->b = iVar4;
  this_ptr->vertex_buffer_ptr->a = iVar1;
  this_ptr->vertex_buffer_ptr[1].r = iVar2;
  this_ptr->vertex_buffer_ptr[1].g = iVar3;
  this_ptr->vertex_buffer_ptr[1].b = iVar4;
  this_ptr->vertex_buffer_ptr[1].a = iVar1;
  this_ptr->vertex_buffer_ptr[2].r = iVar2;
  this_ptr->vertex_buffer_ptr[2].g = iVar3;
  this_ptr->vertex_buffer_ptr[2].b = iVar4;
  this_ptr->vertex_buffer_ptr[2].a = iVar1;
  this_ptr->vertex_buffer_ptr[3].r = iVar2;
  this_ptr->vertex_buffer_ptr[3].g = iVar3;
  this_ptr->vertex_buffer_ptr[3].b = iVar4;
  this_ptr->vertex_buffer_ptr[3].a = iVar1;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0048bba0
            (this_ptr,(SMRGLPrimitivePoly *)&SMRGLPrimitiveQuad_030d4fd0);
  return;
}
