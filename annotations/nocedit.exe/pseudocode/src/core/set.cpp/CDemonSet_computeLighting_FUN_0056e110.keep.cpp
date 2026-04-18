// Name: core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
// Address: 0056e110
// MANUAL RECONSTRUCTION
// Address Range: [[0056e110, 0056e173]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count)

{
  int i;

  core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0
            (this_ptr,world_position,surface_normal,start_vertex_index,0);
  for (i = 1; i < vertex_count; i = i + 1) {
    g_RenderVertexBuffer[start_vertex_index + i].r = g_RenderVertexBuffer[start_vertex_index].r;
    g_RenderVertexBuffer[start_vertex_index + i].g = g_RenderVertexBuffer[start_vertex_index].g;
    g_RenderVertexBuffer[start_vertex_index + i].b = g_RenderVertexBuffer[start_vertex_index].b;
  }
  return (int)&g_RenderVertexBuffer[start_vertex_index + vertex_count];
}
